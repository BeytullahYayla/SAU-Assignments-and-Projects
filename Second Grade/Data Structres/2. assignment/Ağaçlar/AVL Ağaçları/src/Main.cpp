#include <iostream>
#include "AvlTree.hpp"
#include <fstream>
#include "DogruKuyruk.hpp"
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{

    DogruKuyruk dogruKuyruk;
    dogruKuyruk.PushBack(1,3,5);
    
   
    dogruKuyruk.PushBack(4,6,2);
    dogruKuyruk.PushBack(6,0,0);
    dogruKuyruk.PushBack(8,9,10);
    cout<<endl;
   
    
    dogruKuyruk.Print();
    cout<<endl;
    cout<<"Max distance:"<<dogruKuyruk.maxDistance;
  

   
   
   
    return 0;
}

