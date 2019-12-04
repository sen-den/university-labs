#include <iostream>
#include "circleClass.h"

using namespace std;
             
//default constructor
circleClass::circleClass()  {
    itsR = 20;
    itsX = 100;
    itsY = 100;
}
//constructor
circleClass::circleClass(double x, double y, double r = 20) {
    itsR = r;
    itsX = x;
    itsY = y;
}

//Destructor
circleClass::~circleClass()
{
    cout << "A circle died"<<endl;
}

//Sets Radius
void circleClass::setR(double r)
{
    itsR = r;
}

//Gets Radius
double circleClass::getR()
{
    return itsR;
}

//Sets x
void circleClass::setX(double x)
{
    itsX = x;
}

//Gets x
double circleClass::getX()
{
    return itsX;
}

//Sets y
void circleClass::setY(double y)
{
    itsY = y;
}

//Gets y
double circleClass::getY()
{
    return itsY;
}

//prints info for a circle
void circleClass::print()
{
  cout <<"Radius = "<<getR()<<endl;
  cout <<"X = "<<getX()<<endl;
  cout <<"Y = " <<getY()<<endl;
}
