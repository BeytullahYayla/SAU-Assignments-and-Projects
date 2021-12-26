
/**
* @file Main.cpp
* @description Genel olarak dosya okuma işlemlerini,her satır için doğru kuyruğu oluşumunu,kuyrukların avl ağacına verilmesini ve avl ağacının postorder dolaşılması işlemlerini içerir
* @course 1.Öğretim B Grubu
* @assignment 2.Ödev
* @date 26/12/2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "AvlTree.hpp"
#include <fstream>
#include "DogruKuyruk.hpp"
#include <string>
#include <algorithm>
#include <cmath>
#include "Point.hpp"
#include "NodeAvl.hpp"
using namespace std;


    
int main(){
    string line;//okuduğumuz satırı tutar 
    int count=0;
    int dizi[3];//point nesnesine verilecek integer datalarımız
    AvlTree* avlTree;//avl ağacı
    avlTree=new AvlTree();//heapte oluşturduk
    string temp;

    
    DogruKuyruk* dogruKuyruk;//Dogru kuyruk poineteri
    
    ifstream MyReadFile("Noktalar.txt");//Veri.txt dosyasini okumak icin reader
    
    
    while (!MyReadFile.eof())//Dosyanin sonuna gelene kadar 
    {
       
        getline(MyReadFile,line);//Satir satir oku

        if (MyReadFile.good())
        {

            dogruKuyruk=new DogruKuyruk();//heapte dogruKuyrugu nesnesi olustur
            for (int i = 0; i < line.size(); i++)
            {
                if (line[i]!=' ')//Eğer i. karakter boşluk değilse 
                {
                    temp+=line[i];//stringe ekle
                }
                else 
                {
                    if (count==0)
                    {
                     dizi[0]=stoi(temp);//y koordinatı
                     temp="";//string sıfırlandı
                     count++;   //sayaç arttı
                    }
                    else if (count==1)
                    {
                        dizi[1]=stoi(temp);//x koordinatı
                        temp="";//string sıfırlanır
                        count++;//sayaç bir artar
                    }
                    else
                    {
                        dizi[2]=stoi(temp);
                        temp="";//string 0lanır
                        count=0;//sayaç sıfırlanır
                        Point point(dizi[0],dizi[1],dizi[2]);//point nesnesi oluşur
                        dogruKuyruk->PushBack(point);//Dogru kuyruğuna eklenir
                    }
                    
                    
                }
                
                
            }
            
          
            
          
           
            
            
            avlTree->Add(*dogruKuyruk);//dogrukuyruğunu ağaca ekle
            delete dogruKuyruk;//Dogrukuyruğu nesnesinin bellekte kapladığı alanı serbest bırak
        
            
            
            
    

        }
         
        
         
    }
    MyReadFile.close();//Okuma dosyasını kapat
    avlTree->postOrder();//avlAğacını postorder gezerek orjine uzaklıkları çıkar    
    delete avlTree;//avl ağacının bellekte kapladığı alanı serbest bırak
  
    
    
   
    return 0;
}