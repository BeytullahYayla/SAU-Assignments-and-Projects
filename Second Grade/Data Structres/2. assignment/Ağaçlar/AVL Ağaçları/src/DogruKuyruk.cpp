#include <iostream>
#include "Node2.hpp"
#include "DogruKuyruk.hpp"
#include <iomanip>
#include <cmath>
#include "Point.hpp"

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
Point DogruKuyruk::getFront(){
    Node2* iter=front;
    if (front!=0)
    {
        
        return Point(iter->data,iter->next->data,iter->next->next->data);
        
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



void DogruKuyruk::PushBack(Point point){
    Node2* iter=front;
    Node2* nodeToAddX=new Node2(point.x);
    Node2* nodeToAddY=new Node2(point.y);
    Node2* nodeToAddZ=new Node2(point.z);
    
    if (front==0)
    {
        front=nodeToAddX;
        nodeToAddX->next=nodeToAddY;
        nodeToAddY->next=nodeToAddZ;
        back=nodeToAddZ;
    }
    else if (front!=0)
    {
        back->next=nodeToAddX;
        nodeToAddX->next=nodeToAddY;
        nodeToAddY->next=nodeToAddZ;
        back=nodeToAddZ;
        
    }
    

    
    
    
    // if (front==0)
    // {
    //     front=nodeToAddX;
    //     nodeToAddX->next=nodeToAddY;
    //     nodeToAddY->next=nodeToAddZ;
    //     back=nodeToAddZ;
    //     totalLength+=point.distanceToOrigin;
    //     maxDistance=point.distanceToOrigin;
        
    //     totalItem+=3;
    // }
    // if (point.distanceToOrigin>maxDistance)
    // {
    //     while (iter!=back)
    //     {
    //         iter=iter->next;
    //     }
    //     iter->next=nodeToAddX;
    //     nodeToAddX->next=nodeToAddY;
    //     nodeToAddY->next=nodeToAddZ;
    //     back=nodeToAddZ;
    //     totalLength+=point.distanceToOrigin;
    //     totalItem+=3;
    //     maxDistance=point.distanceToOrigin;
        
    // }
    // else if (point.distanceToOrigin<maxDistance)
    // {
    //     for (int i = 0; i < totalItem/3; i++)
    //     {
    //         if (i!=0)
    //         {
                 
    //             if (calculateCurrentDistance(iter->next->data,iter->next->next->data,iter->next->next->next->data)>point.distanceToOrigin)
    //             {
    //             Node2* copy1=iter->next;
    //             iter->next=nodeToAddX;
    //             nodeToAddX->next=nodeToAddY;
    //             nodeToAddY->next=nodeToAddZ;
    //             nodeToAddZ->next=copy1;
    //             break;
    //             }
    //         }
           
    //         if (i==0)
    //         {
    //             if (calculateCurrentDistance(iter->data,iter->next->data,iter->next->next->data)>point.distanceToOrigin)
    //              {
    //            Node2* copy1=iter->next;
    //            iter->next=nodeToAddX;
    //            nodeToAddX->next=nodeToAddY;
    //            nodeToAddY->next=nodeToAddZ;
    //            nodeToAddZ->next=copy1;
    //            break;
    //              }
    //         }
            
    //         iter=iter->next->next;
    //     }
        
        
         
         
        

    }
    
    
             
    
    
    


int DogruKuyruk::calculateCurrentDistance(int x,int y,int z){
     return int(sqrt((x*x)+(y*y)+(z*z)));
}

void DogruKuyruk::PopFront(){
    if (front==0)
    {
        return;
    }
    Node2* nodeToDelete=front;
    Node2* nodeToDelete2=front->next;
    Node2* nodeToDelete3=front->next->next;
    front=front->next->next->next;
    delete nodeToDelete;
    delete nodeToDelete2;
    delete nodeToDelete3;
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

