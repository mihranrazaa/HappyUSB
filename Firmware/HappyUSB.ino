// Author ~ mihranrazaa
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(3000);
  
  executePayload();
}

void loop() {
}

void executePayload() {
  // Set volume to maximum and lock it
  setMaxVolume();
  
  //  Open Run dialog and launch browser with rickroll
  openRickrollInBrowser();
  
  //  Enable Narrator (Speak Test)
  DigiKeyboard.delay(2000);
  enableNarrator();
  
  // Simulate slow mouse movement
  DigiKeyboard.delay(1000);
  simulateMouseMovement();
  
  // Continuously reset volume to max in background
  maintainMaxVolume();
  
  //  Wait 15-30 seconds then logout
  DigiKeyboard.delay(random(15000, 30000)); 
  logoutWindows();
}

void openRickrollInBrowser() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  // Direct YouTube link with timestamp where rickroll actually starts
  DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ&t=43s");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000); 
  
  setMaxVolumeQuick();
  
  DigiKeyboard.sendKeyStroke(KEY_SPACE); 
}

void setMaxVolume() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("sndvol.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.sendKeyStroke(43); /
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(35); 
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); 
  
  DigiKeyboard.delay(500);
  for(int i = 0; i < 50; i++) {
    DigiKeyboard.sendKeyStroke(175); 
    DigiKeyboard.delay(20);
  }
}

void setMaxVolumeQuick() {
  for(int i = 0; i < 25; i++) {
    DigiKeyboard.sendKeyStroke(175); 
    DigiKeyboard.delay(50);
  }
}

void maintainMaxVolume() {
  for(int i = 0; i < 10; i++) {
    setMaxVolumeQuick();
    DigiKeyboard.delay(1000); 
  }
}

void enableNarrator() {
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_GUI_LEFT | MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("narrator.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_CONTROL_LEFT);
}

void simulateMouseMovement() {

  
  for(int i = 0; i < 5; i++) {
    DigiKeyboard.sendKeyStroke(43, MOD_ALT_LEFT);
    DigiKeyboard.delay(800); 
  }
  
  
  DigiKeyboard.sendKeyStroke(79); // Right arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(79); // Right arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81); // Down arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81); // Down arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(80); // Left arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(80); // Left arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(82); // Up arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(82); // Up arrow
  DigiKeyboard.delay(500);
  
  // Simulate clicking by pressing Enter on focused elements
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(41); // Escape key
}

void logoutWindows() {
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(76, MOD_CONTROL_LEFT | MOD_ALT_LEFT); // Delete key
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.sendKeyStroke(KEY_L);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_U); // Shut down or sign out
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_I); // Sign out
  
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("shutdown /l");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}


void emergencyExit() {
  DigiKeyboard.sendKeyStroke(41); // Escape key
  DigiKeyboard.sendKeyStroke(41); // Escape key
  DigiKeyboard.sendKeyStroke(41); // Escape key
}

void cleanupAndExit() {
  // Close any open dialogs
  DigiKeyboard.sendKeyStroke(41); // Escape key
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(41); // Escape key
  DigiKeyboard.delay(200);
  
  // Minimize all windows
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
}