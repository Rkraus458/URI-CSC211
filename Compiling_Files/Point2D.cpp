#include <iostream>
#include <string>
#include <cmath>
#include "Point2D.h"

//Default Constructor
Point::Point(){
    x = 0;
    y = 0;
    z = 0;
}

//Constructs a point object with X, Y, Z properties
Point::Point(int _x, int _y, int _z){
    x = _x;
    y = _y;
    z = _z;
}

//Sets the X, Y, and Z properties of a point Object
void Point::setX(int someX){
    x = someX;
}
void Point::setY(int someY){
    y = someY;
}
void Point::setZ(int someZ){
    z = someZ;
}

//Gets the X, Y, and Z properties from a point Object
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
int Point::getZ(){
    return z;
}

//Returns a cartesian coordinate representation of a point Object
// aka = (x,y,z)
std::string Point::toCord()
{
    std::string coords = "(" + std::to_string(x) + "," +  std::to_string(y) + "," +  std::to_string(z) + ")";
    return coords;
}
        
//Calculates the Euclidean Distance of two points        
double Point::euDistance (Point p2) {
    double eudistance = 0;
    double xdistance = abs(x - p2.getX());
    double ydistance = abs(y - p2.getY());
    double zdistance = abs(z - p2.getZ());
    eudistance = sqrt((xdistance * xdistance) + (ydistance * ydistance) + (zdistance * zdistance));
    return eudistance;
}