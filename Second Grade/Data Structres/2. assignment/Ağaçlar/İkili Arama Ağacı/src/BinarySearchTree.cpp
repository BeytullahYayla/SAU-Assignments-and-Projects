#include "BinarySearchTree.hpp"
#include "Node.hpp"
#include <iostream>
using namespace std;

BinarySearchTree::BinarySearchTree(){
    root=0;
}
bool BinarySearchTree::isThere(int data,Node* active){
    if (active->data<data)
    {
        if (active->right)
        {
            return isThere(data,active->right);
        }
        return false;
        
    }
    else if (active->data>data)
    {
        if (active->left)
        {
            return isThere(data,active->left);
        }
        
    }
    else
    {
        return true;
    }
    
    

}

void BinarySearchTree::add(int data,Node* active){
    if (active->data>data)
    {
        if (active->left)
        {
            return add(data,active->left);
        }
        else
        {
            active->left=new Node(data);
        }
        
        
    }
    else if (active->data<data)
    {
        if (active->right)
        {
            return add(data,active->right);
        }
        else
        {
            active->right=new Node(data);
        }
        
        
    }
    else
    {
        return;
    }
    
    

}
int BinarySearchTree::Height(Node* active){
    if (active)
    {
        return 1+max(Height(active->left),Height(active->right));
    }
    return -1;
    
}
void BinarySearchTree::preOrder(Node* active){
    if (active)
    {
        cout<<active->data<<endl;
        preOrder(active->left);
        preOrder(active->right);
    }
    
}
void BinarySearchTree::remove(int data,Node* &active){
    if (active==0)
    {
        return;
    }
    else if (active->data<data)
    {
        if (active->right)
        {
            return remove(active->data,active->right);
        }
        
    }
    else if (active->data>data)
    {
        if (active->left)
        {
            return remove(active->data,active->left);
        }
        
    }
    else
    {
        if (active->right && active->left)
        {
            active->data=Max(active->left);
            remove(active->data,active->left);
        }
        else
        {
            Node* nodeToDelete=active;
            if (active->left==0)
            {
                active=active->right;
            }
            else if(active->right==0)
            {
                active=active->left;
            }
            
            
        }
        
    }
    
    
    
}
int BinarySearchTree::Max(Node* active){
    if (active->right)
    {
        return Max(active->right);
    }
    return active->data;
    
}
