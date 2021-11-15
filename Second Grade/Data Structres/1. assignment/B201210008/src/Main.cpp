/**
* @file Main.cpp
* @description Main fonksiyonumuzun oldugu ve dosya okuma islemlerinin yapilacagi kaynak kodu.Dosyadan okudugumuz verileri tutacak verileri barindirir.DoublyLinkedList nesnesini icinde tutar.Bu sayede dosyadan gelen komutlara gore insert veya PopIndex metodlarini cagirabiliriz.
* @course Veri Yapilari 1.Öğretim B Grubu
* @assignment 1.Odev
* @date 5.11.2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "Node.hpp"
#include <string>
#include "DoublyLinkedList.hpp"
#include <fstream>
#include <sstream>

using namespace std;
int main(int argc, const char** argv) {
   
    string line;
    string reduced_line;
    string index;
    string operation;
    string data;
    string delimiter="#";
    string delimiter2="(";
    string delimiter3=")";
    
    DoublyLinkedList doublyLinkedList;//Cift yonlu bagli liste nesnesi olusturulur
    
    
    ifstream MyReadFile("Veri.txt");//Veri.txt dosyasini okumak icin reader
    
    
    while (!MyReadFile.eof())//Dosyanin sonuna gelene kadar 
    {
        
        getline(MyReadFile,line);//Satir satir oku
        if (MyReadFile.good())
        {
            
          
            operation=line.substr(0,line.find(delimiter2));//0. indexten okudugumuz satirdaki "(" karaktere kadar okur.Bu deger bizim yapilacak islemimizdi
            
     

            if (operation=="E")//Eger islem E ise
            {
                data=line.substr(line.find(delimiter)+1,line.find(delimiter3));//linedan eklenecek veriyi bulmaya calisiriz
                data=data.substr(0,data.size()-1);
                reduced_line=line.substr(2,line.find(delimiter));
                index=line.substr(2,reduced_line.find(delimiter));//Substr metoduyla indexi buluruz
                doublyLinkedList.Insert(stoi(index),data);//Son olarak datayi belirtilen indexe ekleriz
               
            }
            else if (operation=="S")//Sil islemi
            {

                  
                  index=line.substr(2,line.find(delimiter3));
                  index=index.substr(0,index.size()-1);
                  doublyLinkedList.PopIndex(stoi(index));//listeden belirtilen index cikartilir
            }
            
        

        }
        
    }
    MyReadFile.close();//isimiz bittigi zaman okuma dosyasi kapatilir
    doublyLinkedList.Print();//liste yazdirilir
    return 0;
}



