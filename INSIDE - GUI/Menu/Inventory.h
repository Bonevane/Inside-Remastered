#pragma once
#include "../Source/Components.h"


struct items {
	std::string itemName;
	std::string itemDesc;
};

extern items key;
extern items axe;
extern items book;
extern items sketch;
extern items bprint;
extern items report;
extern items knife;

extern bool hasKey;
extern bool hasAxe;
extern bool hasBook;
extern bool hasSketch;
extern bool hasBPrint;
extern bool hasReport;
extern bool hasKnife;

void displayInventory();