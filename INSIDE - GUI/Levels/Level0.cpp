#include "Levels.h"


// NOTE that the level code for all the levels follows a similar pattern.

// It begins with starting the music, and initializing the required variables.

// Followed by the level loop
// - Print the text for players position
// - Ask for input
// - Compute input while checking for events
// - Repeat

// The only difference is in level 2 and 3, which begin with the same location as level 0
// but there's a different function for that, so the level code pattern remains largely the same. 

// We've mentioned the key functions that are used in this level
// but because other levels follow the same pattern, they will remain largely uncommented 


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//

void levels(int lev) {

	print_HUD = true;

	if (isPrologue)
		levelPrologue();

	if(level != 0)
		save();

	initMap();
	loadLevelData();

	if (level != 4) {
		playLevelMusic();
		fadeIn();
	}

	while (level == lev) {

		location = maps[level][ypos][xpos]; 
		hadEnemyEncounter = false;
		MyText.clearOld(); 
		newline();

		if (locationFlags[level][location - 1] == false)
			for (int i = 0; i < 5; i++)
			{
				MyText.printText(info[level][location - 1].text[i], 50);	
				locationFlags[level][location - 1] = true;
			}
		else
		{
			MyText.printText(describeText[level][location - 1], 50);
		}

		events();

		if (hadEnemyEncounter == false) {
			getInput();
			actions();

			//if (old_text[old_text.size() - 3].text[0] != input[input.length() - 1])
			if ((inputID(input) != 1 && inputID(input) != 2 && inputID(input) != 3 && inputID(input) != 4) && level == lev)
				pause(1);
		}

		input = "";
	}

	MyText.clearOld();
}

void levelPrologue() {
	
	save();
	sleep(2000);
	loadLevelData();

	level = 0; print_HUD = true;
	
	initMap();
	loadLevelData();
	loadLevelPrologue();
	music[level].play(); 
	music[level].setVolume(100);
	//playLevelMusic();
	//fadeIn();


	while (level == 0) {
		location = maps[level][ypos][xpos];

		MyText.clearOld();

		newline();

		if (locationFlags[level][location - 1] == false)
			for (int i = 0; i < 5; i++)
			{
				MyText.printText(info[level][location - 1].text[i], 50);
				locationFlags[level][location - 1] = true;
			}
		else
		{
			MyText.printText(describeText[level][location - 1], 50);
		}

		events();
		getInput();
		actions();

		//if (old_text[old_text.size() - 3].text[0] != input[input.length() - 1])
		if ((inputID(input) != 1 && inputID(input) != 2 && inputID(input) != 3 && inputID(input) != 4) && level == 0)
			pause(1);

		input = "";
	}

	if (locked)
		level = 2;
	else
		level = 3;

	isPrologue = false;
	MyText.clearOld();
}

