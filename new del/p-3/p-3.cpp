#include<iostream>
using namespace std;
class base
{
    int x,y;
    public:
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"Result="<<x/y<<endl;
    }
};
int main()
{
    base *c;
    c=new base;
    c->setxy(20,5);
    c->show();
    return 0;
}