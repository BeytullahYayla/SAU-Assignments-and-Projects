/**
* @file AvlTree.cpp
* @description AvlTree sınıfımıza ait metotları barındırır
* @course 1.Öğretim B Grubu
* @assignment 2.Ödev
* @date 26/12/2021
* @author Beytullah Yayla beytullah.yayla@ogr.sakarya.edu.tr
*/

#include "AvlTree.hpp"
#include "NodeAvl.hpp"
#include <algorithm>
#include <iostream>
#include "DogruKuyruk.hpp"
using namespace std;
AvlTree::AvlTree(){
   
    root=0;//kök düğüm 0a atanır
}

void AvlTree::Add(DogruKuyruk dogruKuyruk){

        root=Add(dogruKuyruk,root);//Aşağıda yazdığımız Add fonskiyonunu çağırır.Kullanıcıya sadece bu kısım gösterilir
}
int AvlTree::Height(){
    return Height(root);
} 

void AvlTree::postOrder(){
    postOrder(root);//Postorder metodunu çağırır
}
NodeAvl* AvlTree::Add(const DogruKuyruk &dogruKuyruk,NodeAvl* active){//Ağaca ekleme fonksiyonu
    if (active==0)//Eğer ağaç boşsa
    {
        
        return new NodeAvl(dogruKuyruk);//yeni bir nodeavl oluştur
        
    }
    if (active->dogruKuyruk.totalLength<dogruKuyruk.totalLength)//eğer aktif düğümün içindeki doğrukuyruğu sınıfının toplam uzunluğu parametreden geleninkinden küçükse
    {
       
        active->right=Add(dogruKuyruk,active->right);//Sağa ekle
        if (Height(active->right)-Height(active->left)>1)//Eğer sağ yükseklikten sol yükseklik çıkınca 1den büyükse sağ dengesizlik var
        {
            if (dogruKuyruk.totalLength>active->right->dogruKuyruk.totalLength)//Eğer parametreden gelen toplam uzunluk aktif düğümünkinden fazlaysa
            {
                active=turnLeft(active);//Sola döndür
            }
            else{//Değilse
                active->right=turnRight(active->right);//ilk önce sağa  döndür
                active=turnLeft(active);//Sonra sola döndür
            }

            
        }
        
    }
    else if (active->dogruKuyruk.totalLength>dogruKuyruk.totalLength)//Yukardaki işlemlerin tersi yapılır düğüm sola eklenir
    {
     
        active->left=Add(dogruKuyruk,active->left);
        if (Height(active->left)-Height(active->right)>1)
        {
            if (dogruKuyruk.totalLength<active->left->dogruKuyruk.totalLength)
            {
                active=turnRight(active);
            }
            else{
                active->left=turnLeft(active->left);
                active=turnRight(active);
            }
            
            
        }
        
    }
    else if (active->dogruKuyruk.totalLength==dogruKuyruk.totalLength)//Eşitse sola ekleme yapılır
    {
         active->left=Add(dogruKuyruk,active->left);
        if (Height(active->left)-Height(active->right)>1)
        {
            if (dogruKuyruk.totalLength<active->left->dogruKuyruk.totalLength)
            {
                active=turnRight(active);
            }
            else{
                active->left=turnLeft(active->left);
                active=turnRight(active);
            }
            
            
        }
    }
    
    return active;//Aktif düğüme dönülür
    
    
}
int AvlTree::Height(NodeAvl* active){
    
    if (active)
    {
        return 1+max(Height(active->left),Height(active->right));
    }
    return -1;

}
int AvlTree::maxData(NodeAvl* active){//maxDatayı getiri bize
    if (active->right)//Eğer aktif düğümümüzün sağı var ise
    {
        return maxData(active->right);//onu bize döndür(en sağdaki en büyük olandır)
    }
    return active->dogruKuyruk.totalLength;//yoksa aktif düğümün toplam uzunluğunu döndür
    
}
int AvlTree::minData(NodeAvl* active){//Max datanın tersi yapılır sol düğüm var ise
    if (active->left)
    {
        return maxData(active->left);
    }
    return active->dogruKuyruk.totalLength;
    
}
NodeAvl* AvlTree::turnRight(NodeAvl* grandParent){//Saga Dondurme Metodu
   
    NodeAvl* leftChild=grandParent->left;//sol çocuk ebeveynin solundaki düğümdür
    grandParent->left=leftChild->right;//ebeveynin solu sol çocuğun sağıdır
    leftChild->right=grandParent;//sol çocuğun sağı ebeveynine eşittir
    return leftChild;//Sol çocuk geri döndürülür
}
NodeAvl* AvlTree::turnLeft(NodeAvl* grandParent){//Sola Dondurme Metodu yukarıdaki işlemlerin tersi
    
    NodeAvl* rightChild=grandParent->right;
    grandParent->right=rightChild->left;
    rightChild->left=grandParent;
    return rightChild;
}

void AvlTree::postOrder(NodeAvl* active){//Postorder dolaşım
    
    if (active)//Eğer aktif düğüm var ise
    {
        postOrder(active->left);//ilk önce sol tarafı
        postOrder(active->right);//sonra sağ tarafa giderek
        active->dogruKuyruk.Print();//dogrukuyruk içeriğini ekrana çıkar
        cout<<endl;
        
        
    }
    
}