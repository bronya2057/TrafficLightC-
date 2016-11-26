#include "UserInputCheck.h"
static bool stopLight;

UserInputCheck::UserInputCheck()
{
	stringSize = 0;
}

UserInputCheck::~UserInputCheck()
{
}

void UserInputCheck::waitUserResponce()
{
	while (true)
	{
		std::getline(std::cin, userInput);
		int stringSize = userInput.length();
		std::cout << "The total number of characters entered is: " << stringSize << std::endl;
		if (stringSize > 1)
		{
			std::cout << "More Than 1 Character Input";
		}
		else if (userInput == "P")
		{
			stopLight = true;
		}
		else if (userInput == "S")
		{
			stopLight = false;
		}
		else if (userInput == "E")
			exit(0);
	}
}


bool UserInputCheck::isChangingState()
{
	return stopLight;
}
