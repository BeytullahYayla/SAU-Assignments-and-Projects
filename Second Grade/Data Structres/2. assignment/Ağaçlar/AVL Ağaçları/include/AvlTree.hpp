#ifndef AvlTree_hpp
#define AvlTree_hpp
#include "NodeAvl.hpp"

class AvlTree
{

    
public:

    bool isThere(int wanted,NodeAvl* active);
    AvlTree();
    ~AvlTree();
    void Add(int data,NodeAvl* active);
    void Remove(int wanted,NodeAvl* &active);
    int Height(NodeAvl* active);
    void preOrder(NodeAvl* active);
    int maxData(NodeAvl* active);
private:
  NodeAvl* root;    
};




#endif 