#include<iostream>
using namespace std;
class base
{
    
    public:
    virtual void fun()=0;
    base(){}
};
class derived:public base
{
    int a,b;
   public:
   derived(int x,int y):base()
   {
       a=b;
       b=y;
   }
   void fun()
   {
       cout<<"Multiply of a and b="<<a+b<<endl;
   }
};
int main()
{
    derived obj(13,13);
    obj.fun();
    return 0;
}