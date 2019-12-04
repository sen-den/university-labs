#include <iostream>
#include "circleClass.h"

using namespace std;

int main(){
    circleClass c1;
    c1.print();

    double rad, x, y;
    cout<<"Please enter a new radius and x,y coordinates"<<endl;
    cin>>rad>>x>>y;

    c1.setR(rad);
    c1.setX(x);
    c1.setY(y);
    c1.print();

    return 0;
};
