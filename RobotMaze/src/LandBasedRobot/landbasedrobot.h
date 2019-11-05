#pragma once

/**
 * @file landbasedrobot.h
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
* This is an abstract class whose attributes and methods are used by 
* the derived classes, namely LandBasedWheeled and LandBasedTracked.
*                                                                                               
* 
*/
#include <iostream>
#include <string>

namespace rwa3
{

class LandBasedRobot
{
protected:
        std::string name_;
        double speed_;
        double width_;
        double length_;
        double height_;
        double capacity_;
        int x_;
        int y_;

    public:

/**
* @brief constructor of a class named LandBasedRobot.
* It is a no parameter constructor.
* @param none
* @return none
*/
		LandBasedRobot(){};
/**
* @brief It is a 3 parameter constructor of the class named LandBasedRobot
* and it initialises name_, x_ and y_
* @param name
* @param x
* @param y
* @return none
*/
        LandBasedRobot(std::string name, int x, int y):name_{name}, x_{x}, y_{y}{
			//std::cout << "3 parameter constructor" << std::endl;
		}
/**
* @brief It is a virtual destructor of class named "LandBasedRobot"
* and it destroys the object created
* @param none
* @return none
*/
        virtual ~LandBasedRobot();
/**
* @brief It is a pure virtual function named "GoUp"
* that increments the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoUp(int, int) = 0;
/**
* @brief It is a pure virtual function named "GoDown"
* that decrements the y coordinate
* @param int
* @param int
* @return none
*/
        virtual void GoDown(int, int) = 0;
/**
* @brief It is a pure virtual function named "TurnLeft"
* that decrements the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnLeft(int, int) = 0;
/**
* @brief It is a pure virtual function named "TurnRight"
* that increments the x coordinate
* @param int
* @param int
* @return none
*/
        virtual void TurnRight(int, int) = 0;
/**
* @brief It is a pure virtual function named "Pickup"
* that picks up the object
* @param std::string
* @return none
*/
        virtual void PickUp(std::string) = 0;
/**
* @brief It is a pure virtual function named "Release" that releases
* the object
* @param std::string
* @return none
*/
        virtual void Release(std::string) = 0;
/**
* @brief It is a Getter function for x coordinate
* @param none
* @return x-coordinate (named x_)
*/
		int get_x() const
		{
			//std::cout << "Getter tracked x called" << std::endl;
			return x_;
		}
/**
* @brief It is a Getter function for y coordinate
* @param none
* @return y-coordinate (named y_)
*/
		int get_y() const
		{
			//std::cout << "Getter tracked y called" << std::endl;
			return y_;
		}


};

}

