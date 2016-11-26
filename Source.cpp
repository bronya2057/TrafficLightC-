#include "Source.h" //TODO THREAD stop start from other thread and fix time left to execute

int main()
{

	std::thread lightControlThread(&TrafficLight::turnOnLight, TrafficLight());     // spawn new thread that calls 
	std::thread userInputThread(&UserInputCheck::waitUserResponce, UserInputCheck());  // spawn new thread that calls 

	std::cout << "WELCOME TO TRAFFIC LIGHT";
	_sleep(1000);
	
	lightControlThread.join();                // pauses until first finishes
	userInputThread.join();               // pauses until second finishes
	return 0;
}