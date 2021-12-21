#ifndef AvlTree_hpp
#define AvlTree_hpp
#include "NodeAvl.hpp"

class AvlTree
{

    
public:

    bool isThere(int wanted,NodeAvl* active);
    AvlTree();
    ~AvlTree();
    NodeAvl* Add(int data,NodeAvl* active);
    void Remove(int wanted,NodeAvl* &active);
    int Height(NodeAvl* active);
    void preOrder(NodeAvl* active);
    int maxData(NodeAvl* active);
    NodeAvl* turnRight(NodeAvl* grandParent); 
    NodeAvl* turnLeft(NodeAvl* grandParent);

private:
  NodeAvl* root;    
};




#endif 