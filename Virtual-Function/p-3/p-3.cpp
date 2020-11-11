#include<iostream>
using namespace std;
class base
{
    protected:
    int i;
    public:
    base(int x)
    {
        i=x;
    }
    virtual void fun()
    {
        cout<<"Base class i="<<i<<endl;
    }
};
class derived:public base
{
    int j;
    public:
    derived(int x,int y):base(x)
    {
        j=y;
    }
    void fun()
    {
        cout<<"Derived class i*j="<<i*j<<endl;
    }
};
int main()
{
    derived obj(10,30);
    obj.fun();
}