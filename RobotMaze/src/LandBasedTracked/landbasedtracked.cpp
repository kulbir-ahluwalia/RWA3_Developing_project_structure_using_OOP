#include <iostream>
#include <string>

#include "landbasedtracked.h"

rwa3::LandBasedTracked::LandBasedTracked()
{
	//std::cout << "Constructor LandBasedTracked" << std::endl;
}

rwa3::LandBasedTracked::~LandBasedTracked()
{
	//std::cout << "Destructor LandBasedTracked" << std::endl;
}

void rwa3::LandBasedTracked::GoUp(int x, int y)
{
	std::cout << "LandBasedTracked::GoUp is called" << std::endl;
}

void rwa3::LandBasedTracked::GoDown(int x, int y)
{
	std::cout << "LandBasedTracked::GoDown is called" << std::endl;
}

void rwa3::LandBasedTracked::TurnLeft(int x, int y)
{
	std::cout << "LandBasedTracked::TurnLeft is called" << std::endl;
}

void rwa3::LandBasedTracked::TurnRight(int x, int y)
{
	std::cout << "LandBasedTracked::TurnRight is called" << std::endl;
}

void rwa3::LandBasedTracked::PickUp(std::string)
{
	std::cout << "LandBasedTracked::PickUp is called" << std::endl;
}

void rwa3::LandBasedTracked::Release(std::string)
{
	std::cout << "LandBasedTracked::Release is called" << std::endl;
}


