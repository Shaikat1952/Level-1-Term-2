#include<iostream>
using namespace std;

int main()
{
int a,d,q=0;
cout<<"Enter number:"<<endl;
cin>>a;
cout<<"Enter number to dividing:"<<endl;
cin>>d;
int r;
if(a<0)
 r=-(a);
else
r=a;
while(r>=d)
{
    r=r-d;
    q=q+1;
    
}
if(a<0 && r>=0)
    {
        r=d-r;
        q=-(q+1);
    }
    cout<<"Quotient="<<q<<endl;
    cout<<"Reminder="<<r;
    return 0;
}