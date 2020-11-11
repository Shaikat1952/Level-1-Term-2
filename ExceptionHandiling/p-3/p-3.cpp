#include<iostream>
using namespace std;
int main()
{
    try
    {
        int a;
        cout<<"Enter an integer number:";
        cin>>a;
        if(a==0)
        throw a;
        cout<<"Got it"<<a<<endl;

    }
    catch(int j)
    {
        cout<<"Try again"<<j<<endl;

    }
    return 0;
}