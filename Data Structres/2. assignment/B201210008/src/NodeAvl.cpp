/**
* @file NodeAvl.cpp
* @description Avl ağacı içindeki düğümleri oluşturur
* @course 1.Öğretim B Grubu
* @assignment 2.Ödev
* @date 26/12/2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/
#include "NodeAvl.hpp"
#include "DogruKuyruk.hpp"
#include <iostream>
using namespace std;

NodeAvl::NodeAvl(const DogruKuyruk& dogruKuyruk){
    this->dogruKuyruk=dogruKuyruk;//dogruKuyruğuna parametreden gelen doğrukuyruğumu atar
    right=0;//sağ
    left=0;//sol
}
