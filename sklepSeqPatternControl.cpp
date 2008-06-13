/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  13 Jun 2008 9:14:51 pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.11

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "sklepSeqPatternControl.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
sklepSeqPatternControl::sklepSeqPatternControl ()
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (427, 100);

    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

sklepSeqPatternControl::~sklepSeqPatternControl()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void sklepSeqPatternControl::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.setColour (Colour (0x7b000000));
    g.fillRoundedRectangle (0.0f, (float) (-8), 427.0f, 108.0f, 10.0000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void sklepSeqPatternControl::resized()
{
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="sklepSeqPatternControl" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="1" initialWidth="427" initialHeight="100">
  <BACKGROUND backgroundColour="585858">
    <ROUNDRECT pos="0 -8 427 108" cornerSize="10" fill="solid: 7b000000" hasStroke="0"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: rondw_03_png, 1292, "C:\rondw_03.png"
static const unsigned char resource_sklepSeqPatternControl_rondw_03_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,4,211,73,68,65,84,120,218,197,
150,107,76,155,85,24,199,75,7,3,185,56,29,83,103,198,212,56,169,25,209,72,134,126,16,34,67,67,72,116,113,49,70,19,252,70,244,203,54,201,166,9,65,63,152,44,26,47,24,156,184,37,70,24,75,140,6,195,82,167,
164,110,241,3,155,208,150,210,118,200,26,185,180,64,144,113,43,247,251,253,206,227,243,127,115,78,243,190,29,123,11,205,18,223,228,151,54,231,60,207,255,249,159,231,61,231,180,6,34,50,252,159,236,40,248,
210,165,178,61,204,91,76,25,211,40,104,22,159,63,50,121,204,67,247,220,0,139,238,23,69,215,111,220,168,166,182,54,31,141,142,142,42,76,76,140,43,159,29,29,237,100,179,213,82,69,197,79,196,113,191,48,79,
221,19,3,44,148,207,204,121,60,141,180,177,177,65,155,155,155,33,105,110,110,130,137,21,230,211,176,13,112,242,110,172,218,225,168,163,201,201,9,165,248,78,88,92,92,36,228,178,198,175,76,124,56,6,202,
156,78,7,173,175,175,107,88,91,91,211,37,56,222,237,118,194,132,133,217,181,109,3,28,124,210,225,176,223,33,190,186,186,170,48,59,59,75,125,125,125,212,217,217,169,128,239,24,147,243,193,121,245,245,74,
39,62,223,150,1,14,60,128,119,142,141,37,5,193,202,202,74,0,20,44,44,40,208,128,49,117,140,58,119,126,126,30,6,214,153,212,237,24,40,187,117,235,111,77,209,229,229,101,13,29,29,29,244,225,153,51,26,48,
22,28,167,54,211,218,218,2,19,213,186,6,112,134,225,84,10,44,45,45,41,96,67,169,105,107,107,163,83,39,78,104,192,88,112,156,204,151,122,102,243,101,152,120,90,207,192,73,187,221,26,40,46,133,22,22,22,
52,248,124,62,122,55,47,79,3,198,130,227,130,141,184,92,202,134,252,88,207,192,207,62,159,87,83,120,124,124,156,186,186,186,200,235,245,6,168,169,169,161,119,114,115,53,96,76,29,131,28,228,170,141,116,
119,119,195,192,95,122,6,26,253,254,126,37,9,27,103,110,110,78,217,229,111,28,63,30,22,200,133,6,180,228,98,184,134,95,207,64,239,216,216,104,160,56,142,86,75,75,11,229,100,103,135,5,114,161,33,77,224,
19,55,164,174,129,222,222,30,26,26,26,162,129,129,1,234,239,239,39,167,211,73,25,233,233,97,129,92,104,64,11,154,32,148,129,70,180,109,120,120,152,6,7,7,201,239,247,147,199,227,161,212,212,212,176,64,
46,52,160,5,77,188,94,174,49,170,103,224,114,83,211,63,52,50,50,18,232,2,54,19,132,92,46,87,0,139,197,66,38,147,73,3,198,212,49,200,65,174,92,61,52,219,219,219,97,160,78,207,192,123,215,175,87,211,216,
216,152,198,4,192,74,36,40,112,48,41,73,3,198,212,49,50,15,26,88,61,110,86,151,171,30,6,190,210,51,176,23,23,17,12,32,1,137,16,64,11,165,32,112,187,221,180,47,49,81,3,198,212,49,200,81,23,199,9,184,114,
197,12,3,105,6,131,97,107,3,120,240,26,26,26,110,242,31,141,9,146,70,208,13,105,6,52,52,52,80,124,92,156,6,140,201,121,196,2,228,65,3,90,94,111,43,138,223,52,136,231,174,6,74,75,191,79,198,78,133,192,
228,228,164,226,92,26,145,224,120,69,69,69,105,192,152,58,6,57,200,133,198,212,212,20,93,189,106,161,139,23,127,200,9,105,128,159,136,242,242,210,207,106,107,107,104,122,122,90,73,134,8,86,1,65,128,22,
227,234,197,70,3,248,142,49,57,143,88,89,24,26,54,155,21,197,203,89,219,8,125,61,3,152,220,197,196,112,39,254,172,171,179,209,204,204,140,198,136,4,69,212,168,231,100,97,228,58,157,245,196,90,238,140,
140,244,7,88,55,114,59,6,162,152,251,77,166,228,228,243,231,191,173,183,90,107,148,2,184,209,32,40,13,109,133,156,151,183,159,221,110,163,11,23,74,60,153,153,47,189,192,154,123,153,104,217,133,187,25,
48,138,32,4,155,152,163,133,133,5,191,87,85,253,198,239,184,89,185,78,229,149,186,21,114,30,255,144,175,93,251,131,206,158,253,196,154,144,144,240,26,235,60,203,60,194,196,138,14,235,26,216,205,60,200,
28,98,50,152,55,179,178,50,191,40,42,250,242,223,202,202,10,254,123,229,160,219,183,187,148,43,86,254,236,226,253,247,244,116,43,63,183,102,115,37,21,23,127,221,123,236,216,171,223,113,110,46,243,10,147,
194,60,204,220,23,170,3,17,226,61,197,49,251,153,195,194,4,86,241,118,74,202,225,15,242,243,79,153,217,76,251,185,115,197,189,124,90,112,180,168,164,228,155,129,226,226,162,206,211,167,223,175,74,75,59,
242,145,40,252,58,147,197,60,199,28,100,246,136,197,25,67,237,1,163,216,7,241,194,245,19,98,5,71,152,23,153,76,230,101,38,155,201,17,100,139,149,30,101,210,153,231,153,103,68,23,31,21,197,163,101,251,
67,30,67,149,137,24,38,129,73,20,239,240,0,243,152,48,245,164,40,112,72,124,199,216,227,76,146,232,222,62,81,56,86,104,5,138,135,50,32,77,72,35,145,162,117,49,66,44,78,116,39,33,136,120,49,23,43,98,163,
131,10,71,168,11,132,50,16,108,68,154,49,10,65,73,164,10,57,102,84,93,56,119,20,222,169,129,80,166,182,98,91,143,172,249,31,149,126,4,0,44,118,84,205,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* sklepSeqPatternControl::rondw_03_png = (const char*) resource_sklepSeqPatternControl_rondw_03_png;
const int sklepSeqPatternControl::rondw_03_pngSize = 1292;

// JUCER_RESOURCE: rondw_11_png, 1298, "C:\rondw_11.png"
static const unsigned char resource_sklepSeqPatternControl_rondw_11_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,4,217,73,68,65,84,120,218,197,
150,123,104,91,85,28,199,211,172,46,181,107,93,157,175,185,250,194,217,142,21,69,89,231,31,174,216,197,49,6,58,138,32,10,14,255,17,28,194,180,155,254,81,170,127,8,67,241,81,169,179,110,32,182,235,64,148,
74,71,156,150,185,225,31,221,92,146,230,185,53,75,77,155,100,29,125,37,109,250,74,155,190,223,175,227,239,123,57,231,114,243,232,77,58,6,6,62,36,244,254,206,247,247,57,231,158,123,110,53,140,49,205,255,
201,134,138,207,157,171,217,74,188,73,212,16,46,78,43,255,254,153,120,151,120,232,174,11,80,232,118,222,116,229,234,213,70,118,235,150,159,133,195,97,137,72,100,84,250,190,125,187,157,153,205,70,86,87,
247,11,163,186,223,136,103,238,138,0,5,149,18,211,110,183,139,173,174,174,178,181,181,181,164,180,182,122,32,177,72,124,126,199,2,52,120,51,102,109,181,90,216,216,88,68,106,190,17,230,230,230,24,198,82,
198,239,68,214,157,8,212,216,237,86,182,178,178,18,197,242,242,178,42,177,245,78,167,29,18,23,137,77,41,11,80,241,49,171,181,41,46,124,105,105,41,37,98,199,217,108,210,74,124,153,146,0,21,230,226,158,
99,99,41,67,23,23,23,55,132,114,236,204,204,12,4,86,136,23,82,17,168,185,121,179,57,170,233,194,194,66,20,19,19,19,44,24,12,74,224,119,236,117,129,82,198,235,109,131,68,163,170,0,158,97,152,138,128,249,
249,121,9,108,40,37,61,61,61,172,188,172,76,162,165,165,133,54,233,88,92,13,16,227,69,158,193,112,30,18,187,212,4,142,53,53,153,228,230,34,104,118,118,54,10,191,223,207,62,58,126,92,6,18,145,72,36,174,
46,86,196,225,144,54,228,167,106,2,191,250,253,190,168,198,184,127,177,248,124,62,246,254,209,163,81,184,221,110,54,58,58,26,87,171,20,193,202,81,143,127,212,4,92,161,80,159,220,120,122,122,154,77,77,
77,197,225,245,122,217,59,71,142,196,225,114,185,164,83,81,89,139,12,33,2,65,234,17,82,19,8,142,140,132,163,154,79,78,78,198,209,214,214,198,94,47,41,73,72,115,115,51,27,30,30,150,107,149,18,248,198,9,
169,42,16,12,6,216,224,224,32,235,239,239,103,125,125,125,172,183,183,87,222,241,2,155,205,198,14,232,245,235,2,65,212,97,44,50,144,133,76,144,76,192,213,209,209,193,134,134,134,216,192,192,0,11,133,66,
178,132,18,187,221,206,246,22,22,38,196,104,52,50,100,136,230,200,64,22,50,113,123,169,71,88,77,224,188,199,243,175,180,132,98,21,132,132,18,135,195,193,118,229,231,199,129,230,157,157,157,114,29,198,
138,217,35,179,189,189,29,2,22,53,129,247,174,92,105,100,35,35,35,81,18,66,68,0,129,220,29,59,162,48,153,76,172,171,171,75,174,17,227,144,129,217,99,115,58,28,54,8,124,163,38,176,13,7,17,4,48,0,3,17,128,
37,20,129,192,233,116,178,156,156,28,25,179,217,204,186,187,187,163,106,48,70,217,28,79,192,133,11,6,8,20,106,52,154,196,2,248,224,54,220,184,113,93,58,88,132,8,86,67,200,0,143,199,195,116,58,157,132,
197,98,97,129,64,64,190,38,154,2,140,67,6,178,124,62,47,154,95,215,240,207,186,2,213,213,63,230,97,167,34,0,71,44,204,133,136,0,27,12,59,29,224,55,26,1,101,13,198,96,44,50,198,199,199,217,165,75,23,217,
217,179,63,29,74,42,64,159,180,218,218,234,47,140,198,107,210,139,6,131,17,130,89,32,48,21,80,43,26,35,195,108,54,161,121,45,101,107,145,175,38,128,139,155,136,12,90,137,191,45,22,179,116,152,40,69,4,
104,162,68,121,77,52,198,88,187,221,198,40,203,89,84,180,47,135,114,211,83,17,184,135,184,47,63,63,47,239,244,233,239,109,38,211,53,169,129,242,84,68,120,34,98,79,191,166,38,51,59,115,166,202,93,92,252,
242,139,148,185,141,208,137,85,88,79,64,203,139,80,156,79,236,47,47,47,251,179,161,225,15,186,223,173,242,11,6,225,137,16,215,241,31,242,229,203,127,177,147,39,63,51,101,103,103,191,70,57,207,17,143,16,
153,124,133,85,5,54,19,247,19,59,137,34,226,13,189,190,248,171,138,138,175,59,235,235,235,232,24,182,210,35,215,37,29,52,226,181,139,199,46,16,232,145,94,183,6,67,61,171,172,252,54,120,248,240,171,63,
208,216,183,137,3,68,1,241,48,113,111,178,21,72,227,247,105,11,177,157,216,205,37,48,139,183,10,10,118,127,92,90,250,129,129,100,218,79,157,170,12,210,211,130,71,139,85,85,125,215,95,89,89,209,113,226,
196,135,13,133,133,123,62,225,141,75,8,61,241,60,241,56,177,149,79,78,155,108,15,104,249,62,200,226,214,79,241,25,236,33,94,34,138,137,87,136,131,196,33,206,65,62,211,253,196,62,98,47,241,44,95,197,71,
121,115,157,88,254,164,143,161,66,34,131,200,38,30,224,247,48,151,120,130,75,61,205,27,236,228,191,241,183,39,137,199,248,234,61,200,27,103,242,44,185,121,50,1,33,33,68,210,249,210,101,240,176,45,124,
117,178,99,200,226,215,50,121,173,46,166,113,154,178,65,50,129,88,17,33,163,229,129,130,116,5,226,111,90,197,129,19,215,120,163,2,201,164,18,145,210,71,244,252,15,222,111,112,155,75,169,194,28,0,0,0,0,
73,69,78,68,174,66,96,130,0,0};

const char* sklepSeqPatternControl::rondw_11_png = (const char*) resource_sklepSeqPatternControl_rondw_11_png;
const int sklepSeqPatternControl::rondw_11_pngSize = 1298;

// JUCER_RESOURCE: rondw_12_png, 1237, "C:\rondw_12.png"
static const unsigned char resource_sklepSeqPatternControl_rondw_12_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,4,156,73,68,65,84,120,218,197,
150,89,76,92,101,20,199,135,41,22,4,198,106,221,106,74,213,88,193,148,104,36,69,31,44,145,162,33,36,218,248,98,52,193,55,19,95,218,74,26,31,8,250,96,210,104,92,48,88,177,77,140,80,154,24,13,134,102,172,
146,218,198,7,90,103,99,6,104,165,68,150,161,195,62,192,176,205,176,239,203,192,241,252,111,190,111,114,103,24,238,29,72,19,39,249,229,194,189,231,252,207,239,126,119,153,49,16,145,225,255,100,71,197,
151,46,85,236,99,222,97,42,152,38,65,171,216,254,196,188,207,60,122,207,5,56,244,128,24,26,188,121,179,150,238,222,237,32,191,223,175,48,57,57,161,108,59,59,61,100,183,91,169,170,234,103,226,186,95,153,
103,239,137,0,7,21,50,243,205,205,77,180,177,177,65,155,155,155,186,180,182,182,64,98,149,249,108,215,2,220,188,23,103,237,116,214,209,212,212,164,50,124,39,44,45,45,17,122,57,227,55,38,101,55,2,21,245,
245,78,10,6,131,97,172,175,175,107,18,89,223,216,88,15,137,171,204,158,152,5,184,248,148,211,233,216,18,190,182,182,22,19,145,125,46,151,178,18,95,196,36,192,133,7,113,205,113,99,169,67,87,87,87,119,132,
186,119,97,97,1,2,65,38,51,22,129,138,59,119,254,9,27,186,178,178,178,43,212,50,237,237,109,144,168,213,20,192,51,12,83,25,176,188,188,172,128,27,106,55,200,126,153,103,54,95,134,196,115,90,2,167,28,14,
91,104,184,12,90,92,92,220,21,145,34,13,13,202,13,249,137,150,192,47,29,29,238,176,193,184,126,96,98,98,130,122,123,123,201,237,118,235,130,58,212,163,79,45,210,223,223,15,129,191,181,4,154,124,190,161,
208,224,249,249,121,154,155,155,83,232,238,238,166,226,162,162,152,65,61,250,144,33,69,32,197,51,124,90,2,3,129,128,63,108,248,236,236,172,66,87,87,23,157,62,121,50,102,80,143,62,181,4,182,120,67,106,
10,12,12,120,105,116,116,148,134,135,135,105,104,104,136,6,7,7,137,119,42,129,22,139,133,222,43,40,208,5,117,168,71,47,50,144,133,76,160,39,208,132,165,27,27,27,163,145,145,17,242,249,124,33,9,128,99,
86,171,149,242,243,242,182,5,199,81,39,135,35,3,89,200,196,229,229,25,126,45,129,203,45,45,255,210,248,248,120,104,21,164,132,164,167,167,71,25,146,153,153,185,5,236,199,113,89,139,94,121,246,200,244,
120,60,16,168,211,18,248,224,198,141,90,10,4,2,97,18,82,68,130,187,220,102,179,209,161,212,212,16,248,31,251,101,141,236,67,6,206,30,111,214,134,6,23,4,190,214,18,216,143,23,17,4,208,128,70,4,96,9,101,
160,164,175,175,143,191,255,237,148,146,156,172,108,241,191,250,56,122,212,195,241,4,92,185,98,134,64,150,193,96,136,46,128,15,46,195,237,219,183,248,135,198,36,73,17,172,134,148,81,227,245,122,249,135,
72,167,178,85,239,71,45,64,31,50,144,229,118,183,99,248,45,131,248,108,43,80,94,254,67,26,238,84,4,76,77,77,41,230,82,68,130,224,104,168,107,208,131,94,100,76,79,79,211,181,107,87,233,226,197,31,243,117,
5,248,19,87,89,89,254,185,213,106,161,153,153,25,165,25,33,56,11,4,198,2,106,229,96,100,216,237,54,12,175,228,108,35,242,181,4,112,112,15,147,200,43,241,87,93,157,93,121,153,168,69,36,24,162,70,125,76,
14,70,111,125,189,139,56,171,49,59,251,216,131,156,27,31,139,192,125,204,3,233,233,105,105,231,207,127,231,178,217,44,202,0,245,91,17,225,209,144,199,229,219,207,225,176,211,133,11,101,205,57,57,175,190,
204,153,251,153,4,185,10,219,9,24,69,17,138,211,153,227,197,197,69,127,212,212,252,78,109,109,173,161,47,38,132,71,67,30,199,47,228,235,215,255,164,179,103,63,181,153,76,166,55,57,231,5,230,113,38,73,
172,176,166,192,94,230,33,230,48,147,205,188,157,155,155,243,101,73,201,87,61,213,213,85,252,243,202,201,143,92,175,242,162,145,95,187,120,236,188,222,126,229,235,214,108,174,166,210,210,111,6,78,156,
120,227,123,238,45,96,94,103,50,152,199,152,251,245,86,32,78,92,167,100,230,0,115,68,72,224,44,222,205,200,56,242,81,97,225,105,51,203,120,206,157,43,29,224,167,5,143,22,149,149,125,59,92,90,90,210,125,
230,204,135,53,89,89,71,63,22,131,223,98,114,153,23,153,67,204,62,113,114,70,189,123,192,40,238,131,20,97,253,180,56,131,163,204,43,76,14,243,26,147,199,228,11,242,196,153,30,103,142,49,47,49,207,139,
85,124,66,12,79,144,203,175,251,24,170,36,18,25,19,243,176,184,134,7,153,39,133,212,51,98,192,97,241,55,246,61,197,164,138,213,123,68,12,78,18,89,161,225,122,2,82,66,138,196,139,165,75,20,97,201,98,117,
76,17,164,136,99,73,162,54,33,98,112,156,122,128,158,64,164,136,148,49,138,64,73,188,10,185,207,168,122,225,108,25,188,83,1,61,169,104,196,244,145,51,255,3,185,124,125,27,75,165,143,26,0,0,0,0,73,69,78,
68,174,66,96,130,0,0};

