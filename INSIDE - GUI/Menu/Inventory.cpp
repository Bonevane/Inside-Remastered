#include "Inventory.h"


// Inventory descriptions
items key = { "Rusty Key", "A Small Iron Key. Used to open doors."};
items axe = { "Worn Axe", "A Worn Out Wooden Axe. Can be used as a weapon."};
items book = { "Book", "A book about Applied Physics. It doesn't seem interesting."};
items sketch = { "Old Sketchbook", "An old sketchbook. It is filled with sketches of a beautiful cliffside."};
items bprint = { "Torn Blueprint", "A blueprint for a house. It's ripped in half." };
items report = { "Medical Records", "Cancer report for \"Adrian\"." };
items knife = { "Stained Knife", "A normal kitchen knife. It has been stained by blood." };

// Inventory itself
// Most advanced SEECS inventory tech
bool hasKey = false;
bool hasAxe = false;
bool hasBook = false;
bool hasSketch = false;
bool hasBPrint = false;
bool hasReport = false;
bool hasKnife = false;


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Displaying the inventory
// By checking the bool values :thumbsup:


void displayInventory()
{
	MyText.clearOld(); newline();

	if (hasKey == false && hasAxe == false && hasSketch == false && hasBPrint == false && hasBook == false && hasReport == false && hasKnife == false)
		MyText.printText("You have no items.\n", 50);
	else
	{
		MyText.printText("You currently have the following items:\n", 50);
		
		if (hasKey)
		{
			MyText.printText(key.itemName, 50); MyText.printText(":  ", 0);
			MyText.printText(key.itemDesc, 50, GREY); newline();
		}

		if (hasAxe)
		{
			MyText.printText(axe.itemName, 50); MyText.printText(":  ", 0);
			MyText.printText(axe.itemDesc, 50, GREY); newline();
		}

		if (hasBook)
		{
			MyText.printText(book.itemName, 50); MyText.printText(":  ", 0);
			MyText.printText(book.itemDesc, 50, GREY); newline();
		}

		if (hasBPrint)
		{
			MyText.printText(bprint.itemName, 50); MyText.printText(":  ", 0);
			MyText.printText(bprint.itemDesc, 50, GREY); newline();
		}

		if (hasSketch)
		{
			MyText.printText(sketch.itemName, 50); MyText.printText(":  ", 0);
			MyText.printText(sketch.itemDesc, 50, GREY); newline();
		}

		if (hasKnife)
		{
			MyText.printText(knife.itemName, 50); MyText.printText(":  ", 0);
			MyText.printText(knife.itemDesc, 50, GREY); newline();
		}

		if (hasReport)
		{
			MyText.printText(report.itemName, 50); MyText.printText(":  ", 0);
			MyText.printText(report.itemDesc, 50, GREY); newline();
		}
	}

}