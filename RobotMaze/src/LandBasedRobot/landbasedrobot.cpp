#include <iostream>

#include "landbasedrobot.h"

/*rwa3::LandBasedRobot::LandBasedRobot()
{
	std::cout << "Constructor LandBasedRobot" << std::endl;
}*/

rwa3::LandBasedRobot::~LandBasedRobot()
{
	//std::cout << "Destructor LandBasedRobot" << std::endl;
}

void rwa3::LandBasedRobot::GoUp(int x, int y)
{
	std::cout << "LandBasedRobot::GoUp called" << std::endl;
}

void rwa3::LandBasedRobot::GoDown(int x, int y)
{
	std::cout << "LandBasedRobot::GoDown called" << std::endl;
}

void rwa3::LandBasedRobot::TurnLeft(int x, int y)
{ 
	std::cout << "LandBasedRobot::TurnLeft called" << std::endl;
}

void rwa3::LandBasedRobot::TurnRight(int x, int y)
{
	std::cout << "LandBasedRobot::TurnRight called" << std::endl;
}

void rwa3::LandBasedRobot::PickUp(std::string)
{
	std::cout << "LandBasedRobot::PickUp is called" << std::endl;
}

void rwa3::LandBasedRobot::Release(std::string)
{
	std::cout << "LandBasedRobot::Release is called" << std::endl;
}
