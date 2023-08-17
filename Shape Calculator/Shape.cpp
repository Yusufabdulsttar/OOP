/*
 * File:   Shape.cpp
 * Author: Yusuf Abdulsttar
 *
 * Created on August 17, 2023, 2:05 PM
 */

#include "Shape.h"

/* Function for Rectangle class */
float Rectangle::Area() {
    return  width * Length;
}

float Rectangle::Perimeter() {
    return 2*(width + Length);
}

/* Function for Triangle class */
float Triangle::Area() {
	    Semiperimeter = ((float)(first_side + second_side + third_side)/2);
    return  (sqrt(Semiperimeter*(Semiperimeter-first_side)*(Semiperimeter-second_side)*(Semiperimeter-third_side)));
}

float Triangle::Perimeter(){
    return (first_side + second_side + third_side);
}

/* Function for Circle class */
float Circle::Area() {
    return (PI * radius * radius);
}

float Circle::circumference() {
    return ( 2 * PI * radius);
}
