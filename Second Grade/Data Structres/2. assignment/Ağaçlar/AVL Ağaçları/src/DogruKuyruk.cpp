#include <iostream>
#include "Node2.hpp"
#include "DogruKuyruk.hpp"
#include <iomanip>
using namespace std;

DogruKuyruk::DogruKuyruk(){
    back=0;//Son ve ilki 0 olarak atadık
    front=0;
}
DogruKuyruk::~DogruKuyruk(){//Destructor method
    while (front!=0)
    {
        Node2* nodeToDelete=front;
        front=front->next;
        delete nodeToDelete;
    }
    
    
}
int DogruKuyruk::getFront(){
    if (front!=0)//Kuyruk bos degilse
    {
        return front->data;//frontun datasını dondurur
    }
    

    
}
Node2* DogruKuyruk::prevNodeOfMax(){
    if (front==0)
    {
        return 0;
    }
    Node2* temp=front;
    Node2* prev=0;
    int max=0;
    while (temp->next!=0)
    {
        if (temp->data>max)
        {
            max=temp->data;
            prev=temp;
        }
        temp=temp->next;

        
    }

    return prev;

    
}
void DogruKuyruk::PushBack(int data){
    Node2* temp=front;
    Node2* nodeToAdd=new Node2(data);
    if (front==0)
    {
        front=nodeToAdd;
        back=front;
    }
    back->next=nodeToAdd;
    back=nodeToAdd;
    

    

}
void DogruKuyruk::PopMax(){
    Node2* prev=prevNodeOfMax();
    if (prev)
    {
        if (prev->next==back)
        {
            back=prev;
        }
        Node2* nodeToDelete=prev->next;
        prev->next=nodeToDelete->next;
        delete nodeToDelete;
        
    }
    else{
        if (front==0)
        {
            return;
        }
        Node2* nodeToDelete=front;
        front=front->next;
        delete nodeToDelete;
        
    }
    
}
int DogruKuyruk::getMax(){
    Node2* prev=prevNodeOfMax();
    if (prev)
    {
        return prev->next->data;
    }
    else{
        if (front!=0)
        {
            return front->data;
        }
        
    }
    
    
}
void DogruKuyruk::PopFront(){
    if (front==0)
    {
        return;
    }
    Node2* nodeToDelete=front;
    front=front->next;
    delete nodeToDelete;
    if (front==0)
    {
        back=0;
    }
    
    
}

