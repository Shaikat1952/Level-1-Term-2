#include<iostream>
using namespace std;
int main()
{
    int a,d,quotion=0;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter number to dividing:";
    cin>>d;
    int r; 
    if(a<0)
    r=-(a);
    else
    r=a;
    
    while(r>=d)
    {
        r=r-d;
        quotion=quotion+1;
    }
    if(a<0 && r>=0)
    {
        r=d-r;
        quotion=-(quotion+1);
    }
    cout<<"Quotion="<<quotion<<endl;
        cout<<"Reminder="<<r<<endl;

}