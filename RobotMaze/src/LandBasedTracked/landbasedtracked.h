#pragma once
/**
 * @file landbasedtracked.h
 * @authors
 * Group 5 
* 
* Shubham Sonawane shubhams@umd.edu \n
* Sanket Goyal sanket193@gmail.com \n
* Dipam Patel dipu18@umd.edu \n
* Kartik Venkat kartik.venkat86@gmail.com \n
* Arjun Srinivasan arjunsrinivasan.a@gmail.com \n 
* Kulbir Singh Ahluwalia kulbir@umd.edu \n
* @version 1.1
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
* 
* This is a concrete class that is derived from the base class (LandBasedRobot)
*
*/
#include <iostream>
#include <string>
#include "landbasedrobot.h"

namespace rwa3
{

class LandBasedTracked : public LandBasedRobot
{
protected:
        std::string *track_type;

    public:
/**
* @brief It is a constructor of class named LandBasedTracked
* and it is a no parameter constructor
* @param none
* @return none
*/
        LandBasedTracked();
/**
* @brief This is a 3 parameter constructor of the class named LandBasedTracked
* and it initialises name_, x_, y_
* @param name
* @param x
* @param y
* @return none
*/
		LandBasedTracked(std::string name, int x, int y): LandBasedRobot(name, x, y){}		
/**
* @brief It is a virtual destructor of class LandBasedTracked 
* that destroys the object created
* @param none
* @return none
*/
        virtual ~LandBasedTracked();
/**
* @brief It is a virtual function named GoUp
* that increments the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoUp(int, int) override;
/**
* @brief It is a virtual function named GoDown
* that decrements the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoDown(int, int) override;
/**
* @brief It is a virtual function named TurnLeft
* that decrements the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnLeft(int, int) override;
/**
* @brief It is a virtual function named TurnRight
* that increments the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnRight(int, int) override;
/**
* @brief  It is a virtual function named Pickup
* that picksup the object
* @param std::string
* @return none
*/
        virtual void PickUp(std::string) override;
/**
* @brief  It is a virtual function named Pickup
* that picksup the object
* @param std::string
* @return none
*/
        virtual void Release(std::string) override;		
		
};

}

