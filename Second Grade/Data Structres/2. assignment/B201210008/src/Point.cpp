/**
* @file Point.cpp
* @description Point sınıfımıza ait özellikleri barındırır
* @course 1.Öğretim B Grubu
* @assignment 2.Ödev
* @date 26/12/2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/

#include "Point.hpp"
#include <iostream>
#include <cmath>
#include "iostream"
using namespace std;
Point::Point(int x,int y,int z){//Constructor
    this->x=x;//xi parametreden gelene eşitler
    this->y=y;//yi parametreden gelene eşitler
    this->z=z;//zi parametreden gelene eşitler
    distanceToOrigin=CalculateDistanceToOrigin(x,y,z);//orjine uzaklığı hesaplar ve distanceToOrigine atar
    
    
    
}
int Point::CalculateDistanceToOrigin(int x,int y,int z){
    return int(sqrt((x*x)+(y*y)+(z*z)));

}
void Point::Print(){
    cout<<x<<" "<<y<<" "<<z<<" ";
}


