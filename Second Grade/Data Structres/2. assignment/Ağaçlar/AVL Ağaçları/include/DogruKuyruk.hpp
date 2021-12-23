#ifndef DogruKuyruk_hpp
#define DogruKuyruk_hpp
#include "Node2.hpp"
#include "Point.hpp"
class DogruKuyruk
{
private:
    Node2* front;
    Node2* back;
    int totalLength=0;
    int array[3];
public:
    int maxDistance=0;
    int totalItem=0;
    int minDistance=0;
    int currDistance=0;
    int calculateCurrentDistance(int x,int y ,int z);
    DogruKuyruk();
    ~DogruKuyruk();
    void PushBack(Point point);
    void PopMax();
    Point getFront();
    int getMax();
    void PopFront();
    bool isEmpty();
    
    void Print();
};



#endif