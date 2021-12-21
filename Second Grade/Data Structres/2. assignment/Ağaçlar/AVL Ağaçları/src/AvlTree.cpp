#include "AvlTree.hpp"
#include "NodeAvl.hpp"
#include <algorithm>
#include <iostream>
using namespace std;
AvlTree::AvlTree(){
    root=0;
}

bool AvlTree::isThere(int wanted,NodeAvl* active){
    if (active->data<wanted)
    {
        if (active->right)
        {
            return isThere(wanted,active->right);
        }
        return false;
        
        
    }
    else if (active->data>wanted)
    {
        if (active->left)
        {
            return isThere(wanted,active->left);
        }
        return false;
        
    }
    else{
        return true;
    }
    
    
}
NodeAvl* AvlTree::Add(int data,NodeAvl* active){
    if (active==0)
    {
        return new NodeAvl(data);
    }
    if (active->data<data)
    {
        active->right=Add(data,active->right);
        if (Height(active->right)-Height(active->left)>1)
        {
            if (data>active->right->data)
            {
                active=turnRight(active);
            }
            else{
                active->right=turnRight(active->right);
                active=turnLeft(active);
            }

            
        }
        
    }
    else if (active->data>data)
    {
        active->left=Add(data,active->left);
        if (Height(active->left)-Height(active->right)>1)
        {
            if (data<active->left->data)
            {
                active=turnRight(active);
            }
            else{
                active->left=turnLeft(active->left);
                active=turnRight(active);
            }
            
            
        }
        
    }
    return active;
    
    
}
int AvlTree::Height(NodeAvl* active){
    if (active)
    {
        return 1+max(Height(active->left),Height(active->right));
    }
    

}

void AvlTree::preOrder(NodeAvl* active){
    cout<<active->data<<endl;
    preOrder(active->left);
    preOrder(active->right);
}
int AvlTree::maxData(NodeAvl* active){
    if (active->right)
    {
        return maxData(active->right);
    }
    return active->data;
    
}
void AvlTree::Remove(int wanted,NodeAvl* &active){
    if (active==0)
    {
        return;
    }
    else if (active->data<wanted)
    {
        return Remove(wanted,active->right);
    }
    else if (active->data>wanted)
    {
        return Remove(wanted,active->left);
        
    }
    else{
        if (active->right && active->left)
        {
            active->data=maxData(active->left);
            Remove(active->data,active->left);
        }
        else{
            NodeAvl* nodeToDelete=active;
            if (active->left==0)
            {
                active=active->right;
            }
            else if (active->right==0)
            {
                active=active->left;
            }
            else{
                active=0;
            }
            delete nodeToDelete;
            
        }
        
    }
    
}
NodeAvl* AvlTree::turnRight(NodeAvl* grandParent){//Saga Dondurme Metodu
    NodeAvl* leftChild=grandParent->left;
    grandParent->left=leftChild->right;
    leftChild->right=grandParent;
    return leftChild;
}
NodeAvl* AvlTree::turnLeft(NodeAvl* grandParent){//Sola Dondurme Metodu
    NodeAvl* rightChild=grandParent->right;
    grandParent->right=rightChild->left;
    rightChild->left=grandParent;
    return rightChild;
}