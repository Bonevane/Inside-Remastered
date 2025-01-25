#include "Levels.h"

// Text that plays when the player goes back to a point they've been to already
// First one always empty because location "1" is reserved for movement
std::string describeText[5][25] = {

	{//Level 0
	{""},
	{"You are at the south-west edge of the house.\nTo your west is a cliff with a sheer drop.\n"},
	{"You stand at the nort-west corner of the house.\nThere is a path leading into the forest.\n"},
	{"This is the north-east edge of the house.\nYou stand next to a window with a note taped to it.\nThere seems to be an opening in the growth to the south.\n"},
	{"This is the forest enterance.\nYou stand on the eastern side of the house.\n"},
	{"This is the front of the house. You are at the front-door.\nA house mat lies by the door, reading \"Home\".\n"},
	{"This is the south-east corner of the house.\nA lush dense forest stands to your east.\n"},
	{"You stand west of the forest enterance.\nThe forest grows denser to your north.\n"},
	{"You stand deep inside the forest at a small clearing.\nThere is a pile of dead leaves in the centre.\n"},
	{"You are at the eastern edge of the forest path.\nThere is an axe lodged into the tree.\n"},
	{"This is the spot where you woke up.\nThe ominous house lies to your north.\n"}
	},


	{//Level 1
	{""},
	{"You stand at the enterance to the house.\n"},
	{"You are standing next to the eerie mirror.\n"},
	{"You are at the stairs to the attic.\nThere's a door to your east.\n"},
	{"In this corner of the foyer, there are doors to your north and west.\n"},
	{"You are at the workshop.\nSupplies are scattered around the room, as if someone trashed the area on purpose.\n"},
	{"You stand in the sunroom.\nThe abundant green and the pattern of sunlight gives the room a very warm and homely feeling.\n"},
	{"You are now standing on the balcony perched above the cliffside.\nThe ocean feels frighteningly vast.\n"},
	{"You stand at the study enterance.\nA single flickering candle on the desk casts elongated shadows on an open diary.\n"},
	{"You are standing next to an imposing bookshelf.\nThere's a door to your north.\n"},
	{"You stand in a dark room.\nYou can see a dimly lit table to your east.\n"},
	{"You stand next to a dimly lit table with a small painted postcard.\n"},
	{"You stand at the first few steps to the attic...You decide not to proceed further.\n"},
	{"You are standing next to a shelf.\nThere's a door to your north.\n"}
	},


	{//Level 2
	{""},
	{"You are standing at the end of a long, eerie corridor extending eastward.\n"},
	{"You stand at the bedroom enterance.\nYou can see a picture of a young couple on the wall.\n"},
	{"You are on the eastern side of the bed.\nThere is a page peeping from below the bed.\n"},
	{"You are standing in the bathroom, next to a dripping shower-head.\n"},
	{"You are standing at the enterance to the home office.\nA flickering desk lamp barely illuminates scattered papers and a journal on the table to your south.\n"},
	{"You now stand next to the safe inside the home office.\n"},
	{""}, // Unused point, used to be in the home office
	{"This is the eastern end of the corridor.\nThe sitting room lies to your north and stairs going down to your south.\n"},
	{"You're standing in the sitting area.\nThere is a black grand piano to the west.\n"},
	{"The piano plays by itself, almost as if its playing from memory.\nSurprisingly, it doesn't freak you out.\n"},
	{"You are at the stairs to the attic.\n"},
	{"You are standing next to the eerie mirror.\n"},
	{"You stand at the enterance to the house.\n"},
	{"In this corner of the foyer, there is a door to your north.\n"},
	{"You stand at the study enterance.\nA single flickering candle on the desk casts elongated shadows-on an open diary.\n"},
	{"You are standing next to a bookshelf in the study.\n"}
	},


	{//Level 3
	{""},
	{"Bookshelves surround you in every direction, creating a labyrinth of books.\n"},
	{"You're at the foyer enterance.\nThe dizzying sound of static comes from a room to your east.\nThere is a corridor with two doors at its end to your south.\n"},
	{"You stand next to the kitchen door.\nYou can see various utensils lying on the floor from here.\n"},
	{"You're in the room with the TV displaying a video feed of yourself.\nA round table in the centre has an unopened letter on it.\n"},
	{"You now stand in the kitchen.\nThere is a corpse with a knife stabbed in its face.\nThe stench of blood reeks from the inanimate corpse.\n"}, // Unused point
	{"You stand in the room with a door leading to the hospital to your west and the library to your east.\n"},
	{"You are standing in the lobby of the hospital.\nThe air carries the hard smell of medical supplies.\n"},
	{"You're at the hospital corridoor.\nThere are mulltiple doors along the eastern wall of the hallway, with one imposing red door at the end.\n"},
	{"You're standing next to the ICU 03 room door.\n"},
	{"You stand inside the ICU 03 room.\nThere is an open journal lying next to the deep red hospital bed.\n"},
	{"The door to the east is labelled 'Imaging'.\n"},
	{"You stand inside the Imaging room.\nThere are monitors displaying information meaningless to you.\nA medical report lies next to one of them.\n"},
	{"You're now standing in the pipes room.\n"},
	{"You're at the northern end of the flooded corridoor.\nYou can see a door at the bottom of the small staircase to the north, but the flooding makes it impossible to reach.\n"}, // Update
	{"You're standing in the waiting room.\n"},
	{"You're at the southern end of the flooded corridoor.\nThere's a door going to your east and to your west.\n"},
	{"You stand at the enterance to the pump room.\nThere are pump controls to your north, and a note on the desk to your south.\n"},
	{"You're standing next to the pump controls.\nThere is a door to your east.\n"},
	{"You stand in the storeroom.\nThere is a note on one of the lockers.\n"},
	{"You are standing in the observatory.\nThere is a computer displaying live feed from the telescope nearby.\n"},
	{"You stand above the vast expanse of the sea to the east.\nThere is door to the south.\n"}
	},


	{//Level 4
	{""},
	{"You are at the south-west edge of the house ruins.\nTo your west is a cliff with a sheer drop.\n"},
	{"You stand at the nort-west corner of the house ruins.\nThere is a path leading into the forest.\n"},
	{"This is the north-east edge of the house ruins.\nThere seems to be an opening in the growth to the south.\n"},
	{"This is the forest enterance.\nYou stand on the eastern side of the house.\n"},
	{"This is the front of the house ruins. You stand where the front-door once stood.\n"},
	{"This is the south-east corner of the house.\nA gray, withered forest stands to your east.\n"},
	{"You stand west of the forest enterance.\nThe forest grows denser to your north.\n"},
	{"You stand deep inside the forest at a small clearing.\nThere is a pile of dead leaves in the centre.\n"},
	{"You are at the eastern edge of the forest path.\nYou are surrounded by dead trees all around.\n"},
	{"This is the spot where you woke up.\nThe ominous house lies to your north.\n"}
	}
};


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Location Names (Printed by the displayPos() function
// First one always empty because location "1" is reserved for movement
std::string points[5][25] = {

	{//Level 0
	"1\n",
	"Riverside\n",
	"Riverside\n",
	"Northside of House\n",
	"Forest Entrance\n",
	"Front of House\n",
	"Eastside of House\n",
	"Forest\n",
	"Deep Forest\n",
	"Forest\n",
	"Cliffside\n"
	},


	{//Level 1
	"1\n",
	"Foyer Entrance\n",
	"Foyer\n",
	"Foyer\n",
	"Foyer\n",
	"Workshop\n",
	"Sun Room\n",
	"Balcony\n",
	"Study\n",
	"Study\n",
	"??????\n",
	"??????\n",
	"Stairs to Attic\n",
	"Study\n"
	},


	{//Level 2
	"1\n",
	"Hallway\n",
	"Bedroom\n",
	"Bedroom\n",
	"Bath\n",
	"Office\n",
	"Office\n",
	"Office\n",
	"Hallway\n",
	"Sitting Area\n",
	"Sitting Area\n",
	"Foyer\n",
	"Foyer\n",
	"Foyer\n",
	"Foyer\n",
	"Study\n",
	"Study\n"
	},


	{//Level 3
	"1\n",
	"????\n",
	"Foyer\n",
	"Foyer\n",
	"Lounge\n",
	"Kitchen\n",
	"Library / Hospital Enterance\n",
	"Reception\n",
	"Reception\n",
	"Hallway\n",
	"ICU 03\n",
	"Hallway\n",
	"Imaging Room\n",
	"Pipes\n",
	"Flooded Corridor - North End\n",
	"Waiting Room\n",
	"Flooded Corridor - South End\n",
	"Pump Room\n",
	"Pump Control\n",
	"Store\n",
	"Observatory\n",
	"Observatory\n",
	"23\n"
	},


	{//Level 4
	"1\n",
	"Riverside\n",
	"Riverside\n",
	"Northside of House Ruins\n",
	"Forest Entrance\n",
	"House Ruins\n",
	"Eastside of House Ruins\n",
	"Forest\n",
	"Deep Forest\n",
	"Forest\n",
	"Cliffside\n",
	"????\n"
	}
};


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//



// Text that plays when the player uses the "check" command
// First one always empty because location "1" is reserved for movement
// Printed using the check() function
std::string checkT[5][25]{

	{//Level 0
	"",
	"You look at the drop below. It sends a shiver down your spine.\n",
	"",
	"The note seems to be a list of gardening tasks.\n",
	"The forest enterance has a two sided signpost that reads \"Forest\" from this side.\n",
	"You look through the front window.\nYou can see a foyer, shrouded in darkness.\n",
	"",
	"The forest enterance has a two sided signpost.\nThe text on the board is worn out.\nYou can barely make out the word \" dr a 's\"\n",
	"The golden light peaking in through the leaves makes soothing rays.\n",
	"The axe has left a gaping mow in the tree.\n",
	"The view of a ocean to your south fills you with detemination.\n"
	},


	{//Level 1
	"1\n",
	"You check the window to see......nothing outside.\n",
	"It's you!\n",
	"You check the darkness around you. It's quite ominous...\n",
	"",
	"You check your surroundings.\nThe workshop looks like it's been used regularly.\n",
	"The sunroom looks as breathtaking as ever.\n",
	"You can see the vast ocean...\nIts beauty fills you with determination.\n",
	"",
	"There is a gap for a book in the bookshelves.\n",
	"You check the ominous air around you...but nothing happens.\n",
	"The table is lit by a single candle.\n",
	"The darkness exudes a heavy presence around you...\nYou decide to not head further.\n",
	"You check the shelf.\n\"Applied Physics By M.S\" catches your eye once more....\nYou decide to avert your eyes.\n"
	},


	{//Level 2
	"1\n",
	"The end of the long corridor appears pitch black.\n",
	"There seems to be picture frames hung on the walls.\nIt shows a couple at their wedding.\n",
	"Note.",
	"The shower seems to be dripping...\nYou can hear the faint notes of a piano...\n",
	"Note.",
	"The safe is empty.\n",
	"",
	"You can hear the faint notes of a piano coming from a room somewhere...\n",
	"You can see a piano at the other end of the room.\nIt's playing by itself...\n",
	"You check the piano.\nIt's a Yamaha P-515.\n",
	"The door is locked shut.\n",
	"It's you!\n",
	"You check the door.\nThe front door to the house seems to have changed in design...\n",
	"The enterance to the workshop has been completely barricaded...\n",
	"Note.",
	"You check the shelf.\n\"Operational Health & Safe-\"...\nYou avert your eyes as quick as humanly possible.\n"
	},


	{//Level 3
	"1\n",
	"",
	"The foyer seems familier...yet so unfamiliar...\n",
	"You can see various utensils lying on the floor from here.\n",
	"The TV seems to be displaying a silhouette of yourself.\nYou can't make out any more details.\n",
	"The body seems to have been lying there for a while.\n", // Unused point
	"Despite everything, it's still you.\n",
	"The reception desk is stocked with outdated magazines.\nOne of the magazines has two buff men striking a menacing pose as its cover.\nHow strange.\n",
	"You can recognize the smell of medical supplies.\nIt's like you've recently been here.\n",
	"",
	"Note.", //"The dimly lit room is littered with oxygen cylinders, IV stands, pumps and workstations.\n",
	"",
	"There are monitors displaying information meaningless to you.\n",
	"Oversized pipes bend into the walls and floor, crisscrossing the space around you.\n",
	"You can see a door at the bottom of the small staircase to the north.\n",
	"",
	"",
	"Note.",
	"The pump controls seem to be fully functional.\n",
	"The note on the locker reads \"Fix the fucking pipes mate...It's been bloody weeks already!\n",
	"The note on the table seems to be notes about different stars.\nThe note is signed with \"-Adrian\" at the end.\n",
	"You look through the telescope.\nYou can see the moon in all it's glory.\nYou get the feeling that this telescope was very dear to someone you knew.\n", // left
	},


	{//Level 4
	"",
	"You look at the drop below. It sends a shiver down your spine.\n",
	"",
	"You can see a ruined piano amidst the debris.\n",
	"The forest enterance has a broken two sided signpost.\n",
	"There is nothing but debris around you.\n",
	"",
	"The forest enterance has a broken two sided signpost.\n",
	"The dim light flithering through the branches casts a haunting glow.\n",
	"",
	"There is a view of the ocean to your south.\n"
	}
};