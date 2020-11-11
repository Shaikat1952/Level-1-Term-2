#include<iostream>
using namespace std;
class newdl
{
    int x,y;
    public:
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    int show()
    {
        cout<<"Result="<<x+y<<endl;
    }
};
int main()
{
    newdl *p;
    p= new newdl;
    p->setxy(10,20);
    p->show();
    return 0;
}