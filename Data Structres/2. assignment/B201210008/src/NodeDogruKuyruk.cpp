/**
* @file NodeDogruKuyruk.cpp
* @description Dogrukuyruk sınıfımızın düğümlerini oluşturan kaynak kodu
* @course 1.Öğretim B Grubu
* @assignment 2.Ödev
* @date 26/12/2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/
#include "NodeDogruKuyruk.hpp"
#include <cmath>
#include <iostream>
using namespace std;
NodeDogruKuyruk::NodeDogruKuyruk(int x,int y,int z){
    this->x=x;//x koordinatı parametreden gelen koordinata eşitlenir
    this->y=y;//y koordinatı parametreden gelene eşitlenir
    this->z=z;//z koordinatı parametreden gelene eşitlenir
    next=0;//ileri gitmek için next pointeri
    distanceToOrigin=(int)sqrt(pow(x,2)+pow(y,2)+pow(z,2));//orjine uzaklık
 
}