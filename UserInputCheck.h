#ifndef USER_INPUT_CHECK_H
#define USER_INPUT_CHECK_H

#include <iostream>
#include <string>

class UserInputCheck
{	
public:
	
	UserInputCheck();
	~UserInputCheck();
	void waitUserResponce();
	static bool isChangingState();
	

private:
	std::string userInput;
	int stringSize;
};

#endif

