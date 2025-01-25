#include "Sound.h"

sf::Sound dialogue;		sf::SoundBuffer buffer;

sf::Music music_menu;	sf::Music music[5];
sf::Music music_0;		sf::Music shower;
sf::Music music_1;		sf::Music music_2;
sf::Music music_3;		sf::Music music_4;
sf::Music music_mem1;	sf::Music music_mem2;
sf::Music music_mem3;	sf::Music music_mem4;
sf::Music music_credg;	sf::Music music_credb;
sf::Music orrery;		sf::Music phone;
sf::Music bgm;			sf::Music piano;
sf::Music drain;		sf::Music knife_stab;

sf::Music selection;
sf::Music cursor_move;
sf::Music falke;
sf::Music memory;
sf::Music train;
sf::Music enemySound[5];


// Loading all the music files. (We know. There's a lot...)
void initMusic()
{
	buffer.loadFromFile("Music/dialogue.wav");
	
	selection.openFromFile("Music/selection.ogg");
	cursor_move.openFromFile("Music/cursor_move.ogg");

	//Menu
	music_menu.openFromFile("Music/signalis_menu.ogg");

	// Levels
	music[0].openFromFile("Music/home_signalis.ogg");
	music[1].openFromFile("Music/signalis_redgate.ogg");
	music[2].openFromFile("Music/signalis_3000.ogg");
	music[3].openFromFile("Music/signalis_ritual.ogg");
	music[4].openFromFile("Music/signalis_eulenlieder.ogg");

	// Enemies
	enemySound[0].openFromFile("Music/signalis_mynah.ogg");
	enemySound[1].openFromFile("Music/signalis_riotcontrol.ogg");
	enemySound[2].openFromFile("Music/signalis_nue.ogg");
	enemySound[3].openFromFile("Music/signalis_becomewhole.ogg");
	enemySound[4].openFromFile("Music/signalis_blockwart.ogg");

	// Memories
	music_mem1.openFromFile("Music/signalis_ariane.ogg");
	music_mem2.openFromFile("Music/signalis_ewige.ogg");
	music_mem3.openFromFile("Music/signalis_doubleback.ogg");
	music_mem4.openFromFile("Music/scary.ogg");
	falke.openFromFile("Music/falke.ogg");
	memory.openFromFile("Music/signalis_memory.ogg");
	train.openFromFile("Music/signalis_train.ogg");

	// Extras
	phone.openFromFile("Music/phone.ogg");
	bgm.openFromFile("Music/waves.ogg");
	piano.openFromFile("Music/piano.ogg");
	drain.openFromFile("Music/drain.ogg");
	orrery.openFromFile("Music/signalis_orrery.ogg");
	knife_stab.openFromFile("Music/knife.ogg");
	shower.openFromFile("Music/shower.ogg");

	music_credg.openFromFile("Music/signalis_credits.ogg");
	music_credb.openFromFile("Music/signalis_serenade.ogg");

	music[0].setLoop(true);		music[1].setLoop(true);
	music[2].setLoop(true);		music[3].setLoop(true);
	music[4].setLoop(true);		music_mem1.setLoop(true);
	music_mem2.setLoop(true);	music_mem3.setLoop(true);
	piano.setLoop(true);		orrery.setLoop(true);
	bgm.setLoop(true);			music_menu.setLoop(true);
	falke.setLoop(true);		music_credg.setLoop(true);
}

void playLevelMusic() {
	float i;

	music[level].play();

	for (i = 0.0f; i <= 100; i++) {
		music[level].setVolume((float)i);
		sleep(40);
	}
}

void stopLevelMusic() {
	float i;

	for (i = 100.0f; i >= 0; i--) {
		music[level].setVolume((float)i);
		sleep(40);
	}

	music[level].stop();
}

void playBGM() {
	float i;

	bgm.play();
	bgm.setVolume(20);
}

void stopBGM() {
	float i;

	for (i = 20.0f; i >= 0.0f; i--) {
		bgm.setVolume((float)i);
		sleep(10);
	}

	bgm.stop();
}