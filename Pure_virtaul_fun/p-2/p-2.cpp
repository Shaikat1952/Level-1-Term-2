#include<iostream>
using namespace std;
class universal
{
    public:
    virtual void fun_uv()=0;
    universal()
    {

    }
};
class web:public universal
{
    int height,weight;
    public:
    web(int x,int y):universal()
    {
        height=x;
        weight=y;

    }
    void fun_uv()
    {
        cout<<"Web="<<height*weight;
    }
};
int main()
{
    web object(7,9);
    object.fun_uv();
}