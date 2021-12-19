#ifndef DogruKuyruk_hpp
#define DogruKuyruk_hpp
#include "Node2.hpp"
class DogruKuyruk
{
private:
    Node2* front;
    Node2* back;
    
public:
    DogruKuyruk();
    ~DogruKuyruk();
    void PushBack(int data);
    void PopMax();
    int getFront();
    int getMax();
    void PopFront();
    Node2* prevNodeOfMax();

};



#endif