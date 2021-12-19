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
void AvlTree::Add(int data,NodeAvl* active){
    NodeAvl* nodeToAdd=new NodeAvl(data);
    if (active->data<data)
    {
        if (active->right)
        {
            return Add(data,active->right);
        }
        active->right=nodeToAdd;

        
    }
    else if(active->data>data){
        if (active->left)
        {
            return Add(data,active->left);
        }
    active->left=nodeToAdd;
        
    }
    else{
        return;
    }
    
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