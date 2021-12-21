#ifndef DogruKuyruk_hpp
#define DogruKuyruk_hpp
#include "Node2.hpp"
class DogruKuyruk
{
private:
    Node2* front;
    Node2* back;
    
    int totalItem=0;
    
public:
int maxDistance=0;
int lessDistance=0;
    DogruKuyruk();
    ~DogruKuyruk();
    void PushBack(int x,int y,int z);
    void PopMax();
    int getFront();
    int getMax();
    void PopFront();
    bool isEmpty();
    Node2* prevNodeOfMax();
    int distanceToOrigin(int x,int y,int z);
    void Print();
};



#endif