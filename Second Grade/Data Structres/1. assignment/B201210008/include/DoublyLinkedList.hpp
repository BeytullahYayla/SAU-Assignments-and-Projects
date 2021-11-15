#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp
#include "Node.hpp"

class DoublyLinkedList
{
private:
    Node* firstAdress=0;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void PushBack(string data);
    void Print();
    int size();
    Node* GetNodeByIndex(int index);
    void Insert(int index,string data);
    bool isEmpty();
    void PopIndex(int index);
    void PopBack();
    Node* GetPenultimateNode();


};
#endif 