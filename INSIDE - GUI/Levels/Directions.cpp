#include "Levels.h"

// Text to be printed when using the "Look" [direction] command.
// First row always empty because location "1" is reserved for movement.
lookText directions[5][25] = {

	{//Level 0
	{"", "", "", "", 1},
	{"After some length of grass, there is a dense forest.\n", "There is a cliff with the ocean below.\n", "The house is to the east.\n", "To the west, there is a tall cliff. The sounds of waves can be heard below.\n", 2},
	{"There is a tight path going into the forest.\n", "There is grass and a cliff dropping into the ocean.\n", "There is thick forest after the house.\n", "The steep cliff with the ocean below lies to your west.", 3},
	{"A dense forest.\n", "There seems to be a small clearing in the thick undergrowth.\n", "To your east, the forest stands too dark and thick to see much.\n", "A cliff after the fields surrounding the house.\n", 4},
	{"A dense forest beyond the grassy fields.\n", "Grass surrounding the house.\n", "The forest enterance has a two sided signpost.\nThe text on the board is worn out.\nYou can barely make out the word \" dr a 's\"\n", "The east side of the house.\n", 5},
	{"The front door of the house.\n", "After the fields, there is a dangerous drop into the ocean.\n", "There is a forest in the distance.\n", "There is a cliff after the the field.\n", 6},
	{"There seems to be a clearing in the forest a bit ahead.\n", "There is a cliff beyond the fields.\n", "The forest is impenetrable.\n", "The front of the house, and the field surrounding it.\n", 7},
	{"There is a faint light at the end of the dark path.\n", "The path is blocked by debris.\n", "The forest is impenetrable.\n", "The path goes to the eastern side of the house.\n", 8},
	{"The forest is too thick, and the path doesn't continue in that direction.\n", "The path heads into the forest.\n", "The path heads into the eerie forest.\n", "The forest is impenetrable in that direction.\n", 9},
	{"The forest looks too dark and dense to be able to walk there.\n", "The path heads south to the house.\n", "The forest path seems to be leading to a clearing.\n", "The forest looks too dark and dense to be able to walk there.\n", 10},
	{"A mysterious house looms ahead. It is surrounded by an ominous aura.\n", "A cliff is behind you.\n", "A dense forest is to your east.\n", "The roaring waves of the sea are to your west.\n", 11}
	},


	{//Level 1 NSEW
	{"", "", "", "", 1},
	{"There is a door to your far north.\n", "The house door is to your south.\n", "There is a window to your far east.\n", "", 2},
	{"There are stairs to the attic to your far north.\n", "It's you!...\n", "", "", 3},
	{"There are stairs leading up to the attic.\n", "", "There's a door to your east.\n", "There's a door to your far west.\n", 4},
	{"The door to the study lies in front of you.\n", "You can see the main door to your far south.\n", "There's a door to your far east.\n", "The door to the workshop lies to your west.\n", 5},
	{"", "", "There's the door to the workshop.\n", "There's a door leading to the sunroom.\n", 6},
	{"", "", "There's the door to the sunroom.\n", "You can see the balcony from here.\n", 7},
	{"The view of the open cliffside fills you with determination.\n", "The view of the open cliffside fills you with determination.\n", "You can see the sunroom from here.\n", "The ocean feels frighteningly vast.\n", 8},
	{"A single flickering candle on the desk casts elongated shadows.\n", "The door to the study.\n", "", "An imposing bookshelf stands at the other side of the study.\n", 9},
	{"An ominous door stands in front of you.\n", "", "", "An imposing bookshelf stands to your west.\n", 10},
	{"It's too dark to see.\n", "It's too dark to see.\n", "There's a dimly lit table on the other side of the room.\n", "It's too dark to see.\n", 11},
	{"It's too dark to see.\n", "It's too dark to see.\n", "There's a dimly lit table next to you.\n", "It's too dark to see.\n", 12},
	{"The darkness exudes a heavy presence around you...\n", "You can see the foyer from here.\n", "", "", 13},
	{"An ominous door stands in front of you.\n", "", "", "An imposing bookshelf stands to your west.\n", 14}
	},


	{//Level 2
	{"", "", "", "", 1},
	{"The door to the bedroom stands in front of you.\n", "There's the office door to your south.\n", "The hallway is too long and dark.\nYou can't make out what's at the far end.\n", "The closet that you seemingly came from.\n", 2},
	{"There's a painting of a couple on the wall.\n", "The bedroom door.\n", "There is soft moonlight flowing in from the window against the draping curtains.\n", "There's a bed to your west.\n", 3},
	{"You can see a page peeping from below the bed.\n", "", "You can see the bedroom window from here.\n", "There's a door to the bathroom.", 4},
	{"The shower head seems to be leaking.\n", "", "", "The bathroom door.\n", 5},
	{"The office door stands in front of you.\n", "The computer screen illuminates a chair to your south.\n", "There's a painting on the eastern side of the room, revealing something behind.\n", "", 6},
	{"", "", "The painting to your east reveals a hidden safe inside the wall.\n", "You can see the enterance to the office.\n", 7},
	{"", "", "", "", 8}, //Unused location.
	{"The door to the sitting area stands in front of you.\n", "There are stairs leading down to the foyer.\n", "", "The hallway is too long and dark.\nYou can't make out what's at the far end.\n", 9},
	{"The fireplace of the sitting area sets the tone of the room.\n", "The door to the sitting area lies to your south.\n", "There's a window looking out to the forest to the east.\n", "There is a black grand piano to the west.\n", 10},
	{"There's a painting of a man playing a piano hung on the wall.\n", "", "A Yamaha P-515 playing by itself.\n", "You can see the sitting area window from here.\n", 11},
	{"The stairs lead up to the 1st floor.\n", "", "The door to the east seems to have been barred off.\n", "There's a door to the workshop to your far west.\nIt seems to have been barred off.\n", 12},
	{"There are stairs to the attic to your far north.\n", "", "It's you!...\n", "", 13},
	{"There is a door to your far north.\n", "The house door is to your south.\n", "There is a window to your far east.\n", "", 14},
	{"The door to the study lies in front of you.\n", "You can see the main door to your far south.\n", "There's a door to your far east.\n", "The blocked door to the workshop lies to your west.\n", 15},
	{"A single flickering candle on the desk casts elongated shadows.\n", "The door to the study.\n", "", "An imposing bookshelf stands at the other side of the study.\n", 16},
	{"", "", "", "An imposing bookshelf stands to your west.\n", 17},
	},


	{//Level 3
	{"", "", "", "", 1},
	{"", "", "", "", 2},
	{"The house door stands to your north.\n", "There's a door to your south.\n", "There's a door to your west.\n", "There's a door at the far end of the foyer to your east.\n", 3},
	{"", "A painting of a disfigured man is hung on the wall to your south.\n", "There's a door at the far end of the foyer to your east.\n", "There is a door to your west.\n", 4},
	{"There's a window to your north.\nYou can see the cliffside enveloped in the deep orange hue of the sunset.\n", "There's a painting of yourself on the southern wall.\n", "The ominous TV is sitting on a table to your east.\n", "The door to the foyer stands to your west.\n", 5},
	{"There are various kitchen utensils on the counter.\n", "There are various kitchen utensils on the counter.\n", "The door to the foyer is to your east.\n", "There is a body with a disfigured face lying on the ground.\n", 6}, // Unused point
	{"The door to the foyer is to your north.\n", "There is a mirror to your south.\n", "A door leading to the library.\n", "A door leading to the hospital.\n", 7},
	{"", "A reception desk, stocked with outdated magazines, stands unmanned, its computer screen flickering sporadically.\n", "The hospital door stands to your east.\n", "A dark corridor stands to your west.\n", 8},
	{"", "There are mulltiple doors along the eastern wall of the hallway to your south.\n", "The reception area lies to your east.\n", "", 9},
	{"", "", "The door to your east is labelled ICU 03.\n", "", 10},
	{"There is beeping machinery on the table to your north.\n", "Medical equipment litters the table to your south.\n", "A deep red hospital bed lies to your east.\n", "The ICU 03 door.\n", 11},
	{"", "A stark red door stands to your south.\n", "The door to the east is labelled 'Imaging'.\n", "", 12},
	{"There are monitors displaying information meaningless to you.\n", "", "Imaging equpment is present behind the glass wall.\n", "The door leading back into the hallway.\n", 13},
	{"A stark red door stands to your north.\n", "There is a large handwheel to the south.\n", "There's a door labelled exit to your east.\n", "", 14},
	{"There's a door down the staircase to your north.\n", "You can see two doors at the southern end of the corridor.\n", "There's a door to your east.\n", "", 15},
	{"", "", "", "", 16},
	{"", "", "The door to the east is labelled 'Pumps'.\n", "The door to the west is labelled 'Store'.\n", 17},
	{"There is what looks like a control panel to the north.\n", "To your south, there is a note on the table under a bright lamp.\n", "There are tables on the east side of the room with non-functional computers.\n", "The door leading back to the flooded corridor.\n", 18},
	{"The panel has large text above it which reads 'Water Pump Controls'.\n", "There's a dimly lit table at the southern end of the room.\n", "There is a locked door that needs to be unlocked from both sides to your east.\n", "", 19},
	{"Tall metal shelves line the walls, stacked with taped cardboard boxes.\n", "Tall metal shelves line the walls, stacked with taped cardboard boxes.\n", "The door leading back to the flooded corridor.\n", "There's a note on the locker demanding the plumbers to fix the water tanks.\n", 20},
	{"This is the door to the library maze.\n", "There is a computer displaying live feed from the telescope.\n", "A balcony lies to the east with a telescope pointed towards the sky.\n", "There is a door to your west.\n", 21},
	{"A vast expanse of the sea lies to the north.\n", "There is a door to your south.\n", "The telescope to your east is pointed towards the full moon.\n", "You can see the orrery inside the observatory from here.\n", 22}
	},


	{//Level 4
	{"", "", "", "", 1},
	{"After some length of grass, there is a dense dry forest.\n", "There is a cliff with the ocean below.\n", "The house ruins lie to your east.\n", "To the west, there is a tall cliff. The sounds of waves can be heard below.\n", 2},
	{"There is a tight path going into the forest.\n", "There is dead grass and a cliff dropping into the ocean.\n", "There is thick lifeless forest after the house ruins.\n", "The steep cliff with the ocean below lies to your west.", 3},
	{"A gray, withered forest.\n", "There seems to be a small clearing in the undergrowth.\n", "To your east, the forest stands too dark and thick to see much.\n", "A cliff after the fields surrounding the house ruins.\n", 4},
	{"A dead forest beyond the fields.\n", "Debris surrounding the house ruins.\n", "A path leading into the eerie forest.\n", "The east side of the house ruins.\n", 5},
	{"The front of the house ruins.\n", "After the fields, there is a dangerous drop into the ocean.\n", "There is a forest in the distance.\n", "There is a cliff after the the field.\n", 6},
	{"There seems to be a clearing in the forest a bit ahead.\n", "There is a cliff beyond the fields.\n", "The forest is impenetrable.\n", "The front of the house ruins, and the field surrounding it.\n", 7},
	{"There is a faint light at the end of the dark path.\n", "The path is blocked by debris.\n", "The forest is impenetrable.\n", "The path goes to the eastern side of the house ruins.\n", 8},
	{"The forest is too thick, and the path doesn't continue in that direction.\n", "The path heads into the forest.\n", "The path heads into the eerie forest.\n", "The forest is impenetrable in that direction.\n", 9},
	{"The forest looks too dark and dense to be able to walk there.\n", "The path heads south to the house ruins.\n", "The forest path seems to be leading to a clearing.\n", "The forest looks too dark and dense to be able to walk there.\n", 10},
	{"The house ruins lie to your north.\n", "A cliff is behind you.\n", "A dense forest is to your east.\n", "The roaring waves of the sea are to your west.\n", 11}
	},
};