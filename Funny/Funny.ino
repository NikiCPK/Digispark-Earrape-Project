#include "DigiKeyboard.h"
#include "DigiKeyboardDe.h"

void setup() {
  digitalWrite(1,HIGH);

  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  delay(100);

  DigiKeyboardDe.print("powershell.exe");

  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

  delay(500);

  DigiKeyboardDe.print("Function Set-Speaker($Volume){$wshShell = new-object -com wscript.shell;1..50 | % {$wshShell.SendKeys([char]174)};1..$Volume | % {$wshShell.SendKeys([char]175)}}");

  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

  delay(10);

  DigiKeyboardDe.print("Set-Speaker -Volume 50");

  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

  delay(10);

  //Add YouTube Link here!
                                                 
  DigiKeyboardDe.print("start chrome.exe YOUTUBE LINK HERE");

    DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

    delay(10);

      DigiKeyboardDe.sendKeyStroke(KEY_L, MOD_GUI_LEFT);

  digitalWrite(1,LOW);
}


void loop() {

  
 
}
