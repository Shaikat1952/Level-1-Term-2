#include<iostream>
using namespace std;

void set_x()
{

int x,y;
cout<<"Enter height and weidth:";
cin>>x>>y;
int z=x*y;
cout<<"Multiply of x and y is="<<z<<endl;
}
int main()
{
    set_x();
    return 0;
}
