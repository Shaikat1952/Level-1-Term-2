#include<iostream>
using namespace std;
class myclass
{
    int x,y;
    public:
    myclass()
    {
        x=0;y=0;
    };
    myclass(int i,int j)
    {
        x=i;
        y=j;
    }
    void getxy(int &i,int &j)
    {
        i=x;
        j=y;
    }
  myclass operator +(myclass obj2)

};
myclass myclass :: operator +(myclass obj2)
{
    myclass temp;
    temp.x=x+obj2.x;
    temp.y=y+obj2.y;
    return temp;
}
int main()
{
    myclass o1 (10,10), o2 (5,3), o3;
    int x,y;
    o3=o1+o2;
    cout<<"X="<<x<<"||"<<"Y="<<y<<endl;
    return 0;
}