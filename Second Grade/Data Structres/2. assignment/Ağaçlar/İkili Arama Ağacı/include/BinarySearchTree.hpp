#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp
#include "Node.hpp"

class BinarySearchTree
{
public:
    bool isThere(int data,Node* active);
    void add(int data,Node* active);
    void remove(int data,Node* &active);
    BinarySearchTree(/* args */);
    ~BinarySearchTree();
    int Height(Node* active);
    void preOrder(Node* active);
    int Max(Node* active);

private:
    Node* root;

};




#endif 