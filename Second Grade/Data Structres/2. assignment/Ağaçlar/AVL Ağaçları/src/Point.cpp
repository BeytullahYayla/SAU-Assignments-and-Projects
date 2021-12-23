#include "Point.hpp"
#include <iostream>
#include <cmath>
#include "iostream"
using namespace std;
Point::Point(int x,int y,int z){
    this->x=x;
    this->y=y;
    this->z=z;
    distanceToOrigin=CalculateDistanceToOrigin(x,y,z);
    
    
    
}
int Point::CalculateDistanceToOrigin(int x,int y,int z){
    return int(sqrt((x*x)+(y*y)+(z*z)));

}
void Point::Print(){
    cout<<x<<" "<<y<<" "<<z<<" ";
}