const char* sklepSeqPatternControl::rondw_12_png = (const char*) resource_sklepSeqPatternControl_rondw_12_png;
const int sklepSeqPatternControl::rondw_12_pngSize = 1237;

// JUCER_RESOURCE: rondw_13_png, 1233, "C:\rondw_13.png"
static const unsigned char resource_sklepSeqPatternControl_rondw_13_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,4,152,73,68,65,84,120,218,197,
150,91,76,28,85,24,199,151,45,22,228,98,181,222,106,74,213,88,193,148,104,36,69,31,44,145,162,33,36,218,248,98,52,193,55,19,95,218,74,26,31,8,250,96,210,104,188,96,176,98,155,24,161,52,49,26,12,205,90,
37,181,141,15,180,194,46,44,187,180,44,139,92,75,65,238,203,109,151,93,238,247,203,231,247,159,156,179,153,93,150,153,129,52,113,147,95,6,102,190,243,255,126,115,230,204,217,53,17,145,233,255,100,71,197,
151,46,149,238,99,222,97,74,25,151,160,85,28,127,98,222,103,30,189,231,2,28,122,64,52,93,191,121,179,138,238,220,233,36,175,215,171,224,247,79,42,199,187,119,187,200,102,171,161,242,242,159,137,235,126,
101,158,189,39,2,28,148,199,204,185,221,46,218,216,216,160,205,205,77,93,90,91,91,32,177,194,124,182,107,1,30,188,23,119,109,183,215,81,32,224,87,154,239,132,197,197,69,194,88,206,248,141,73,216,141,64,
169,195,97,167,245,245,245,16,214,214,214,52,9,175,111,104,112,64,226,42,179,199,176,0,23,159,178,219,107,183,132,175,174,174,26,34,124,92,125,189,50,19,95,24,18,224,194,131,120,230,88,88,234,208,149,
149,149,29,161,30,59,63,63,15,129,117,38,205,136,64,105,83,83,99,72,211,229,229,229,93,161,150,105,111,111,131,68,149,166,0,222,97,152,202,128,165,165,37,5,44,168,72,4,2,1,26,27,27,83,142,145,174,203,
241,50,207,98,185,12,137,231,180,4,78,213,214,90,131,205,101,208,194,194,194,22,252,126,63,53,55,55,83,65,126,190,114,196,255,225,53,225,34,78,167,178,32,63,209,18,248,165,179,179,35,164,49,158,95,56,
147,147,147,228,118,187,233,244,201,147,65,240,63,206,135,215,170,69,250,251,251,33,240,183,150,128,203,227,25,14,54,158,155,155,163,217,217,217,16,176,56,93,46,23,189,151,155,187,5,156,199,117,117,61,
50,164,8,4,185,135,71,75,96,208,231,243,134,52,159,153,153,9,50,49,49,65,141,141,141,148,147,157,189,45,184,142,58,57,70,45,129,35,118,72,77,129,193,193,1,101,97,141,140,140,208,240,240,48,13,13,13,17,
159,164,238,238,110,170,174,174,166,180,180,52,93,80,135,122,140,69,6,178,144,9,244,4,92,61,61,61,52,62,62,78,163,163,163,228,241,120,130,18,77,77,77,116,40,41,201,48,168,199,88,100,32,11,153,120,188,
220,195,171,37,112,185,165,229,31,101,10,229,44,72,9,44,178,132,248,120,195,160,30,99,229,221,35,179,171,171,11,2,117,90,2,31,220,184,81,69,62,159,47,68,2,244,246,246,42,175,155,211,233,212,5,117,125,
125,125,193,230,184,123,44,78,167,179,30,2,95,107,9,236,199,70,4,1,12,192,64,4,96,10,165,136,81,48,70,221,28,111,192,149,43,22,8,164,155,76,166,200,2,248,224,49,220,190,125,75,217,88,164,8,102,67,202,
24,1,181,0,227,144,129,172,142,142,118,52,191,101,18,159,109,5,74,74,126,72,198,74,69,0,182,88,152,75,17,9,130,35,161,174,193,24,140,69,198,212,212,20,93,187,118,149,46,94,252,49,71,87,128,63,81,101,101,
37,159,215,212,84,211,244,244,180,50,24,33,184,11,4,26,1,181,178,49,50,108,54,43,154,151,113,182,25,249,90,2,184,184,135,137,229,153,248,171,174,206,166,108,38,106,17,9,154,168,81,95,147,141,49,214,225,
168,39,206,106,200,200,56,246,32,231,70,27,17,184,143,121,32,37,37,57,249,252,249,239,234,173,214,106,165,129,122,87,68,120,36,194,119,191,218,90,27,93,184,80,236,206,204,124,245,101,206,220,207,196,200,
89,216,78,192,44,138,80,156,194,28,47,40,200,255,163,178,242,119,106,107,107,13,126,193,32,60,18,242,58,126,33,95,191,254,39,157,61,251,169,53,49,49,241,77,206,121,129,121,156,137,19,51,172,41,176,151,
121,136,57,204,100,48,111,103,101,101,126,89,88,248,213,191,21,21,229,252,243,202,206,239,120,175,178,57,201,175,93,188,118,3,3,253,202,215,173,197,82,65,69,69,223,12,158,56,241,198,247,60,54,151,121,
157,73,101,30,99,238,215,155,129,40,241,156,226,153,3,204,17,33,129,187,120,55,53,245,200,71,121,121,167,45,44,211,117,238,92,209,32,191,45,120,181,168,184,248,219,145,162,162,194,158,51,103,62,172,76,
79,63,250,177,104,252,22,147,197,188,200,28,98,246,137,155,51,235,173,1,179,88,7,9,194,250,105,113,7,71,153,87,152,76,230,53,38,155,201,17,100,139,59,61,206,28,99,94,98,158,23,179,248,132,104,30,35,167,
95,247,53,84,73,196,50,137,204,195,226,25,30,100,158,20,82,207,136,6,135,197,223,56,247,20,147,36,102,239,17,209,56,78,100,5,155,235,9,72,9,41,18,45,166,46,86,132,197,139,217,73,12,35,65,92,139,19,181,
49,97,141,163,212,13,244,4,194,69,164,140,89,4,74,162,85,200,115,102,213,134,179,165,241,78,5,244,164,34,97,232,35,123,254,7,225,105,104,194,153,32,149,196,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* sklepSeqPatternControl::rondw_13_png = (const char*) resource_sklepSeqPatternControl_rondw_13_png;
const int sklepSeqPatternControl::rondw_13_pngSize = 1233;

