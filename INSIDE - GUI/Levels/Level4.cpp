#include "Levels.h"

/*
void level_4(int* level)
{
	system("cls");

	//Music Start
	bgm.play();
	bgm.setVolume(40);

	//Variables
	int xpos = 4, ypos = 11, location = maps[0][ypos][xpos];
	bool isChoice = false;	std::string userInput;

	//Level Code
	displayText("You wake up on a familiar cliffside...\n", 50); Sleep(700);
	displayText("Yet...the house that once stood there has vanished.\n", 50); Sleep(700);
	displayText("In its stead now looms a hauntingly desecrated incarnation of its once-vibrant existence.\n", 50); Sleep(700);

	while (*level == 4) {

		location = maps[*level][ypos][xpos];

		if (isChoice == false)
		{
			if (locationFlags[4][location - 1] == false)
				for (int i = 0; i < 5; i++)
				{
					displayText(info[4][location - 1].text[i], 50);
					locationFlags[4][location - 1] = true;
					isChoice = true;
				}
			else
			{
				displayText(describeText[4][location - 1], 50);
				isChoice = true;
			}
			Sleep(200);
		}


		else
		{
			checkPos_4(location);					displayPos(location, points, 4); displayDirections(xpos, ypos, 4);
			choiceQ = rand() % 6;					displayTexty(inputQ[choiceQ], 50);

			while (std::cin.peek() == '\n') std::cin.ignore();
			getline(std::cin, userInput);	userInput = lowercase(userInput);
			system("cls");


			// Using a switch instead of an if-else ladder because...
			// It just seemed cleaner (in my head) (plus there's not much going on in this level)
			switch (inputID(userInput))
			{
			case INTERACT:
			case CHECK:
				if (location == 6)
				{
					chances = 5;
					displayText("You interact with the looming shadow...\n", 50); 
					displayText("As you get closer, you begin to realize that the shadow itself is nothing but a reflection of your past self.", 50);
					
					music_4.play();
					for (float i = 100; i >= 0; i = i - 2)
					{
						music_4.setVolume(100 - i);
						bgm.setVolume(i);
						Sleep(40);
					}
					Sleep(1000);

					boss();
				}
				else
					displayText("There is nothing to interact with.\n", 50);
				break;
			case LOOKSOUTH:
			case LOOKNORTH:
			case LOOKWEST:
			case LOOKEAST:
				displayText("There is nothing to look at...\n", 50);
				break;
			case EAST:
			case WEST:
				displayText("Something prevents you from going there.\n", 50);
				break;
			default:
				computeInput(&xpos, &ypos, maps, userInput, &isChoice, 4);
			}

			Sleep(500);
		}
	}
}



//Unique text events for Level 4
void checkPos_4(int location)
{
	if (location == 6)
	{
		displayText("Your journey might be coming to an end...\n", 50); Sleep(700);
	}
	
}
*/