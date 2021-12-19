#include <iostream>
#include "DogruKuyruk.hpp"
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    DogruKuyruk dogruKuyruk;
    dogruKuyruk.PushBack(5);
    dogruKuyruk.PushBack(6);
    dogruKuyruk.PushBack(7);
    dogruKuyruk.PushBack(8);
    dogruKuyruk.PushBack(9);
    dogruKuyruk.PopFront();
    cout<<dogruKuyruk.getMax()<<endl;
    cout<<dogruKuyruk.getFront()<<endl;
    return 0;
}
