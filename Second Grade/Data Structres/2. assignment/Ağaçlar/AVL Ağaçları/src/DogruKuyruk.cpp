#include <iostream>
#include "Node2.hpp"
#include "DogruKuyruk.hpp"
#include <iomanip>
#include <cmath>
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
bool DogruKuyruk::isEmpty(){
    if (front==0)
    {
        return true;
    }
    else{
        return false;
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
// void DogruKuyruk::PushBack(int x){
//     Node2* temp=front;
//     Node2* nodeToAdd=new Node2(data);
//     if (front==0)
//     {
//         front=nodeToAdd;
//         back=front;
//     }
//     back->next=nodeToAdd;
//     back=nodeToAdd;
    

    

// }

void DogruKuyruk::PushBack(int x,int y,int z){
    Node2* nodeToAddX=new Node2(x);
    Node2* nodeToAddY=new Node2(y);
    Node2* nodeToAddZ=new Node2(z);
    if (front==0)
    {
        front=nodeToAddX;
        nodeToAddX->next=nodeToAddY;
        nodeToAddY->next=nodeToAddZ;
        back=nodeToAddZ;
        
        maxDistance=distanceToOrigin(x,y,z);
        totalItem=totalItem+3;
    }
    
    else if (distanceToOrigin(x,y,z)>maxDistance)
    {
        back->next=nodeToAddX;
        nodeToAddX->next=nodeToAddY;
        nodeToAddY->next=nodeToAddZ;
        back=nodeToAddZ;
        maxDistance=distanceToOrigin(x,y,z);
        totalItem=totalItem+3;
        
    }
    else if (distanceToOrigin(x,y,z)<maxDistance)
    {
        Node2* iter=front;
        int compareX,compareY,compareZ;
        
        int counter=1;
        // for (int i = 1; i <4; i++)
        // {
        //     if (i%3==1)
        //     {
        //         compareX=iter->data;
            
        //     }
        //     else if (i%3==2)
        //     {
        //         compareY=iter->data;
        //     }
        //     else if (i%3==0)
        //     {
        //         compareZ=iter->data;
        //         if (distanceToOrigin(compareX,compareY,compareZ)>distanceToOrigin(x,y,z))
        //         {
        //             // iter->next=nodeToAddX;
        //             // nodeToAddX->next=nodeToAddY;
        //             // nodeToAddY->next=nodeToAddZ;
        //             // nodeToAddZ->next=iter->next;
        //             break;
        //         }
        //         i=1;
                
                
        //     }
            
            
        //     iter=iter->next;
        // }
        // do
        // {
        //     if (counter%3==1)
        //     {
        //         compareX=iter->data;
        //         cout<<iter->data<<" ";
                
        //     }
        //     else if(counter%3==2)
        //     {
        //         compareY=iter->data;
        //         cout<<iter->data<<" ";
               
        //     }
        //     else if (counter%3==0)
        //     {
        //         compareZ=iter->data;
        //         cout<<iter->data<<" ";
                
                
               
        //     }
           
            
        //      counter++;
        //      iter=iter->next;
             
            
        // } while (counter!=3);
        while (iter!=0)
        {
             if (counter%3==1)
            {
                compareX=iter->data;
                cout<<iter->data<<" ";
                
            }
            else if(counter%3==2)
            {
                compareY=iter->data;
                cout<<iter->data<<" ";
               
            }
            else if (counter%3==0)
            {
                compareZ=iter->data;
                cout<<iter->data<<" ";
                if (distanceToOrigin(compareX,compareY,compareZ)>distanceToOrigin(x,y,z))
                {
                    break;
                }
                
                
               
            }
           
            
             counter++;
             iter=iter->next;
             
        }
        Node2* x=iter->next;
        iter->next=nodeToAddX;
        nodeToAddX->next=nodeToAddY;
        nodeToAddY->next=nodeToAddZ;
        nodeToAddZ->next=x;
        
                   
        
        
    }
    
    

}
int DogruKuyruk::distanceToOrigin(int x,int y,int z){
    return int(sqrt((x*x)+(y*y)+(z*z)));
    
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
void DogruKuyruk::Print(){
    Node2* iter=front;
    while (iter!=0)
    {
        cout<<iter->data<<" ";
        iter=iter->next;
    }
    
}

