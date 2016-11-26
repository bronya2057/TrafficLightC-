#include "Source.h" 

int main()
{

	std::thread lightControlThread(&TrafficLight::startSimulation, TrafficLight());
	std::thread userInputThread(&UserInputCheck::waitUserResponce, UserInputCheck());

	std::cout << "WELCOME TO TRAFFIC LIGHT";
	_sleep(1000);
	
	lightControlThread.join();
	userInputThread.join();
	return 0;
}