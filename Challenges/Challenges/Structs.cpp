#include "Structs.h"

struct House
{
	bool hasPool;
	int totalRooms;
	short totalPeople;
};


//House* housePointer = nullptr;
House* housePointer = new House;

House houses[5];

/*delete housePointer;
housePointer = nullptr;
delete housePointer;*/