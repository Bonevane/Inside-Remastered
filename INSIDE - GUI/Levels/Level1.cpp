#include "Levels.h"


/*
void level_1(int* level)
{
	system("cls");	clearMap();

	// Music Start
	music_1.play();

	// Variables
	int xpos = 15, ypos = 13, location = maps[1][ypos][xpos];
	bool isChoice = false; std::string userInput; int count = 0;

	// Opening line
	displayText("You entered the house.\n", 50);

	while (*level == 1) {

		srand((unsigned int)time(NULL));	location = maps[1][ypos][xpos];

		if (isChoice == false)
		{
			if (locationFlags[1][location - 1] == false)
				for (int i = 0; i < 5; i++){
					displayText(info[1][location - 1].text[i], 50);	locationFlags[1][location - 1] = true;	isChoice = true;
				}
			else{
				displayText(describeText[1][location - 1], 50);	isChoice = true;
			}
			Sleep(200);
		}


		else
		{
			checkPos_1(&location);	updateMap(xpos, ypos);


			// Checking for player deth
			if (chances == 0){	
				for (float i = 100; i >= 0; i = i - 2){
					music_1.setVolume(i);
					Sleep(40);
				}
				credits_bad();
			}

			displayDirections(xpos, ypos, 1);					displayPos(location, points, 1);
			choiceQ = rand() % 6;								displayTexty(inputQ[choiceQ], 50);

			while (std::cin.peek() == '\n') std::cin.ignore();
			getline(std::cin, userInput);userInput = lowercase(userInput);
			system("cls");

			// Winning Condition
			if (location == 4 &&(inputID(userInput) == INTERACT || inputID(userInput) == EAST || inputID(userInput) == OPEN))
			{
				if (inserted == true)
				{
					displayText("You decide to go through the door.\n", 50);
					*level = *level + 1;
					for (float i = 100; i >= 0; i = i - 2)
					{
						music_1.setVolume(i);
						Sleep(40);
					}
				}
				else
					displayText("The door seems to be locked. You are unable to open it...\n", 50);
			}


			// Others
			else if ((location == 10) && (inputID(userInput) == INTERACT || inputID(userInput) == PLACE))
			{
				if (hasBook == false)
					displayText("You do not have a book to place.\n", 50);
				else if (inserted == false)
				{		
					displayText("You inserted the book into the slot. You hear a deep thud...\n", 50);
					inserted = true; hasBook = false;
				}
				else
					displayText("The once empty slot is now filled.\n", 50);
			}
			else if (inputID(userInput) == INTERACT || inputID(userInput) == PICK || inputID(userInput) == CHECK)
			{
				if (location == 8 && hasBook == false && bookCount == 0)
				{
					displayText("You pick up the book. It says, 'Applied Physics by M. S'. Suddenly you regret picking it up.\n", 50);
					hasBook = true; bookCount++;
				}
				else if (location == 12 && hasSketch == false)
				{
					displayText("You pick up the old and dusty book. It is an old sketchbook.....It feels oddly nostalgic...", 50); Sleep(1000);
					for (float i = 100; i >= 0; i = i - 2)
					{
						music_1.setVolume(i);
						Sleep(40);
					}
					memory_1();
					for (float i = 0; i <= 100; i = i + 2)
					{
						music_1.setVolume(i);
						Sleep(40);
					}
					hasSketch = true;
				}
				else
					check(location, 1);
			}


			else
				computeInput(&xpos, &ypos, maps, userInput, &isChoice, 1);

			if (inserted && count == 0){
				checkT[1][9] = "You check the shelf. \"Applied Physics By M.S\" catches your eye once more....You decide to avert your eyes.\n";
				maps[1][5][11] = 1; maps[1][4][11] = 1; locationFlags[1][9] = true; count++;
			}
		}
	}
}



// Unique Events for level 1
void checkPos_1(int *location)
{
	if (*location == 11 && enemy_1a == true)
	{
		displayText("There is a humanoid creature lying on the floor.\nWrapped in a torn and bloodied straight jacket, it resembled a contorted figure resigned to the cold floor.\n", 50);
		displayText("An x is etched into its skin where a face should have been.\nIt rises up after noticing you, making faint, painful moaning noises.\nIt is going to attack you.", 50);
		Sleep(500);
		if (enemy(0) == 1)
		{
			enemy_1a = false;
			displayTextg("You won!\n", 50); Sleep(2000);
			system("cls");
		}
	}
	
	if (*location == 8)
	{
		if (hasBook == false && inserted == false)
			displayText("There seems to be a book lying on the table...\n", 50);
	}
	else if ((*location == 10) && inserted == false)
			displayText("There is an empty slot in the shelf...\n", 50);
	else if (*location == 12 && hasSketch == false)
			displayText("You see an old and dusty book lying on the ground. It reminds you of something...\n", 50);
}
*/