#include<iostream>
using namespace std;
class overload
{
    float x;
    public:
    overload()
    {
        x=0;
    }
    overload(int i)
    {
        x=i;
    }
    void setx()
    {
        cout<<"Printing x="<<x<<endl;;
    }
};
int main()
{
    overload obj(10);
    obj.setx();
    overload n;
    n.setx();
}