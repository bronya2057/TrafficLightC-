#ifndef USER_INPUT_CHECK
#define USER_INPUT_CHECK

#include <cstdlib>
#include <iostream>
#include <string>

class UserInputCheck
{
	std::string userInput;
	int stringSize;
	
public:
	
	UserInputCheck();
	~UserInputCheck();
	void waitUserResponce();
	std::string getUserInput() const;
	static bool getState();
};

#endif

