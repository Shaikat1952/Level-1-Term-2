#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int ;
    if(!p)
    {
        cout<<"Allocate error\n";
    }
    *p=190;
    cout<<"Here is integer at p="<<*p<<endl;
    delete p;
    return 0;
}