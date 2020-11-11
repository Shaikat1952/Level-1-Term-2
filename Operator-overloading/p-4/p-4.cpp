#include<iostream>
using namespace std;
class cord
{
    int x,y;
    public:
    cord(){x=0;y=0;};
    cord(int i,int j)
    {
        x=i;
        y=j;
    }
    void get(int &i,int &j)
    {
        i=x;
        j=y;
    }
    cord operator+(cord ob2);
}
cord cord:: operator +(cord ob2);
{
    cord temp;
    temp.x=x+ob2.x;
    temp.y=y+ob2.y;
    return temp;
}

