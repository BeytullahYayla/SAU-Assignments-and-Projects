#ifndef AvlTree_hpp
#define AvlTree_hpp
#include "NodeAvl.hpp"
#include "DogruKuyruk.hpp"
class AvlTree
{

    
public:
    AvlTree();
    void Add(DogruKuyruk dogruKuyruk);
    int Height();
    void postOrder();

private:
    NodeAvl* root;
    int Height(NodeAvl* active);
    int maxData(NodeAvl* active);
    int minData(NodeAvl* active);
    NodeAvl* turnRight(NodeAvl* grandParent); 
    NodeAvl* turnLeft(NodeAvl* grandParent);
    NodeAvl* Add(const DogruKuyruk &dogruKuyruk,NodeAvl* active);
    void postOrder(NodeAvl* active);
};




#endif 