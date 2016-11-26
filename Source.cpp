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

void pause_thread(int n)
{
	std::this_thread::sleep_for(std::chrono::seconds(n));
	std::cout << "pause of " << n << " seconds ended\n";
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
			//std::chrono::microseconds us = 5000;
			//auto start = std::chrono::high_resolution_clock::now() +5 ;
			//auto end = start + 5000;
			//do
			//{
			//	std::this_thread::yield();
			//} while (std::chrono::high_resolution_clock::now() < end);
			
			
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
		//std::cout << std::cin.get();
		
		std::string userInput;
		std::getline(std::cin, userInput);
		const int stringSize = userInput.length();
		std::cout << "The total number of characters entered is: " << stringSize << std::endl;
		if (stringSize > 1)
		{
			std::cout << "FUUUUCLK";
		}
		else if (userInput == "E")
			exit(0);
		
	}

}