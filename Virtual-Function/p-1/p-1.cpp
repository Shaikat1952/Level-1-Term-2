#include<iostream>
using namespace std;
class base
{
    protected:
    int x;
    public:
    base(int a)
    {
        x=a;
    }
    virtual void fun()
    {
        cout<<"X="<<x<<endl;
    }
};
class derived:public base
{
    int y;
    public:
    derived(int a,int b):base(x)
    {
        y=b;
    }
    void fun()
    {
        cout<<"X*Y="<<x*y<<endl;
    }
};
int main()
{
    derived obj(10,5);
    obj.fun();
    return 0;
}