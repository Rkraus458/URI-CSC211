#include <iostream>
#include <string>
#include <cmath>

#ifndef Point_H
#define Point_H

class Point {

    private:
        int x;
        int y;
        int z;
    
    public:
        // Default constructor  //TODO 
        Point();
        //Constructs a point object with X, Y, Z properties //TODO
        Point(int _x, int _y, int _z);

        //Sets the X, Y, and Z properties of a point Object
        void setX(int someX);
        void setY(int someY);
        void setZ(int someZ);
        
        //Gets the X, Y, and Z properties from a point Object
        int getX();
        int getY();
        int getZ();
        
        //Returns a cartesian coordinate representation of a point Object
        // aka = (x,y,z)
        std::string toCord();
        
        //Calculates the Euclidean Distance of two points
        double euDistance (Point p2);
};

#endif