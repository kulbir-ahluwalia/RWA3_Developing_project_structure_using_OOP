#pragma once
/**
 * @file landbasedwheeled.h
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

class LandBasedWheeled : public LandBasedRobot
{
protected:
        int wheel_number;
        std::string *wheel_type;

    public:
/**
* @brief It is a constructor of a class named LandBasedTracked 
* no param constructor
* @param none
* @return none
*/
        LandBasedWheeled();
/**
* @brief It is a 3 parameter constructor of a class named LandBasedWheeled 
* that initialises name_, x_, y_
* @param name
* @param x
* @param y
* @return none
*/
		LandBasedWheeled(std::string name, int x, int y): LandBasedRobot(name, x, y){}
/**
* @brief It is a virtual destructor of class LandBasedWheeled 
* that destroys the object created
* @param none
* @return none
*/
        virtual ~LandBasedWheeled();
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
* @brief  It is a virtual function named Release
* that picksup the object
* @param std::string
* @return none
*/
        virtual void Release(std::string) override;
/**
* @brief It is a function named SpeedUp that increases tthe speed.
* @param int
* @return none
*/
        void SpeedUp(int);

};

}

