#include "Levels.h"

/*
void level_2(int* level)
{
	system("cls");	clearMap();

	level_2pre();	clearMap();		system("cls");

	//Music Start
	music_2.play();	piano.play();	piano.setVolume(0);

	//Variables
	int xpos = 2, ypos = 7, location = maps[2][ypos][xpos];
	bool isChoice = false;	std::string userInput;

	// Intro line
	displayText("You entered the house.\n", 50);


	while (*level == 2) {

		srand((unsigned int)time(NULL) );	location = maps[2][ypos][xpos];

		if (isChoice == false)
		{
			if (locationFlags[2][location - 1] == false)
				for (int i = 0; i < 5; i++)
				{
					displayText(info[2][location - 1].text[i], 50);
					locationFlags[2][location - 1] = true;
					isChoice = true;
				}
			else
			{
				displayText(describeText[2][location - 1], 50);
				isChoice = true;
			}
			Sleep(200);
		}


		else
		{
			checkPos_2(&location, xpos, ypos); updateMap(xpos, ypos);

			if (chances == 0){
				for (float i = 100; i >= 0; i = i - 2){
					music_2.setVolume(i);
					Sleep(40);
				}
				credits_bad();
			}

			
			displayDirections(xpos, ypos, 2);			displayPos(location, points, 2);
			choiceQ = rand() % 6;						displayTexty(inputQ[choiceQ], 50);

			while (std::cin.peek() == '\n') std::cin.ignore();
			getline(std::cin, userInput);	userInput = lowercase(userInput);
			system("cls");

			// Winning Condition
			if (location == 14 && (inputID(userInput) == INTERACT || inputID(userInput) == SOUTH || inputID(userInput) == OPEN))
			{
				if (locked == false)
				{
					displayText("You decide to exit the house...\n", 50);
					*level = *level + 1;
					for (float i = 100; i >= 0; i = i - 2){
						music_2.setVolume(i);
						Sleep(40);
					}
				}
				else
					displayText("There seems to be a mysterious force acting on the door. You are unable to open it...\n", 50);
			}

			// Others
			else if (inputID(userInput) == INTERACT || inputID(userInput) == CHECK)
			{
				if (location == 7 && locked == true)
				{
					if (safe() == 1 && hasBPrint == false)
					{
						displayText("The safe is now unlocked...You hear something else unlock as well...\n", 50); locked = false; enemy_2c = true;
					}
					else
						displayText("The code was incorrect...\n", 50);
				}
				else if (location == 7 && locked == false && hasBPrint == false)
				{
					displayText("You pick the sheet up. It seems to be a blueprint of a house.....It feels oddly nostalgic...\n", 50);
					for (float i = 100; i >= 0; i = i - 2)
					{
						music_2.setVolume(i);
						Sleep(40);
					}
					memory_2();
					for (float i = 0; i <= 100; i = i + 2){
						music_2.setVolume(i);
						Sleep(40);
					}
					hasBPrint = true;
					enemy_2c = true;
				}
				else if (location == 5 && hasAxe == false)
				{
					displayText("You pick up the rusty axe. It's quite heavy. You feel your attacks may deal more damage now.\n", 50);
					hasAxe = true;
				}
				else
					check(location, 2);
			}

			else
				computeInput(&xpos, &ypos, maps, userInput, &isChoice, 2);
		}
	}
}


// Safe Puzzle
int safe()
{
	std::string code;	system("cls");

	displayText("Enter the code:  ", 50);
	getline(std::cin, code);	system("cls");

	if (code == "45423")
		return 1;

	return 0;
}

//Unique text events for Level 2
void checkPos_2(int *location, int x, int y)
{
	if (*location == 7 && enemy_2a == true)
	{
		displayText("You hear a loud thump behind you. A grotesque creature, part flesh and metal, stands on all four twisted limbs, covered in spikes.\n", 50);
		displayText("No discernible head, just a mass of eyes and mouths emitting distorted screams. It runs toward heat and light of the lamp, despite burning its skin in the process\nIt notices you and starts running towards you, screeching.", 50);
		Sleep(500);
		if (enemy(0) == 1)
		{
			enemy_2a = false;
			displayTextg("You won!\n", 50); Sleep(2000);
			system("cls");
		}
	}
	else if (*location == 5 && enemy_2b == true)
	{
		displayText("A featureless, pale white mannequin emerges from the shadows.\nIt doesn't make a single sound while it moves, but it appears to be blind and only reacts to sound.\nIt moves frantically but doesn't appear weak.\nIts moving in your direction.", 50);
		Sleep(500);
		if (enemy(0) == 1)
		{
			enemy_2b = false;
			displayTextg("You won!\n", 50); Sleep(2000);
			system("cls");
		}
	}
	else if (*location == 14 && enemy_2c == true)
	{
		displayText("...You hear footsteps approaching from behind...", 50);
		Sleep(500);
		if (enemy(1) == 1)
		{
			enemy_2c = false;
			displayTextg("You won!\n", 50); displayText("The door seems to be unlocked now...\n", 50); Sleep(2000); locked = false;
			system("cls");
		}
	}

	if (*location == 7)
	{
		if (hasBPrint == false && locked == true)
			displayText("The display on the safe is demanding a 5 digit code...\n", 50);
		else if (hasBPrint == false && locked == false)
			displayText("A sheet of paper lies inside the safe. Looking at it gives you a faint sense of nostalgia...\n", 50);
	}
	else if (*location == 5)
	{
		if (hasAxe == false)
			displayText("There seems to be an axe lying on the ground. Perhaps it could be useful...\n", 50);
	}
	else if (*location == 11)
	{
		displayText("Perhaps the number of consecutive notes means something...\n", 50);
	}
	else if (*location == 16)
	{
		displayText("There seems to be a note lying on the table...\n", 50);
	}


	// Dynamically changing the music for the piano to be hearable
	switch (*location)
	{
	case 2:
		music_2.setVolume(80);
		piano.setVolume(0);
		break;
	case 5:
		piano.setVolume(10);
		music_2.setVolume(60);
		break;
	case 11:
		piano.setVolume(50);
		music_2.setVolume(0);
		break;
	case 10:
		piano.setVolume(40);
		music_2.setVolume(20);
		break;
	case 9:
		piano.setVolume(10);
		music_2.setVolume(60);
		break;
	default:
		piano.setVolume(0);
		music_2.setVolume(80);
		break;
	}


}


// Code for the prologue to level 2
void level_2pre()
{
	//Music Start
	music_0.setVolume(100);	music_0.play();
	clearMap();

	//Variables
	int xpos = 4, ypos = 11, location = maps[0][ypos][xpos];
	bool isChoice = false;	std::string userInput;

	displayText("You wake up at a familiar location...You feel like you've been here before...\n", 50); Sleep(500);

	while (1)
	{
		location = maps[0][ypos][xpos];

		if (isChoice == false)
		{
			if (locationFlags[0][location - 1] == false)
				for (int i = 0; i < 5; i++)
				{
					displayText(info[0][location - 1].text[i], 50);
					locationFlags[0][location - 1] = true;
					isChoice = true;
				}
			else
			{
				displayText(describeText[0][location - 1], 50);
				isChoice = true;
			}
			Sleep(200);
		}
		else
		{
			displayDirections(xpos, ypos, 0);	displayPos(location, points, 0);	updateMap(xpos, ypos);
			choiceQ = rand() % 6;				displayTexty(inputQ[choiceQ], 50);

			while (std::cin.peek() == '\n') std::cin.ignore();
			getline(std::cin, userInput);	userInput = lowercase(userInput);
			system("cls");


			if (location == 6 && (inputID(userInput) == NORTH || inputID(userInput) == OPEN || inputID(userInput) == INTERACT || inputID(userInput) == PLACE))
			{
				displayText("The door seems to be unlocked.\n", 50); Sleep(500);
				displayText("You decide to enter the house...\n", 50); Sleep(500);
				displayText("You feel a sense of deja vu.\n", 50);

				for (float i = 100; i >= 0; i = i - 2)
				{
					music_0.setVolume(i);
					Sleep(30);
				}
				music_0.stop();
				break;
			}


			else
				computeInput(&xpos, &ypos, maps, userInput, &isChoice, 0);
		}
	}
}
*/