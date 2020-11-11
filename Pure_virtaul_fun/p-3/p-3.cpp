#include<iostream>
using namespace std;
class base
{
    
    public:
    virtual void fun()=0;
    base()
    {

    }
};
class table:public base
{
    int row,col;
    public:
    table(int x,int y):base()
    {
        row=x;
        col=y;
    }
    void fun()
    {
        cout<<"Result="<<row+col<<endl;
    }
};
int main()
{
    table oop(10,90);
    oop.fun();
    return 0;
}