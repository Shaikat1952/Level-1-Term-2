#include<iostream>
using namespace std;
class base
{
    
    int x,y;
    public:
    base(int a,int b)
    {
        x=a;
        y=b;
    }
    virtual void fun()
    {
        cout<<"Printing sum of two number="<<x+y<<endl;
    }

};
class derived:public base
{
    
  
    public:
     // int z;
    derived(int a,int b):base()
    {
       // z=c;
    }
    void fun()
    {
        cout<<"Printing multiply of a,b,c="<<x*z<<endl;
    }
};
int main()
{
    base obj(10,20);
    obj.fun();
    derived obj1(10,10);
    obj1.fun();
}