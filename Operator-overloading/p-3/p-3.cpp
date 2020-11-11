#include<iostream>
using namespace std;
class myclass 
{
    int x,y;
    myclass(){x=0;y=0;};
    myclass(int i,int j)
    {
        x=i;
        y=j;
    }
    void show(int &i,int &j)
    {
        i=x;
        j=y;
    }
    //myclass operator +(myclass ob2)
    myclass operator +( myclass ob2);

};
    myclass myclass :: operator +( myclass ob2);
    {
        myclass temp;
        temp.x=x+ob2.x;
        temp.x=y+ob22.y;
        return temp;
    }
int main()
{
    myclass o1(10,10), o2(5,3), o3;
    o3=o1+o2;
    int x,y;
    o3.show (x,y);
    cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";
     return 0;
}
