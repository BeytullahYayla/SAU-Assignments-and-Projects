#ifndef NodeAvl_hpp
#define NodeAvl_hpp
#include "DogruKuyruk.hpp"

class NodeAvl
{
    

public:
    
    NodeAvl(const DogruKuyruk& dogruKuyruk);
    NodeAvl* left;
    NodeAvl* right;
    DogruKuyruk dogruKuyruk;
};



#endif 