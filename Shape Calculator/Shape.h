/*
 * File:   Shape.h
 * Author: Yusuf Abdulsttar
 *
 * Created on August 17, 2023, 2:00 PM
 */

#ifndef SHAPE
#define	SHAPE

/* section : Includes   */

#include <iostream>
#include <cmath>
#include <conio.h>

/* section : Micro Declaration  */

#define PI (3.14)
#define RECTANGLE        1
#define TRIANGLE         2
#define CIRCLE           3
#define AREA             1
#define PERIMETER        2
#define CIRCUMFERENCE    2
#define Exit             3

/* section : Micro Function Declaration  */

/* section : Data Type Declaration  */
using namespace std;

class Shape {
public:
	virtual float Area() = 0;      //pure virtual function
	virtual float Perimeter() {    //virtual function
	    cout<< "this shape doesn't have a Perimeter";
	}
    virtual float circumference() { //virtual function
        cout<< "this shape doesn't have a circumference";
    }
};


class Rectangle: public Shape {
private:
	int Length;
	int width;
public:
	Rectangle(int Length, int width) :
	      Length(Length), width(width) {
	}
	float Area();
    float Perimeter();
};

class Triangle: public Shape {
private:
	int first_side;
	int second_side;
	int third_side;
	float Semiperimeter;
public:
	Triangle(int first_side, int second_side , int third_side) :
	      first_side(first_side), second_side(second_side),third_side(third_side) {
	}
	float Area();
	float Perimeter();
};

class Circle: public Shape {
private:
	int radius;
public:
	Circle(int radius) :
	    radius(radius) {
	}
	float Area();
    float circumference();
};

/* section : Function Declaration  */



#endif	/* SHAPE */
