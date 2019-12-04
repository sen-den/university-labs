#include <iostream>
using namespace std;

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

            void print();
};
