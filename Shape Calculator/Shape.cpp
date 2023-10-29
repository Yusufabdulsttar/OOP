/*
 * File:   Shape.cpp
 * Author: Yusuf Abdulsttar
 *
 * Created on August 17, 2023, 2:05 PM
 */

#include "Shape.h"

/* Function for Shape class */
float Shape::Perimeter() {          //virtual function
	cout<< "this shape doesn't have a Perimeter";
}

float Shape::circumference() {      //virtual function
        cout<< "this shape doesn't have a circumference";
}


/* Function for Rectangle class */
Rectangle::Rectangle(int Length, int width) :   //Constructor
	      Length(Length), width(width) {
}

float Rectangle::Area() {
    return  width * Length;
}

float Rectangle::Perimeter() {
    return 2*(width + Length);
}

/* Function for Triangle class */
Triangle::Triangle(int first_side, int second_side , int third_side) :     //Constructor
	      first_side(first_side), second_side(second_side),third_side(third_side) {
}

float Triangle::Area() {
	    Semiperimeter = ((float)(first_side + second_side + third_side)/2);
    return  (sqrt(Semiperimeter*(Semiperimeter-first_side)*(Semiperimeter-second_side)*(Semiperimeter-third_side)));
}

float Triangle::Perimeter(){
    return (first_side + second_side + third_side);
}

/* Function for Circle class */
Circle::Circle(int radius) :    //Constructor
	    radius(radius) {
}

float Circle::Area() {
    return (PI * radius * radius);
}

float Circle::circumference() {
    return ( 2 * PI * radius);
}
