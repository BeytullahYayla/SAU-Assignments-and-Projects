#ifndef Point_hpp
#define Point_hpp
class Point
{
private:
    
    int CalculateDistanceToOrigin(int x,int y,int z);
    
    
public:
    int x,y,z;
    Point(int x,int y,int z);
    int distanceToOrigin;
    void Print();
    
    
   
};



#endif