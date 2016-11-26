#include "Source.h" //TODO THREAD stop start from other thread and fix time left to execute

int main()
{
	std::cout << "WELCOME TO TRAFFIC LIGHT";
	_sleep(1000);
	std::thread lightControlThread(turnOnLight);     // spawn new thread that calls 
	std::thread userInputThread(waitUserResponce);  // spawn new thread that calls 

	// synchronize threads:

	lightControlThread.join();                // pauses until first finishes
	userInputThread.join();               // pauses until second finishes
	
	return 0;
}

void turnOnLight()
{

	TrafficLight light;//TODO RUNcycle and STOP cycle
	bool isGoingDown = true;
	
	while (true)
	{
		if (isGoingDown)
		{

			light.drawRed();
			_sleep(1000);
			light.blinkYellow();
			light.drawGreen();
			_sleep(2000);
			isGoingDown = false;
		}
		else
		{
			light.blinkYellow();
			isGoingDown = true;
		}
	}
}
void waitUserResponce()
{
	
	while(true)
	{
		/*_sleep(1000);
		std::cout << "FUCK";*/
		if (std::cin.get() == '1')
			exit(0);
		
	}

}