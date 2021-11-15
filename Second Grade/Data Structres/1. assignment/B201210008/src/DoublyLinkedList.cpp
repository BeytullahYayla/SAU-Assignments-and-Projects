/**
* @file DoublyLinkedList.cpp
* @description Olusturacagimiz cift yonlu bagli liste sinifina ait metotları barındıran kaynak kodu.Metotlar rapor kısmında detaylı bir şekilde açıklanacaktır
* @course Veri Yapilari 1.Öğretim B Grubu
* @assignment 1.Odev
* @date 5.11.2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/


#include "Node.hpp"
#include "DoublyLinkedList.hpp"
#include <iostream>
using namespace std;
DoublyLinkedList::DoublyLinkedList(){
    //Constructor
    firstAdress=0;//Ilk adresi 0a atadık
    
}
DoublyLinkedList::~DoublyLinkedList(){
    //Destructor
    Node* iter=firstAdress;
    while (iter->next!=0)
    {
      Node* nodeToDelete=iter;//Silinecek node
      iter=iter->next;//Her adımda nodelarda ilerlenir
      delete nodeToDelete;  //Ve o node silinir
    };
   
    
}
bool DoublyLinkedList::isEmpty(){
    return firstAdress==0;//Eger ilk adres 0a esitse true dondur(yani liste bostur)
}
void DoublyLinkedList::PushBack(string data){
    Node* nodeToAdd=new Node(data);//Paramtereden gelen datayla yeni bir node olusturur.
    
    if (isEmpty())//Eger liste bos ise
    {
        firstAdress=nodeToAdd;//ilk adres ekledigimiz node olsun
        return;
    }
    
    Node* iter=firstAdress;//Listeyi gezmek icin bir iter olusturuyoruz
    while (iter->next!=0)//Son dugumden sonraki 0a esit oluncaya kadar
    {
      iter=iter->next;//Listeyi bastan gezeriz
    };
    iter->next=nodeToAdd;//Eklenecek node'u sona ekleriz
    nodeToAdd->prev=iter;//Cift yonlu bagli liste oldugu icin eklenen dugumden oncesi de iteri gostermeli
    

}
void DoublyLinkedList::Print(){
    Node* iter=firstAdress;//iteratorumuz
    while (iter!=0)//iterin kendisi 0 olana kadar yani son düğüm dahil
    {
        
        if (iter->next==0)
        {
            cout<<iter->data;
        }
        else{
            cout<<iter->data<<" <--> ";//her elemanın datasini ekrana yaz
        }
        
       
        iter=iter->next;//Dugumu bir ilerlet
        
        
    }
    
}
int DoublyLinkedList::size(){
    int sayac=0;
    Node* iter=firstAdress;
    while (iter!=0)
    {
        sayac++;//Dugumde her ilerledigimizde sayaci bir artir
        iter=iter->next;
    }
    return sayac;//sayacin degerini dondur

    
}
Node* DoublyLinkedList::GetNodeByIndex(int index){//Indexe gore node getirir
    
        if(index<0||index>=size())//Eger index gecersizse bir sey yapma
            return 0;
        
        Node* iter=firstAdress;
        
        for(int i=0;i<index;i++)//indexe kadar for dongusuyle git
        {
            iter=iter->next;
        }
        return iter;//ve o node'u dondur
    

    
}
void DoublyLinkedList::Insert(int index,string data){//Belirli bir indexe belli bir datayi eklemek icin kullanilir
 Node* iter=firstAdress;
 int sayac=size();//Anlik listenin buyuklugu kadar bir sayac olusturduk

if (index>=size() || index<0)//Eger girilen index size'dan buyukse veya 0dan kucukse 
{
    PushBack(data);//Node'u sona ekle
    
}
else{
  while (iter->next!=0)//Listeyi gez
 {
     iter=iter->next;
 }
PushBack(iter->data);


 iter=iter->next;//iter sona gider
 while (iter!=0)//iter basa gelene kadar
 {
     if (index==sayac)//index sayaca esit oldugu zaman 
     {
         iter->data=data;//veri kopyalanir
         break;//dongu kirilir
     }
     iter->data=iter->prev->data;//her node'un datasi o nodeden onceki data olur
     iter=iter->prev;//geriye dogru ilerleriz
      sayac--;//sayac bir azaltilir
     
 }
}

 
 
 
    
}
Node* DoublyLinkedList::GetPenultimateNode(){//Sondan bir onceki node'u bulmamıza yarar
        if(isEmpty())//Eger liste bossa bir sey dondurmez
            return 0;
        if(firstAdress->next==0)//Eger tek eleman varsa
            return firstAdress;//Bize o elemanı dondurur
        
        Node* iter= firstAdress;
        while(iter->next->next!=0)//Sondan bir onceki node'a gelinceye kadar
            iter=iter->next;//Liste sonuna dogru ilerlenir

        return iter;//Sondan bir onceki node'u dondurur
}
void DoublyLinkedList::PopBack(){
    
    Node* nodeToDelete=GetPenultimateNode();//Sondan bir onceki node
    if (isEmpty())//Eger liste bos ise
    {
        cout<<"Liste bos,eleman cikarma islemi yapilamaz!!"<<endl;
        return;//Bir sey dondurme
    }
    if (firstAdress->next==0)//Eger liste tek elemanlıysa
    {
        delete firstAdress;//o elemani sil
        firstAdress=0;//adresi kaybetmemek icin 0a esitlenir
        return;
    }
    delete nodeToDelete->next;//sondan bir onceki nodedan sonrasi silinir
    nodeToDelete->next=0;
    


    
    
    
}
void DoublyLinkedList::PopIndex(int index){//Silmek istedigimiz indexteki elemani siler

 if (isEmpty())//Eger liste bossa
 {
     cout<<"Liste Bos Silme Islemi Yapilamaz"<<endl;
     return ;//Bir sey dondurme
 }
 if (firstAdress->next==0)//Eger tek elemanli ise
 {
     delete firstAdress;//O elemani sil
     firstAdress=0;//Adresi kaybetmemek icin 0a esitle
     return;
 }
 
 
 if (index>=size() || index<0)//Eger girilen index liste boyutundan buyukse 
 {
     PopBack();
 }
 else{
    Node* nodeToDelete=GetNodeByIndex(index);//Istedigimiz node'u getir
    while (nodeToDelete->next!=0)//Getirilen nodedan sona dogru gidilir
    {
        nodeToDelete->data=nodeToDelete->next->data;//Silinecek node'un datasi bir sonrakininki olarak kopyalanir
        nodeToDelete=nodeToDelete->next;//ileri dogru gidilir
    }
    PopBack();//Sondaki node silinir
 


 }
 

 


}
