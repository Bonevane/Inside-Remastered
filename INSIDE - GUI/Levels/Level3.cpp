#include "Levels.h"

/*
void level_3(int* level)
{
	system("cls");	clearMap();

	level_3pre();	clearMap();

	//Music Start
	music_3.play();	system("cls");

	//Variables
	int xpos = 11, ypos = 2, location = maps[3][ypos][xpos];
	bool isChoice = false, locked = true, lock_side1 = true, lock_side2 = true;	std::string userInput;

	//Level Code
	displayText("You entered the house.\n", 50);

	while (*level == 3) {

		srand((unsigned int)time(NULL));	location = maps[3][ypos][xpos];

		if (isChoice == false)
		{
			if (locationFlags[3][location - 1] == false)
				for (int i = 0; i < 5; i++){
					displayText(info[3][location - 1].text[i], 50);
					locationFlags[3][location - 1] = true;
					isChoice = true;
				}
			else{
				displayText(describeText[3][location - 1], 50);
				isChoice = true;
			}
			Sleep(200);
		}


		else
		{
			checkPos_3(location, xpos, ypos);	updateMap(xpos, ypos);

			if (chances == 0){
				for (float i = 100; i >= 0; i = i - 2){
					music_3.setVolume(i);
					Sleep(40);
				}
				credits_bad();
			}

			
			displayDirections(xpos, ypos, 3);		displayPos(location, points, 3);
			choiceQ = rand() % 6;					displayTexty(inputQ[choiceQ], 50);

			while (std::cin.peek() == '\n') std::cin.ignore();
			getline(std::cin, userInput);	userInput = lowercase(userInput);
			system("cls");

			// Winning Condition
			if (location == 22 && (inputID(userInput) == INTERACT || inputID(userInput) == SOUTH || inputID(userInput) == OPEN))
			{
				if (puzzle)
				{
					displayText("You decide to exit the observatory.", 50);
					*level = *level + 1;
					for (float i = 100; i >= 0; i = i - 1)
					{
						music_3.setVolume(i);
						orrery.setVolume(i);
						Sleep(40);
					}
					music_3.stop();
					orrery.stop();
				}
				else
					displayText("The door seems to be locked.\n", 50);
			}

			// Door unlocking from pump room & observatory
			else if (location == 21 && (inputID(userInput) == INTERACT || inputID(userInput) == WEST || inputID(userInput) == OPEN) && (lock_side1 == true || locked == true)){
				displayText("You unlocked the door to your west.\n", 50); lock_side1 = false;

				if (lock_side1 == false && lock_side2 == false){
					displayText("The door is now unlocked from both sides. You can open the door now.\n", 50); maps[3][17][10] = 1; maps[3][17][11] = 1; maps[3][17][12] = 1; locked = false;
				}
			}
			else if (location == 19 && (inputID(userInput) == INTERACT || inputID(userInput) == EAST || inputID(userInput) == OPEN) && (lock_side2 == true || locked == true)){
				displayText("You unlocked the door to your east.\n", 50); lock_side2 = false;

				if (lock_side1 == false && lock_side2 == false) {
					displayText("The door is now unlocked from both sides. You can open the door now.\n", 50); maps[3][17][10] = 1; maps[3][17][11] = 1; maps[3][17][12] = 1; locked = false;
				}
			}

			// Others
			else if (location == 15 && (inputID(userInput) == NORTH && puzzle == false))
				displayText("The path is flooded. It prevents you from going further...\n", 50);

			else if (inputID(userInput) == INTERACT || inputID(userInput) == CHECK)
				if (location == 19 && puzzle == false)
				{
					if (puzzle1() == 1)
					{
						puzzle = true; drain.play(); locationFlags[3][14] = false; locationFlags[3][16] = false;
					}
				}
				else if (location == 16 && hasReport == false)
				{
					displayText("You pick up the medical records. They seem to be cancer reports for \"Adrian\".\n", 50);
					displayText("You are reminded of something...", 50);
					for (float i = 100; i >= 0; i = i - 2){
						orrery.setVolume(i); music_3.setVolume(i); Sleep(40);
					}
					memory_3();
					for (float i = 0; i <= 100; i = i + 2){
						orrery.setVolume(i); music_3.setVolume(i); Sleep(40);
					}
					hasReport = true;
				}
				else if (location == 7 && hasSketch == false && hasBPrint == false)
					displayText("It's Nell.\n", 50);
				else
					check(location, 3);

			// Cannot print map when in the maze :D
			else if (inputID(userInput) == MAP && location == 2)
				displayText("You do not know where you are...\n", 50);


			else
				computeInput(&xpos, &ypos, maps, userInput, &isChoice, 3);


			// Updating text depending on real-time map changes
			if (puzzle == true)
			{
				info[3][14] = { "The room at the bottom of the stairs to the north can be reached now.\n", "There is a room filled with pipes to the west.\n", "", "", "", 15 };
				info[3][16] = { "The corridor isn't flooded anymore,\n", "but your footsteps still make sounds on the wet floor.\n", "The storeroom is to your west, and the pump room to the east.\n", "There are other doors to the north.\n", "", 17 };
				describeText[3][14] = "You're at the northern end of the flooded corridoor.\nYou can see a door at the bottom of the small staircase to the north.\n";
			}
			if (locked == false)
				directions[3][18] = { "The panel has large text above it which reads 'Water Pump Controls'.\n", "There's a dimly lit table at the southern end of the room.\n", "There is a door to your east, leading to the observatory.\n", "", 19 };
		}
	}
}



//Unique text events for Level 3
void checkPos_3(int location, int x, int y)
{
	if (location == 11 && enemy_3a == true)
	{
		displayText("A disfigured humanoid creature in nurse's clothes lies on the bed with a knife held against its chest, breathing heavily.\n", 50);
		displayText("It stands up after noticing you, with blood pouring out from its mangled face and body.\nIt starts walking towards you swinging the knife, letting out horrifying screams in pain.\n", 50);
		Sleep(500);
		if (enemy(2) == 1)
		{
			enemy_3a = false;
			displayTextg("You won!\n", 50); Sleep(2000);
			system("cls");
		}
	}


	if (location == 19 && puzzle == false)
		displayText("The pump control light is blinking...\n", 50);
	else if (location == 16 && hasReport == false)
		displayText("The name on the folder seems familiar...\n", 50);
	else if (location == 21 && music_3.getStatus() == sf::Music::Playing)
	{
		orrery.play();
		for (float i = 100; i >= 0; i--){
			music_3.setVolume(i);
			orrery.setVolume(100 - i);
			Sleep(10);
		}
		music_3.stop();
	}
}



// Code for the prologue to level 2
void level_3pre()
{
	//Music Start
	music_0.setVolume(100);	music_0.play();
	clearMap();

	//Variables
	int xpos = 4, ypos = 11, location = maps[0][ypos][xpos];
	bool isChoice = false;	std::string userInput;

	displayText("You wake up at a familiar location...You feel like you've been here before...\n", 50);

	while (1)
	{
		location = maps[0][ypos][xpos];

		if (isChoice == false)
		{
			if (locationFlags[0][location - 1] == false)
				for (int i = 0; i < 5; i++){
					displayText(info[0][location - 1].text[i], 50);
					locationFlags[0][location - 1] = true;
					isChoice = true;
				}
			else{
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
			getline(std::cin, userInput); userInput = lowercase(userInput);
			system("cls");


			if (location == 6 && (inputID(userInput) == NORTH || inputID(userInput) == OPEN || inputID(userInput) == INTERACT || inputID(userInput) == PLACE)){
				displayText("The door seems to be unlocked.\n", 50);
				displayText("You decide to enter the house...You feel a sense of deja vu.\n", 50);

				for (float i = 100; i >= 0; i = i - 2){
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



// Water tank puzzle
int puzzle1()
{
	int a = 45, b = 0, c = 0, d = 0;
	std::string input;

	while (1)
	{
		system("cls");

		std::cout << "-----\033[0;33m|\033[0;0m---------------------------------------\n";
		for (int i = 0; i < a; i++)
			std::cout << "*";
		std::cout << std::endl << std::endl;

		std::cout << "---------------\033[0;33m|\033[0;0m-----------------------------\n";
		for (int i = 0; i < b; i++)
			std::cout << "*";
		std::cout << std::endl << std::endl;

		std::cout << "--------------------\033[0;33m|\033[0;0m------------------------\n";
		for (int i = 0; i < c; i++)
			std::cout << "*";
		std::cout << std::endl << std::endl;

		std::cout << "-----\033[0;33m|\033[0;0m---------------------------------------\n";
		for (int i = 0; i < d; i++)
			std::cout << "*";
		std::cout << std::endl << std::endl;


		if (a == 5 && b == 15 && c == 20 && d == 5){
			Sleep(1000); system("cls"); return 1;
		}


		displayTexty("Which tank would you like to drain (1/2/3/4):   ", 50);
		while (std::cin.peek() == '\n') std::cin.ignore();
		getline(std::cin, input);	input = lowercase(input);
		std::cout << std::endl;

		if (input == "1")
		{
			if (a == 45)
			{
				a -= 45;
				b += 15;
				c += 15;
				d += 15;
			}
			else if (a != 0)
			{
				a -= 5;
				d += 5;
			}
		}

		else if (input == "2")

		{
			if (b == 0)
				continue;

			b -= 5;
			c += 5;
		}

		else if (input == "3")

		{
			if (c == 0)
				continue;

			c -= 5;
			a += 5;

		}

		else if (input == "4")

		{
			if (d == 0)
				continue;

			d -= 5;
			b += 5;

		}

		else if (input == "stop" || input == "leave")
		{
			system("cls");
			return 0;
		}

		else if (input == "reset")
			a = 45, b = 0, c = 0, d = 0;

		else
		{
			displayText("You cannot do that.", 50); Sleep(300);
		}
	}
}
*/