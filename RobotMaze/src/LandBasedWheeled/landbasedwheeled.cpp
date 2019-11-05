#include <iostream>
#include <string>
#include "landbasedwheeled.h"

rwa3::LandBasedWheeled::LandBasedWheeled()
{
	//std::cout << "Constructor LandBasedWheeled" << std::endl;
}

rwa3::LandBasedWheeled::~LandBasedWheeled()
{
	//std::cout << "Destructor LandBasedWheeled" << std::endl;
}

void rwa3::LandBasedWheeled::GoUp(int x, int y)
{
	std::cout << "LandBasedWheeled::GoUp is called" << std::endl;
}

void rwa3::LandBasedWheeled::GoDown(int x, int y)
{
	std::cout << "LandBasedWheeled::GoDown is called" << std::endl;
}

void rwa3::LandBasedWheeled::TurnLeft(int x, int y)
{
	std::cout << "LandBasedWheeled::TurnLeft is called" << std::endl;
}

void rwa3::LandBasedWheeled::TurnRight(int x, int y)
{
	std::cout << "LandBasedWheeled::TurnRight is called" << std::endl;
}

void rwa3::LandBasedWheeled::PickUp(std::string)
{
	std::cout << "LandBasedWheeled::PickUp is called" << std::endl;
}

void rwa3::LandBasedWheeled::Release(std::string)
{
	std::cout << "LandBasedWheeled::Release is called" << std::endl;
}

void rwa3::LandBasedWheeled::SpeedUp(int x)
{
	std::cout << "LandBasedWheeled::Speedup is called" << std::endl;
}



