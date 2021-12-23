#include <iostream>
#include "AvlTree.hpp"
#include <fstream>
#include "DogruKuyruk.hpp"
#include <string>
#include <algorithm>
#include <cmath>
#include "Point.hpp"
using namespace std;

int main(){

 string line;
    string reduced_line;
    string index;
    string operation;
    string data;
    string delimiter=" ";
    int coordinates[3];
    int temp=0;
    int count=0;
    int dizi[3];
    
 
    
    ifstream MyReadFile("Noktalar.txt");//Veri.txt dosyasini okumak icin reader
    
    
    while (!MyReadFile.eof())//Dosyanin sonuna gelene kadar 
    {
        
        getline(MyReadFile,line);//Satir satir oku

        if (MyReadFile.good())
        {
            DogruKuyruk dogruKuyruk;
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i]==' ')
                 {
                count+=1;
                }
            
            }
            
        
            for (int i = 0; i < count+1; i++)
            {
                if (i%3==0)
                {
                    reduced_line=line.substr(temp,line.find(" ",temp)-temp);
                    dizi[0]=stoi(reduced_line);
                   
                    temp=line.find(" ",temp)+1;
                }
                if (i%3==1)
                {
                    reduced_line=line.substr(temp,line.find(" ",temp)-temp);
                    dizi[1]=stoi(reduced_line);
                    
                    temp=line.find(" ",temp)+1;
                }
                if (i%3==2)
                {
                    reduced_line=line.substr(temp,line.find(" ",temp)-temp);
                    dizi[2]=stoi(reduced_line);
                    
                    temp=line.find(" ",temp)+1;
                    Point point(dizi[0],dizi[1],dizi[2]);
                    dogruKuyruk.PushBack(point);
                }

                
                
                
                

                
                // reduced_line=line.substr(temp,line.find(" ",temp)-temp);
                
                // cout<<reduced_line<<" ";
                // temp=line.find(" ",temp)+1;
                
            }
            dogruKuyruk.Print();
        
            
            
            
    

        }
        
        
    }
    
    
   
    return 0;
}