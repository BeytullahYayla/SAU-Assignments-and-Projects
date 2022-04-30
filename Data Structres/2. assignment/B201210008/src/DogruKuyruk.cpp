/**
* @file DogruKuyruk.cpp
* @description Dogrukuyruk sınıfımıza ait öncelikli kuyruk metotları barındırır.
* @course 1.Öğretim B Grubu
* @assignment 2.Ödev
* @date 26/12/2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "DogruKuyruk.hpp"
#include <iomanip>
#include <cmath>
#include "Point.hpp"
#include "NodeDogruKuyruk.hpp"
using namespace std;

DogruKuyruk::DogruKuyruk(){
    back=0;//Son 0 olarak atanır
    front=0;//ilk 0 olarak atanır
   

}

bool DogruKuyruk::isEmpty(){//Dogru Kuyruk Boş Mu?
    if (front==0)//Eğer ön taraf 0sa
    {
        return true;//boştur
    }
    else{//değilse
        return false;//boş değildir
    }
    
}



void DogruKuyruk::PushBack(Point point){//Ekleme fonksiyonu,parametre olarak nokta alır

    NodeDogruKuyruk* nodeToAdd=new NodeDogruKuyruk(point.x,point.y,point.z);//Eklenecek nodu oluşturur
    if (isEmpty())//Eğer kuyruk boşsa
    {
        
        array[0]=point.x;//dizi[0] x
        array[1]=point.y;//dizi[1] y
        array[2]=point.z;//dizi[2] z olur
        front=nodeToAdd;//ön taraf eklenen node olur
        back=front;//son taraf da tek node olduğu için ön tarafa eşit olur
        
       
        
    }
    else if (!isEmpty())//Boş değilse kuyruk
    {
        
        back->next=nodeToAdd;//yeni oluşan nodeu arkadan sonraya atar
    
        back=nodeToAdd;//arka eklenen nodu gösterir
        totalLength+=calculateDistanceBetweenTwoPoint(point.x,point.y,point.z,array);//daha önceden kopyalayıp arraye attığımız verilerle şimdiki nodeden gelen verilerle iki nokta arası uzaklık bulunur ve toplam uzaklıkla toplanır
        //veriler diğer eklemede karşılaştırılmak üzere arrayin içine kopyalanır
        array[0]=point.x;
        array[1]=point.y;
        array[2]=point.z;
        
        
        
    }
    }

int DogruKuyruk::calculateDistanceBetweenTwoPoint(int x,int y, int z,int* array){//iki nokta arası uzaklığı hesaplar
    int distance=int(sqrt(((x-array[0])*(x-array[0]))+((y-array[1])*(y-array[1]))+((z-array[2])*(z-array[2]))));
    return distance;
}

void DogruKuyruk::Print(){//Öncelikli yazdırma fonksiyonu
   while (front!=0)//Kuyrukta node kalmayıncaya kadar
   {
       cout<<getMaxPriorityData()<<" ";//en yüksek öncelikli veriyi ekrana çıkar
       RemoveMaxPriority();//En yüksek öncelikli veriyi kuyruktan çıkar
   }
   
   
   
   

}
NodeDogruKuyruk* DogruKuyruk::prevMaxPriorityNode(){//En yüksek öncelikli düğümden önceki düğüm
    NodeDogruKuyruk* iter=front;//kuyruğu gezmek için iter
    NodeDogruKuyruk* prev=0;//Önceki düğüm
    int minData=iter->distanceToOrigin;//en küçük orjine uzaklığı alır
    if (isEmpty())//Kuyruk boşsa
    {
        return 0;//0 döndür
    }
    
    while (iter->next!=0)//iterin sonrası 0 olana kadar
    {
        if (iter->next->distanceToOrigin<minData)//eğer iterin orjineuzaklığı minimum uzaklıktan küçükse
        {
            minData=iter->next->distanceToOrigin;//minimum veri iterin orjine uzaklığı olur
            prev=iter;//previmiz itere eşitlenir
        }
        iter=iter->next;//iter devam eder
        
    }
    return prev;//prev geri döndürülür
}
void DogruKuyruk::RemoveMaxPriority(){//En yüksek öncelikli düğümü silme
    NodeDogruKuyruk* prev=prevMaxPriorityNode();//en yüksek öncelikli düğümden öncekini getir  ve preve eşitle
    if (prev)//eğer önceki düğüm var ise
    {
        if (prev->next==back)//önceki düğümün sonrası arkaya eşit olur
        {
            back=prev;//arka da önceki düğümü gösterir
        }
        NodeDogruKuyruk* nodeToDelete=prev->next;//Silinecek düğüm oluşturulur
        prev->next=nodeToDelete->next;//önceki düğümün nexti silinecek olanın nextine eşitlenir ve
       
        delete nodeToDelete;//silinecek düğüm silinir
        
    }
    else//eğer önceki düğüm yoksa
    {
         if (isEmpty())//Kuyruk boş olabilir
        {
        return;
        }
        NodeDogruKuyruk* nodeToDelete=front;//silinecek node ilk nodedur
        front=front->next;//ön sonrakini gösterir
        delete nodeToDelete;//silinecek node silindi
        
    }
    
   

    
    
}
int DogruKuyruk::getMaxPriorityData(){//maksimum öncelikli veriyi getir
    NodeDogruKuyruk* prev=prevMaxPriorityNode();//max önceliklinin bir önceki nodeu
    if (prev)//eğer önceki varsa
    {
        return prev->next->distanceToOrigin;//öncekinin sonrakinin orjine uzaklığını getir
    }
    if (front!=0)//Eğer önceki yoksa ama kuyruk boş değilse
    {
        return front->distanceToOrigin;//önün orjine uzaklığını getir
    }
    
    
}