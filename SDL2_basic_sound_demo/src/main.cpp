#include "SDL2SoundEffects.h"
#include <iostream>

int main()
{

  SDL2SoundEffects se;
  se.addSoundEffect("C:/Users/matt/Dropbox_me298414/Dropbox/SoundEffects/r2d2_talk.wav");
  se.addSoundEffect("C:/Users/matt/Dropbox_me298414/Dropbox/SoundEffects/Metal Gear Solid  Alert (!).mp3");
  se.addSoundEffect("C:/Users/matt/Dropbox_me298414/Dropbox/SoundEffects/You are dead sound effect.mp3");

  int choice = 0;
  while (choice != -1)
  {
    choice = 0;
    std::cout << "Which Sound Effect To Play? (enter -1 to exit)\n"
      << "=>: ";
    std::cin >> choice;
    se.playSoundEffect(choice);
    std::cin.clear();
  }

  return 0;
}