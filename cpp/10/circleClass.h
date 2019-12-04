#include <iostream>
using namespace std;

#define PI 3.141592

class circleClass
{
      private:
      double itsR, itsX, itsY;

      public:
             //default constructor
             circleClass();

             //constructor
             circleClass(double r, double x, double y);

             //copy constructor
             circleClass(circleClass& circle);

             //Destructor
             ~circleClass();

             //Sets Radius
             void setR(double r);

             //Gets Radius
             double getR();

             //Sets x
            void setX(double x);

            //Gets x
            double getX();

            //Sets y
            void setY(double y);

            //Gets y
            double getY();

            //length, m
            double length();

            //area, m^2
            double area();

            //volume, m^3
            double volume();

            //length, m
            double length(double r);

            //area, m^2
            double area(double r);

            //volume, m^3
            double volume(double r);

            void print();
};
