/**
* @file Node.cpp
* @description Node ozelliklerinin bulundugu kaynak kod.Node constructorunu icerir.Parametre olarak gelen datayi Node sinifindaki dataya atar.Next ve previ ise 0'a atar.
* @course Veri Yapilari 1.Öğretim B Grubu
* @assignment 1.Odev
* @date 5.11.2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/
#include "Node.hpp"
#include "string.h"
Node::Node(std::string data){
    this->data=data;
    this->next=0;
    this->prev=0;
}