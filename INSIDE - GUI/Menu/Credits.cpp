#include "Menu.h"

void credits_good() {

	int delay = 2000;

	music_credg.play();	MyText.clearOld();

	FONT_SIZE = 34;

	
	MyText.printText("I N S I D E", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(1000);
	MyText.printText("By Rafay Ahmad & Danish Munib", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();


	MyText.printText("Lead Programmer", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Game Designers", 100, YELLOW, 0, MID_Y - (FONT_SIZE / 2) - FONT_SIZE - 8, 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, 0, 1, 1, FONT_SIZE - 12); sleep(400);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + (FONT_SIZE / 2) + 8, 1, 0, FONT_SIZE - 12);; sleep(delay); MyText.clearOld();

	MyText.printText("Level & Puzzle Designer", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("UI Designer", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Project Manager", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Level Descriptions", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Memories & Last Encounter", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Movement & Combat", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();


	MyText.printText("Music", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("S I G N A L I S", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Composers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Cicada Sirens & 1000 Eyes", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();


	MyText.printText("QA Lead", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Sikandar Hayat Khan", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Nouman Ghauri", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Muhammad Anas", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Zain Kashif", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(400); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Wajih-Ul-Hassan", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Abdul Moiz", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Ahmed Afzal", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Ahmed Zuhair", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Saarim Ejaz", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Abdul Rafay Farooq", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Ali Ahsan", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Hassan Shakil", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Taha Ali", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();


	// SPECIAL THANKS :)))

	MyText.printText("Special Thanks", 100, RED, 0, 0, 1, 1, FONT_SIZE, false, 0, CASCADIA); sleep(4000); MyText.clearOld();

	MyText.printText("Attack System Help", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Nouman Ghouri & Muhammad Anas", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Narrative Guidance", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Wajih-Ul-Hassan", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Emotional Support", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Impractical Deadline Imposer", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Professional Procrastinator", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Destroyer of Ideas", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Influenced By", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Zork", 60, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("Influenced By", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("S I G N A L I S", 60, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("Influenced By", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("To the Moon", 60, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();


	MyText.printText("Library Used", 100, YELLOW, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("SFML (Simple & Fast Multimedia Library)", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("And a special thanks to those who supported us during this project", 100, GREY, 0, 0, 1, 1); sleep(delay); MyText.clearOld();

	if (level > 0) {
		MyText.printText("And to you as the player for taking the time to finish this game", 100, GREY, 0, 0, 1, 1); sleep(delay); MyText.clearOld();
	}

	MyText.printText("Copyright (c) 2023 RMun. All Rights Reserved.", 100, WHITE, 0, 0, 1, 1); sleep(delay); fadeOut(); MyText.clearOld();

	for (float i = 100; i >= 0; i--)
	{
		music_credg.setVolume(i);
		sleep(18);
	} music_credg.stop();

	FONT_SIZE = 28;
}

void credits_bad() {

	int delay = 2000; print_HUD = false;

	music_credb.play();	MyText.clearOld();

	FONT_SIZE = 34;

	MyText.printText("...As the echoes of choices fade", 65, WHITE, 0, MID_Y - (3 * FONT_SIZE), 1, 0, FONT_SIZE, false, ITALIC); sleep(500);
	MyText.printText("The tapestry of fate unravels", 65, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); sleep(500);
	MyText.printText("Thus, it reveals a tragic melody that lingers in the silence of your journey...", 65, WHITE, 0, MID_Y + (2 * FONT_SIZE), 1, 0, FONT_SIZE, false, ITALIC); sleep(750); MyText.clearOld();

	MyText.printText("I N S I D E", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(1000);
	MyText.printText("By Rafay Ahmad & Danish Munib", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Lead Programmer", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Game Designers", 100, RED, 0, MID_Y - (FONT_SIZE / 2) - FONT_SIZE - 8, 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, 0, 1, 1, FONT_SIZE - 12); sleep(400);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + (FONT_SIZE / 2) + 8, 1, 0, FONT_SIZE - 12);; sleep(delay); MyText.clearOld();

	MyText.printText("Level & Puzzle Designer", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("UI Designer", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Project Manager", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Level Descriptions", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Memories & Last Encounter", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Movement & Combat", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Music", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("S I G N A L I S", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Composers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Cicada Sirens & 1000 Eyes", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();



	MyText.printText("QA Lead", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Rafay Ahmad", 80, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Sikandar Hayat Khan", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Nouman Ghauri", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Muhammad Anas", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Zain Kashif", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Danish Munib", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(400); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Wajih-Ul-Hassan", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Abdul Moiz", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Ahmed Afzal", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Ahmed Zuhair", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Saarim Ejaz", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Abdul Rafay Farooq", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Ali Ahsan", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Hassan Shakil", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("QA Testers", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("Taha Ali", 60, WHITE, 0, MID_Y + ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	/*MyText.printText("Influenced By", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("Zork", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();

	MyText.printText("Influenced By", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("S I G N A L I S", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(600); MyText.clearOld();


	MyText.printText("Influenced By", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, true, 0, CASCADIA); sleep(700);
	MyText.printText("To the Moon", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();*/


	MyText.printText("Library Used", 100, RED, 0, MID_Y - ((FONT_SIZE / 2) + 8), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(700);
	MyText.printText("SFML (Simple & Fast Multimedia Library)", 80, WHITE, 0, MID_Y + (((FONT_SIZE / 2) + 8) * 1), 1, 0, FONT_SIZE - 12); sleep(delay); MyText.clearOld();

	MyText.printText("Copyright (c) 2023 RMun. All Rights Reserved.", 100, WHITE, 0, 0, 1, 1); sleep(delay); MyText.clearOld();

	for (float i = 100; i >= 0; i--)
	{
		music_credb.setVolume(i);
		sleep(18);
	} music_credb.stop();

	MyText.printText("Even in shadows, there's always a glimmer of hope.", 70, WHITE, 0, MID_Y - (3 * FONT_SIZE), 1, 0, FONT_SIZE, false, ITALIC); sleep(delay);
	MyText.printText("Your journey doesn't end here...a brighter path awaits.", 70, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); sleep(delay);
	MyText.printText("Will you then shape a different destiny?", 70, WHITE, 0, MID_Y + (2 * FONT_SIZE), 1, 0, FONT_SIZE, false, ITALIC); sleep(delay); fadeOut(); MyText.clearOld();
	
	FONT_SIZE = 28;
}