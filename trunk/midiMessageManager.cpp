// midiMessageManager.cpp: implementation of the midiMessageManager class.
//
//////////////////////////////////////////////////////////////////////

#include "midiMessageManager.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

midiMessageManager::midiMessageManager()
{
	m.clear();
	initDevices();
	midiOutputList.clear();
}

midiMessageManager::~midiMessageManager()
{
	m.clear();
	device.clear();
	midiOutputList.clear();
}

void midiMessageManager::processMidiEvents (MidiBuffer *b)
{
	if (m.size() > 0)
	{
		for (int x=0; x<m.size(); x++)
		{
			myMidiMessage *msg = m[x];
			if (msg)
			{
				/* out to device */
				if (isDeviceOpen (msg->getDeviceId()))
				{
					sendMessageToDevice (msg);
				}
				m.remove (x, true);
			}
			
			if (b)
			{
				if (msg->isMulti())
				{
					b->addEvents (*msg->getMidiBuffer(), 0, -1, 0);
				}
				else
				{
					b->addEvent (*msg->getMidiMessage(), 0);
				}
			}
		}
	}
	else
	{
		return;
	}
}

MidiBuffer midiMessageManager::getLeftMessages()
{
	MidiBuffer b;

	for (int x=0; x<m.size(); x++)
	{
		if (m[x]->m)
		{
			b.addEvent (*m[x]->m, x);
		}
		if (m[x]->mB)
		{
			b.addEvents (*m[x]->mB, 0, 0, 0);
		}
	}

	return (b);
}

void midiMessageManager::clear()
{
	m.clear();
}

void midiMessageManager::sendMessageToDevice (myMidiMessage *m)
{
	const MidiMessage *msg = m->m;
	const MidiBuffer *msgB = m->mB;

	const deviceId = m->getDeviceId();
	
	if (msg)
	{
		if (device[deviceId])
		{
			device[deviceId]->sendMessage (msg);
		}
	}
	else if (msgB)
	{
		if (device[deviceId])
		{
			device[deviceId]->sendMessageBuffer (msgB);
		}
	}

	const int e = m->getExtraEvents()->size();
	if (e>0)
	{
		/* extra events from other messages go here */
	}
	device[deviceId]->process();
}

bool midiMessageManager::isDeviceOpen(int id)
{
	if (device[id])
	{
		return (device[id]->isOpen());
	}
	else
	{
		return (false);
	}
}

void midiMessageManager::initDevices()
{
	device.clear();
	
	device.add (new midiDevice (0));

	int len = MidiOutput::getDevices().size();

	for (int x=0; x<len; x++)
	{
		device.add (new midiDevice (x+1));
	}
}

void midiMessageManager::prepareDevice (int i)
{
	/* devices are indexed on a +1 basis, due to ComboBox internals
		subtract one but only in this method, don't do it anywhere else */

	int deviceId = i-1;
	Logger::writeToLog (String::formatted (T("prepareDevice: %d"), deviceId));

	if (deviceId == 0)
	{
		Logger::writeToLog (T("internal midi device, no need to open"));
		return;
	}

	if (device[deviceId])
	{
		if (device[deviceId]->isOpen())
		{
			Logger::writeToLog (T("device already opened"));
			return;
		}
		else
		{
			Logger::writeToLog (T("device not opened, trying"));
			device[deviceId]->openDevice();
		}
	}
}

int midiMessageManager::getCurrentEventsCount()
{
	return (m.size());
}