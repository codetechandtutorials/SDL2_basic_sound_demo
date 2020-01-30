#include "SDL2SoundEffects.h"
#include <iostream>
#include "SDL2Music.h"

int main()
{
  SDL2SoundEffects se;
  se.addSoundEffect("C:/Users/matt/Dropbox_me298414/Dropbox/SoundEffects/r2d2_talk.wav");
  se.addSoundEffect("C:/Users/matt/Dropbox_me298414/Dropbox/SoundEffects/Metal Gear Solid  Alert (!).mp3");
  se.addSoundEffect("C:/Users/matt/Dropbox_me298414/Dropbox/SoundEffects/You are dead sound effect.mp3");

  SDL2Music music;
  music.addMusicTrack("C:/Users/matt/Music/coding music/Winter Nights.mp3");

  music.playMusicTrack(0);

  int choice = 0;
  while (choice != -1)
  {
    choice = 0;
    std::cout << "Which Sound Effect To Play? (enter -1 to exit)\n"
      << "enter 11 to pause/play music.\n"
      << "=>: ";
    std::cin >> choice;
    
    if (choice == -1)
    {
      break;
    }

    if (choice == 11)
    {
      music.Play_Pause();
    }
    else
    {
      se.playSoundEffect(choice);
    }

    std::cin.clear();
  }

  return 0;
}