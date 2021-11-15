#ifndef Node_hpp
#define Node_hpp
#include "string.h"
#include <iostream>
using namespace std;

 class Node{

 public:
    Node(string data);
    string data;  
    Node* prev;
    Node* next;


 };



#endif