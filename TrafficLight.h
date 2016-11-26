#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H
#include <iostream>

#include "UserInputCheck.h"
#include <ctime>
#include <thread>

class TrafficLight
{

	UserInputCheck userInput;


	static const int lightWidth = 21;
	static const int lightHeight = 21;

	const char light[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};
	const char lightRed[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *  RED  *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};
	const char lightYellow[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *Yellow *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};
	const char lightGreen[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    * GREEN *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};
	//bool stopLight;


public:

	TrafficLight();
	
	void drawEmpty() const;
	void drawRed() const;
	void blinkYellow() const;
	void drawYellow() const;
	void drawGreen() const;

	void turnOnLight();
	void checkState() const;
};

#endif
