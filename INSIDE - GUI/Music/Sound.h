#pragma once
#include "../Source/Components.h"
#include <windows.h>

void initMusic();

extern sf::SoundBuffer buffer;
extern sf::Sound dialogue;

extern sf::Music selection;
extern sf::Music cursor_move;

extern sf::Music music_menu;
extern sf::Music music[5];
extern sf::Music enemySound[5];
extern sf::Music music_0;
extern sf::Music music_1;
extern sf::Music music_2;
extern sf::Music music_3;
extern sf::Music music_4;

extern sf::Music music_mem1;
extern sf::Music music_mem2;
extern sf::Music music_mem3;
extern sf::Music music_mem4;
extern sf::Music music_credg;
extern sf::Music music_credb;
extern sf::Music falke;
extern sf::Music train;
extern sf::Music memory;	
extern sf::Music phone;
extern sf::Music bgm;
extern sf::Music piano;
extern sf::Music drain;
extern sf::Music orrery;
extern sf::Music knife_stab;
extern sf::Music shower;


void playLevelMusic();
void stopLevelMusic();

void playBGM();
void stopBGM();