// JUCER_RESOURCE: rondw_14_png, 1286, "C:\rondw_14.png"
static const unsigned char resource_sklepSeqPatternControl_rondw_14_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,4,205,73,68,65,84,120,218,197,
87,93,76,91,101,24,126,79,75,203,207,70,139,12,34,4,104,65,39,148,178,57,161,33,142,93,152,185,100,9,87,38,36,75,188,54,108,149,69,205,110,100,122,131,196,197,248,131,27,106,8,49,18,183,184,24,153,23,
75,118,65,200,46,244,130,37,50,177,163,48,126,70,135,67,154,182,118,116,76,87,228,167,20,250,231,251,30,191,143,156,158,158,158,182,122,225,73,158,124,231,124,63,239,243,124,239,247,126,239,247,29,33,
145,72,192,255,249,228,229,210,249,242,229,33,35,22,39,25,108,172,90,143,216,69,204,33,110,33,70,59,59,237,143,179,181,41,100,227,1,36,174,192,226,125,68,103,109,109,157,182,170,170,26,14,28,40,19,219,
180,90,13,196,98,113,8,6,159,64,32,176,2,62,159,23,194,225,240,48,54,245,162,144,165,255,44,0,201,223,196,226,163,150,22,219,254,35,71,154,65,16,132,140,130,231,231,231,192,225,152,32,175,124,140,34,122,
255,149,0,36,38,215,14,88,44,86,187,213,106,5,163,177,36,167,181,221,217,217,129,169,41,39,220,191,191,112,29,63,95,67,33,155,74,253,52,42,54,6,172,214,38,251,209,163,109,96,48,24,129,132,18,226,241,184,
42,120,63,189,94,15,52,246,208,161,195,167,208,214,119,56,33,109,214,2,176,243,89,139,165,209,222,218,250,226,158,65,78,46,253,86,130,188,143,205,214,10,141,141,214,87,88,12,101,22,128,228,85,88,244,213,
215,91,114,38,79,215,151,98,7,159,119,209,246,11,217,120,224,189,230,230,150,253,37,37,37,25,201,183,183,183,49,242,3,34,232,61,157,136,127,150,227,24,45,65,159,170,0,84,88,78,91,173,169,233,112,198,181,
14,133,66,224,118,187,97,112,96,64,68,48,24,84,237,127,240,224,115,20,75,39,145,163,65,205,3,167,234,235,27,196,96,81,115,49,205,214,227,241,192,55,87,174,136,209,78,144,123,64,9,53,53,38,50,221,161,38,
160,173,172,172,60,201,125,114,247,115,242,47,7,7,197,119,142,108,98,161,162,162,18,88,22,77,155,138,173,6,131,33,197,16,127,48,195,129,215,235,133,207,46,93,74,9,28,78,152,146,104,48,113,113,20,23,23,
83,85,131,154,128,242,252,252,124,69,1,156,252,131,11,23,20,147,134,92,172,210,67,182,137,67,245,48,162,224,138,70,99,41,137,101,125,125,29,222,233,238,78,107,156,218,215,214,214,20,103,175,209,104,68,
100,147,7,30,239,238,70,146,220,198,81,80,80,0,61,189,189,176,190,177,161,8,165,49,114,196,98,81,226,248,75,77,192,82,40,180,149,86,64,77,77,13,124,122,241,34,108,32,161,28,217,8,216,220,220,34,142,69,
53,1,63,172,174,174,238,185,140,192,93,200,69,152,76,38,248,106,104,8,141,109,38,65,30,112,242,177,132,96,240,79,234,246,147,154,128,27,30,143,59,38,95,63,185,39,72,196,240,181,107,176,133,241,194,161,
52,99,169,8,130,223,239,39,211,215,165,71,122,146,128,211,167,95,127,66,29,220,238,101,188,104,104,83,192,13,21,22,22,130,217,108,134,145,145,145,189,60,64,117,188,93,218,151,143,125,244,40,128,65,26,
116,32,135,83,117,23,68,163,209,158,217,217,187,29,38,147,89,79,57,92,186,19,164,91,142,139,152,156,156,20,235,140,70,163,72,164,180,3,168,92,94,254,141,108,245,100,60,140,186,186,222,88,66,130,79,92,
174,133,164,25,40,205,170,168,168,8,42,43,43,69,208,187,188,157,143,153,157,157,129,149,149,135,95,219,237,103,127,36,109,106,2,168,81,115,230,76,215,135,139,139,174,155,115,115,51,73,1,41,15,78,249,122,
43,97,97,225,30,184,92,247,126,185,122,245,219,110,165,9,107,210,228,6,125,127,255,231,231,240,74,117,123,122,218,137,251,55,150,50,43,165,248,144,215,205,204,220,197,37,114,76,15,15,127,255,214,248,248,
109,178,171,101,147,20,20,239,132,56,19,234,164,67,236,67,208,181,183,242,252,249,183,207,181,181,181,117,208,113,90,87,247,204,94,12,40,94,48,89,116,251,253,191,195,131,7,191,194,157,59,142,91,253,253,
95,244,97,158,240,97,245,42,98,131,174,139,136,120,130,25,81,18,144,199,4,148,34,232,58,254,244,241,227,47,217,218,219,219,95,53,155,77,207,154,76,181,226,154,235,116,122,40,45,45,21,199,81,10,142,68,
118,113,157,233,90,238,193,211,210,235,29,27,27,187,49,58,122,115,130,17,7,16,127,72,4,36,210,9,16,152,155,232,212,160,163,235,41,38,132,126,72,246,89,173,141,85,39,78,188,124,172,186,186,250,121,157,
78,87,104,52,26,196,3,30,103,248,16,119,79,200,231,243,205,143,143,255,60,225,116,78,121,176,122,139,17,6,17,180,189,215,17,219,180,209,152,7,32,157,0,169,136,34,9,10,88,157,142,181,107,37,49,20,103,160,
36,22,97,127,74,97,70,24,98,8,115,114,230,1,69,1,32,9,18,78,162,99,191,95,121,12,156,88,35,9,166,4,55,204,68,68,25,34,18,196,37,125,64,77,0,72,12,11,18,50,41,169,32,223,207,204,112,66,38,38,46,1,239,147,
20,200,233,126,78,165,97,30,99,16,100,226,228,239,137,52,165,252,61,167,191,99,37,35,66,14,99,50,62,127,3,178,102,139,130,202,22,158,211,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* sklepSeqPatternControl::rondw_14_png = (const char*) resource_sklepSeqPatternControl_rondw_14_png;
const int sklepSeqPatternControl::rondw_14_pngSize = 1286;
