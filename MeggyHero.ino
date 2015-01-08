#include <MeggyJrSimple.h>

void setup() 
{
  MeggyJrSimpleSetup();
}


void CheckDotBlue()
{  
  CheckButtonsDown();
  
  if (Button_Left)
  {
    DrawPx(2,1,13);
    if (ReadPx(2,2) == 5)
    {
      Tone_Start(ToneC4,100);
      DrawPx(4,4,15);
    }
  }

}

void DispScreen()
{
  for (int leftLN_T = 7; leftLN_T > 2; leftLN_T--)
  {
    DrawPx(1,leftLN_T,15);
  } 
  for (int rightLN_T = 7; rightLN_T > 2; rightLN_T--)
  {
    DrawPx(6,rightLN_T,15);
  } 
  
  for (int leftLN_B = 0; leftLN_B < 2; leftLN_B++)
  {
    DrawPx(1,leftLN_B,15);
  }
  for (int rightLN_B = 0; rightLN_B < 2; rightLN_B++)
  {
    DrawPx(6,rightLN_B,15);
  } 
  
  for (int leftLN_T = 7; leftLN_T > 2; leftLN_T--)
  {
    DrawPx(1,leftLN_T,15);
  } 
  
  for (int rightLN_T = 7; rightLN_T > 2; rightLN_T--)
  {
    DrawPx(6,rightLN_T,15);
  } 
  
  DrawPx(0,2,12);
  DrawPx(1,2,12);
  DrawPx(6,2,12);
  DrawPx(7,2,12);
  
  //Remove Later
  DrawPx(2,0,5);
  DrawPx(3,0,1);
  DrawPx(4,0,4);
  DrawPx(5,0,3);
  
}
void Pressed()
{
  CheckButtonsDown();
  if (Button_Left)
  {
  DrawPx(2,1,13);
  
  }
  if (Button_Right)
  {
  DrawPx(3,1,8);
  }
  if (Button_B)
  {
  DrawPx(4,1,11);
  }
  if (Button_A)
  {
  DrawPx(5,1,10);
  
  }
}


int BlueY = 7;

void NoteBlue()
{
  for (int BlueY = 7; BlueY > 1; BlueY--)
  {
    ClearSlate();
    DrawPx(2,BlueY,5);
    delay(100);
    DispScreen();
    DisplaySlate();

  }
  CheckButtonsDown();
  if (Button_Left)
  {
    Tone_Start(ToneC4,200); 
  }
}

void NoteRed()
{
  for (int RedY = 7; RedY > 1; RedY--)
  {
    ClearSlate();
    DrawPx(2,RedY,1);
    delay(100);
    DispScreen();
    DisplaySlate();

  }
  CheckButtonsDown();
  if (Button_Left)
  {
    Tone_Start(ToneC4,200); 
  }
}

void loop() 
{

  DispScreen();
  Pressed();
  NoteBlue();
  DisplaySlate();
  CheckDotBlue(); 
  ClearSlate();
  
}