void loadLevelPrologue() {

	for (int i = 0; i < 20; i++)
		locationFlags[0][i] = false;

	if (locked) {
		/*info[0][11 - 1] = {"...\n", "You wake up on a familiar cliffside.\n", "Before you stands a familiar house, silhouetted against the dying moonlight.\n", "It feels like you have been here before.\n", "The air is filled with anticipation.\n", 11};
		info[0][10 - 1] = { "Walking through the thick forest, you stumble across a familiar tree.\n", "Surprisingly, all evidence of your previous visit seem to have vanished.\n", "The forest path opens up to your south and to your east.\n", "You can see the northern side of the house from here.\n", "", 10 };
		info[0][6 - 1] =  { "You draw closer to the house, approaching the front door.\n", "A dirty house mat lies by the door.\n", "", "", "", 6 };
		info[0][4 - 1] = { "You walk towards the east and approach a window with a torn note taped to it.\n", "A dense and strangely dark forest stands to your east.\n", "There seems to be an opening in the growth to the south.\n", "", "", 4 };
		describeText[0][10 - 1] = "You are at the eastern edge of the forest path.\nYou can see the northern side of the house from here.\n";

		checkT[0][11 - 1] = "The familiar view of a ocean to your south fills you with detemination.\n";
		checkT[0][10 - 1] = "";
		checkT[0][8 - 1] = "The forest enterance has a two sided signpost.\nThe text on the board is worn out.\nYou can barely make out the word \"Ne  's\"\n";
		checkT[0][4 - 1] = "The note reads, \"h e  i s  w a t c h i n g\".\n";*/


		info[0][1 - 1] = { "", "", "", "", "", 1 };
		info[0][2 - 1] = { "You approach the south-west corner of the house.\n", "To your west is a cliff with a sheer drop.\n", "", "","", 2 };
		info[0][3 - 1] = { "You now stand at the north-west corner of the house\n", "You can see a narrow path leading into the snowy forest from here.\n", "You can only see darkness at the end, obscured by falling snow.\n", "", "", 3 };
		info[0][4 - 1] = { "You walk towards the east and approach a window with a torn note taped to it.\n", "A dense and strangely dark forest stands to your east, its branches heavy with snow.\n", "There seems to be an opening in the snow-covered growth to the south.\n", "", "", 4 };
		info[0][5 - 1] = { "You now stand on the eastern side of the house.\n", "There is a path leading into the snowy forest.\n", "", "", "", 5 };
		info[0][6 - 1] = { "You draw closer to the house, approaching the front door.\n", "A snow-covered doormat lies by the door.\n", "", "", "", 6 };
		info[0][7 - 1] = { "You head towards the south-east corner of the house.\n", "A lush dense forest stands to your east, now covered in a blanket of snow.\n", "", "", "", 7 };
		info[0][8 - 1] = { "You stand west of the forest entrance.\n", "The forest grows denser to your north, the trees laden with snow.\n", "You get an uneasy feeling, like you are being watched.\n", "", "", 8 };
		info[0][9 - 1] = { "You stroll deeper into the woods, and reach a small clearing.\n", "The soft glow of moonlight reflecting off the snow-covered ground makes soothing rays.\n", "There is a pile of snow-covered dead leaves in the center.\n", "", "", 9 };
		info[0][10 - 1] = { "Walking through the thick forest, you stumble across a familiar tree.\n", "Surprisingly, all evidence of your previous visit seems to have vanished under the fresh layer of snow.\n", "The forest path opens up to your south and to your east, both obscured by falling snow.\n", "You can see the northern side of the house from here, its roof covered in white.\n", "", 10 };
		info[0][11 - 1] = { "...\n", "You wake up on a familiar cliffside covered in snow.\n", "Before you stands a familiar house, silhouetted against the dying moonlight.\n", "It feels like you have been here before.\n", "The air is filled with anticipation.\n", 11 };

		describeText[0][1 - 1] = {""};
		describeText[0][2 - 1] = { "You are at the south-west edge of the house.\nTo your west is a cliff covered in snow with a sheer drop.\n" };
		describeText[0][3 - 1] = { "You stand at the north-west corner of the house, with snow-covered trees lining the path leading into the forest.\n" };
		describeText[0][4 - 1] = { "This is the north-east edge of the house, the window covered in frost and a note barely visible through the icy pane.\nThere seems to be an opening in the snow-covered growth to the south.\n" };
		describeText[0][5 - 1] = { "This is the forest entrance, with the eastern side of the house barely visible through the falling snow.\n" };
		describeText[0][6 - 1] = { "This is the front of the house.\nYou are at the front door, where a snow-covered house mat lies.\n" };
		describeText[0][7 - 1] = { "This is the south-east corner of the house, with a lush dense forest now blanketed in snow standing to your east.\n" };
		describeText[0][8 - 1] = { "You stand west of the forest entrance, the trees becoming denser to your north, their branches weighed down by snow.\n" };
		describeText[0][9 - 1] = { "You stand deep inside the snowy forest at a small clearing.\nThere is a pile of dead leaves buried under the snow in the center.\n" };
		describeText[0][10 - 1] = { "You are at the eastern edge of the snow-covered forest path.\nYou can see the northern side of the house from here, its roof covered in white.\n" };
		describeText[0][11 - 1] = { "This is the spot where you woke up, the ominous house lying to your north.\n"};

		directions[0][1 - 1] = {"", "", "", "", 1};
		directions[0][2 - 1] = { "After some length of snow-covered ground, there is a dense forest.\n", "There is a cliff with the ocean below, now frozen in winter's grip.\n", "The house is to the east, its roof dusted with snow.\n", "To the west, there is a tall cliff, now covered in snow. The sounds of waves can be heard below, muffled by the ice.\n", 2 };
		directions[0][3 - 1] = { "There is a narrow path going into the snowy forest.\n", "There is snow-covered ground and a cliff dropping into the frozen ocean.\n", "There is thick snow-covered forest after the house.\n", "The steep cliff with the frozen ocean below lies to your west.\n", 3 };
		directions[0][4 - 1] = { "A dense forest, its branches weighed down by snow.\n", "There seems to be a small clearing in the thick undergrowth, now blanketed in snow.\n", "To your east, the forest stands too dark and thick to see much, now obscured by falling snow.\n", "A cliff after the snow-covered fields surrounding the house.\n", 4 };
		directions[0][5 - 1] = { "A dense forest beyond the snow-covered fields, the trees now adorned with frost.\n", "Snow covering the ground surrounding the house.\n", "The snowy forest entrance has a two-sided signpost, now partially buried in snow.\nThe text on the board is worn out and covered in frost.\nYou can barely make out the word \" dr a 's\"\n", "The east side of the house, now covered in snow.\n", 5};
		directions[0][6 - 1] = {"The front door of the house, framed by icicles.\n", "After the snow-covered fields, there is a dangerous drop into the frozen ocean.\n", "There is a forest in the distance, its trees standing tall against the wintry landscape.\n", "There is a cliff after the snow-covered field, now covered in a layer of snow.\n", 6};
		directions[0][7 - 1] = {"There seems to be a clearing in the snowy forest a bit ahead, the ground covered in snow.\n", "There is a cliff beyond the snow-covered fields, its edges now frosted.\n", "The forest is impenetrable, its depths hidden beneath a blanket of snow.\n", "The front of the house, and the field surrounding it, now blanketed in snow.\n", 7};
		directions[0][8 - 1] = {"There is a faint light at the end of the dark snow-covered path.\n", "The path is blocked by snow and debris, making it impassable.\n", "The forest is impenetrable, its snowy depths treacherous to navigate.\n", "The path goes to the eastern side of the house, now covered in snow.\n", 8};
		directions[0][9 - 1] = {"The forest is too thick, and the path doesn't continue in that direction, now obscured by heavy snow.\n", "The path heads into the snowy forest, the snow making it difficult to discern.\n", "The path heads into the eerie snowy forest, its secrets hidden beneath a layer of snow.\n", "The forest is impenetrable in that direction, the snow making it impossible to traverse.\n", 9};
		directions[0][10 - 1] = {"The forest looks too dark and dense to be able to walk there.\n", "The path heads south to the snow-covered house, its outline barely visible through the falling snow.\n", "The snowy forest path seems to be leading to a clearing, now obscured by snowfall.\n", "The forest looks too dark and dense to be able to walk there, its wintry veil shrouding its mysteries.\n", 10};
		directions[0][11 - 1] = {"A mysterious house looms ahead, its dark silhouette standing out against the snowy landscape. It is surrounded by an ominous aura, intensified by the winter chill.\n", "A cliff is behind you, now covered in a blanket of snow.\n", "A dense forest is to your east, its snowy branches reaching out like icy fingers.\n", "The roaring waves of the sea are to your west.\n", 11};

		checkT[0][1 - 1] = "";
		checkT[0][2 - 1] = "You look at the drop below. It sends a shiver down your spine.\n";
		checkT[0][3 - 1] = "";
		checkT[0][4 - 1] = "The note seems to be a list of gardening tasks.\n";
		checkT[0][5 - 1] = "The forest enterance has a two sided signpost that reads \"Forest\" from this side.\n";
		checkT[0][6 - 1] = "You look through the front window.\nYou can see a foyer, shrouded in darkness.\n";
		checkT[0][7 - 1] = "";
		checkT[0][8 - 1] = "The forest enterance has a two sided signpost.\nThe text on the board is worn out.\nYou can barely make out the word \" dr a 's\"\n";
		checkT[0][9 - 1] = "The golden light peaking in through the leaves makes soothing rays.\n";
		checkT[0][10 - 1] = "";
		checkT[0][11 - 1] = "The familiar view of a ocean to your south fills you with detemination.\n";
	}
		
	else {
		/*info[0][11 - 1] = {"Waking up on a cliffside, you feel a cool breeze and.......\n", "You have been here before.\n", "", "", "", 11};
		info[0][10 - 1] = { "Walking through the thick forest, you stumble across a tree with what appears to be a decimated corpse of an\nanimal.\n", "You cannot even make out its shape anymore.\n", "The forest path opens up to your south and to your east.\n", "You can see the northern side of the house from here.\n", "", 10 };
		info[0][6 - 1] =  { "You draw closer to the house, approaching the front door.\n", "A bloodstained mat lies by the door.\n", "", "", "", 6 };
		info[0][4 - 1] =  { "You walk towards the east and approach a window with a torn note taped to it.\n", "A dense and strangely dark forest stands to your east.\n", "There seems to be an opening in the growth to the south.\n", "", "", 4 };
		describeText[0][10 - 1] = "You are at the eastern edge of the forest path.\nYou can see the northern side of the house from here.\n";

		checkT[0][11 - 1] = "The familiar view of a ocean to your south fills you with detemination.\n";
		checkT[0][10 - 1] = "The corpse has most likely been lying here for days.\n";
		checkT[0][8 - 1] = "The forest enterance has a two sided signpost.\nThe text on the board has been completely worn out.\n";
		checkT[0][4 - 1] = "The note reads, \"m i s s  h i m  y e t ?\".\n";*/


		info[0][1 - 1] = { "", "", "", "", "", 1 };
		info[0][2 - 1] = { "You approach the south-west corner of the house.\n", "To your west is a cliff with a sheer drop, its edges adorned with leaves ready to fall.\n", "", "", "", 2 };
		info[0][3 - 1] = { "You now stand at the north-west corner of the house\n", "You can see a narrow path leading into the forest from here, its floor covered with a carpet of fallen leaves.\n", "You can only see darkness at the end.\n", "", "", 3 };
		info[0][4 - 1] = { "You walk towards the east and approach a window with a torn note taped to it.\n", "A dense and strangely dark forest stands to your east.\n", "There seems to be an opening in the growth to the south.\n", "", "", 4 };
		info[0][5 - 1] = { "You now stand on the eastern side of the house.\n", "There is a path leading into the forest, its way covered by a carpet of fallen leaves.\n", "", "", "", 5 };
		info[0][6 - 1] = { "You draw closer to the house, approaching the front door.\n", "A bloodstained mat lies by the door, surrounded by leaves tinted with red and orange.\n", "", "", "", 6 };
		info[0][7 - 1] = { "You head towards the south-east corner of the house.\n", "A lush dense forest stands to your east, its canopy ablaze with vibrant colors.\n", "", "", "", 7 };
		info[0][8 - 1] = { "You stand west of the forest entrance.\n", "The forest grows denser to your north, its trees swaying gently in the breeze, releasing showers of leaves.\n", "You get an uneasy feeling, like you are being watched.\n", "", "", 8 };
		info[0][9 - 1] = { "You stroll deeper into the woods, and reach a small clearing.\n", "The sunlight filtering through the foliage makes soothing rays, casting warm hues on the forest floor.\n", "There is a pile of dead leaves in the center, forming a natural carpet of reds and yellows.\n", "", "", 9 };
		info[0][10 - 1] = { "Walking through the thick forest, you stumble across a tree with what appears to be a decimated corpse of an\nanimal.\n", "You cannot even make out its shape anymore.\n", "The forest path opens up to your south and to your east, offering a glimpse of the north-side of the house.\n", "", "", 10 };
		info[0][11 - 1] = { "Waking up on a cliffside, you feel a cool breeze and.......\n", "You have been here before.\n", "", "", "", 11 };


		checkT[0][1 - 1] = "";
		checkT[0][2 - 1] = "You look at the drop below. It sends a shiver down your spine..\n";
		checkT[0][3 - 1] = "";
		checkT[0][4 - 1] = "The note reads, \"m i s s  h i m  y e t ?\".\n";
		checkT[0][5 - 1] = "The forest entrance has a two-sided signpost that reads \"Forest\" from this side.\n";
		checkT[0][6 - 1] = "You look through the front window, catching a glimpse of the foyer shrouded in darkness.\n";
		checkT[0][7 - 1] = "";
		checkT[0][8 - 1] = "The forest entrance has a two-sided signpost, its text completely worn out by time's relentless passage.\n";
		checkT[0][9 - 1] = "The sunlight filtering through the foliage makes soothing rays, casting warm hues on the forest floor.\n";
		checkT[0][10 - 1] = "The corpse has most likely been lying here for days.\n";
		checkT[0][11 - 1] = "The familiar view of an ocean to your south fills you with determination.\n";


		describeText[0][1 - 1] = {""};
		describeText[0][2 - 1] = { "You are at the south-west edge of the house, surrounded by a carpet of fallen leaves.\nTo your west is a cliff with a sheer drop.\n" };
		describeText[0][3 - 1] = { "You stand at the north-west corner of the house, with leaves crunching beneath your feet.\nThere is a path leading into the forest, its floor covered with a mosaic of autumn colors.\n" };
		describeText[0][4 - 1] = { "This is the north-east edge of the house, the window adorned with fallen leaves and a note taped to it.\nThere seems to be an opening in the growth to the south, where leaves rustle in the gentle breeze.\n" };
		describeText[0][5 - 1] = { "This is the forest entrance, at the eastern side of the house.\n" };
		describeText[0][6 - 1] = { "This is the front of the house.\nA bloodstained mat lies by the door, surrounded by leaves tinted with red and orange.\n" };
		describeText[0][7 - 1] = { "This is the south-east corner of the house, with a lush dense forest standing to your east,\nits canopy ablaze with autumnal colors.\n" };
		describeText[0][8 - 1] = { "You stand west of the forest entrance, where the forest grows denser to your north.\n" };
		describeText[0][9 - 1] = { "You stand deep inside the forest at a small clearing, surrounded by a layer of dead leaves.\nThe sunlight filtering through the foliage makes soothing rays, casting warm hues on the forest floor.\n" };
		describeText[0][10 - 1] = { "You are at the eastern edge of the forest path, from where you can see the northern side of the house.\n" };
		describeText[0][11 - 1] = {"This is the spot where you woke up, surrounded by the rustling leaves, with the ominous house lying to your north\n" };


		directions[0][2 - 1] = { "After some length of rustling leaves, there is a dense forest, its canopy ablaze with fiery hues.\n", "There is a cliff with the ocean below..\n", "The house is to the east.\n", "To the west, there is a tall cliff. The sounds of waves can be heard below.\n", 2 };
		directions[0][3 - 1] = { "There is a tight path going into the forest, its edges lined with fallen leaves.\n", "There is grass and a cliff dropping into the ocean, the breeze carrying the scent of salt and decay.\n", "There is a thick forest after the house, its trees shedding their leaves in preparation for the cold.\n", "The steep cliff with the ocean below lies to your west.\n", 3 };
		directions[0][4 - 1] = { "A dense forest, its floor carpeted with a mosaic of fallen leaves.\n", "There seems to be a small clearing in the thick undergrowth, the sunlight filtering through the canopy.\n", "To your east, the forest stands too dark and thick to see much, its depths obscured by the fading light.\n", "A cliff after the fields surrounding the house.\n", 4 };
		directions[0][5 - 1] = { "A dense forest beyond the grassy fields, its trees ablaze with the colors of fall.\n", "Grass surrounding the house, now tinged with the golden hues of the season.\n", "The forest entrance has a two-sided signpost, its text completely worn out by the passage of time.\n", "The east side of the house.\n", 5 };
		directions[0][6 - 1] = { "The front door of the house, framed by a cascade of falling leaves.\n", "After the fields, there is a dangerous drop into the ocean, the waves crashing against the cliffs below.\n", "There is a forest in the distance, its trees ablaze with fiery colours.\n", "There is a cliff after the field.\n", 6 };
		directions[0][7 - 1] = { "There seems to be a clearing in the forest a bit ahead, the ground covered with a carpet of fallen leaves.\n", "There is a cliff beyond the fields, its edges tinged with the colors of fall.\n", "The forest is impenetrable, its depths shrouded in the fading light.\n", "The front of the house, and the field surrounding it, now adorned with the colors of fall.\n", 7 };
		directions[0][8 - 1] = { "There is a faint light at the end of the dark path, its glow muted by the rustling leaves.\n", "The path is blocked by debris, fallen branches and leaves.\n", "The forest is impenetrable.\n", "The path goes to the eastern side of the house.\n", 8 };
		directions[0][9 - 1] = { "The forest is too thick, and the path doesn't continue in that direction.\n", "The path heads into the forest.\n", "The path heads into the eerie forest, its silence broken only by the rustling of leaves.\n", "The forest is impenetrable in that direction.\n", 9 };
		directions[0][10 - 1] = { "The forest looks too dark and dense to be able to walk there.\n", "The path heads south to the house.\n", "The forest path seems to be leading to a clearing, a sanctuary amidst the fading light.\n", "The forest looks too dark and dense to be able to walk there.\n", 10 };
		directions[0][11 - 1] = { "A mysterious house looms ahead. It is surrounded by an mystifying aura..\n", "A cliff is behind you, its edges painted with the warm hues of the season.\n", "A dense forest is to your east.\n", "The roaring waves of the sea are to your west.\n", 11};
	}
	
}

void loadLevelData() {
	
	switch (level) {
	case 0:
		xpos = 8; ypos = 16;
		break;
	case 1:
		xpos = 14; ypos = 15; bgm.setVolume(0); bgm.play();
		break;
	case 2:
		xpos = 2; ypos = 7; piano.play(); piano.setVolume(0); hasKey = false;
		break;
	case 3:
		xpos = 11; ypos = 3; locked = false; hasKey = false;
		break;
	case 4:
		hasKey = false; hasAxe = false;	hasBook = false; hasSketch = false; hasBPrint = false; hasReport = false; hasKnife = false; sleep(2000);
		xpos = 8; ypos = 16; bgm.setVolume(20); bgm.play();
		break;
	}

	location = maps[level][ypos][xpos];
}