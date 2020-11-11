#include<iostream>
using namespace std;
class base
{
    public:
    int id,age,dep;
    base(int x,int y,int z)
    {
        id=x;
        age=y;
        dep=z;
    }
    virtual void InFo()
    {
        cout<<"Student Info is showing:"<<endl;
        cout<<"ID="<<id<<endl<<"AGE="<<age<<endl<<"Department="<<dep<<endl;
    }
};
class derived:public base
{
    public:
    derived(int x,int y,int z):base(x,y,z)
    {
        
    }
    void InFo()
    {
        cout<<"Professional InFo is showing:"<<endl;
         cout<<"ID="<<id<<endl<<"AGE="<<age<<endl<<"Department="<<dep<<endl;

    }

};
int main()
{
    base *q;
    base obj(57,20,1);
    derived obj1(57,22,1);
    q=&obj;
    q->InFo();
    q=&obj1;
    q->InFo();
    return 0;
}