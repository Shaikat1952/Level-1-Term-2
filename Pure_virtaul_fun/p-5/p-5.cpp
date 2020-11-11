#include<iostream>
using namespace std;
class base
{
  public:
  virtual void fx()=0;
  base(){}
};
class derived:public base
{
    int x,y;
    public:
    derived(int a,int b):base()
    {
        x=a;
        y=b;
    }
    void fx()
    {
        cout<<"Result of multiply="<<x*y<<endl;
    }
};
int main()
{
    derived obj(10,30);
    obj.fx();
    return 0;
}