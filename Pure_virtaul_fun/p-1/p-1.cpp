#include<iostream>
using namespace std;
class base
{
   protected:
   int x;
   public:
   virtual void funxy()=0;
   base(int i)
   {
       x=i;
   }

};
class derived:public base
{
    protected:
  int y;
  public:
  derived(int i,int j):base(i)
  {
      y=j;
  }
  void funxy()
  {
      cout<<"X="<<x<<endl;
      cout<<"Y="<<y<<endl;
  }
};
class apps:public base
{
    protected:
    int h,w;
    public:
    apps(int i,int m,int n):base(i)
    {
        h=m;
        w=n;
    }
    void funxy()
    {
        cout<<"Result="<<h*w<<endl;
    }

};
int main()
{
    derived ob(10,20);
    ob.funxy();
    apps obj(10,5,6);
    obj.funxy();
    return 0;
}