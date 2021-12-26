#ifndef DogruKuyruk_hpp
#define DogruKuyruk_hpp
#include "Point.hpp"
#include "NodeDogruKuyruk.hpp"

class DogruKuyruk
{
private:
  
    
    //Node2* back;
    int array[3];
   
   
    
public:
    
    int totalLength=0;
    //Node2* front;
    NodeDogruKuyruk* back;
    NodeDogruKuyruk* front;
    int maxDistance=0;
    int totalItem=0;
    int minDistance=0;
    int currDistance=0;
    
    DogruKuyruk();
    // ~DogruKuyruk();
    void PushBack(Point point);
    void PopMax();
    int getMax();
    bool isEmpty();
    void Print();
    int calculateDistanceBetweenTwoPoint(int x,int y,int z,int* array);
    
    
    NodeDogruKuyruk* prevMaxPriorityNode();
    void RemoveMaxPriority();
    int getMaxPriorityData();
    
};



#endif