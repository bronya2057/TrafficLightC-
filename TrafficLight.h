#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <iostream>
#include <ctime>

#include "UserInputCheck.h"

class TrafficLight
{

public:

	void startSimulation() const;

	static void drawLight(const std::string []);
	void blinkYellow() const;
	void checkUserInput() const;

private:

	UserInputCheck userInput;

	static const int lightHeight = 21;
	
	std::string const blank[lightHeight] = {
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
	std::string const red[lightHeight] = {
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
	std::string const yellow[lightHeight] = {
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
	std::string const green[lightHeight] = {
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

};

#endif
