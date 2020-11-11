#include<iostream>
using namespace std;
class myclass
{
    int x;
    public:
    void setx(int a)
    {
        x=a;
    }
    int  getx()
    {
        return x;
    }
};
int main()
{
    myclass ob[4];
    int j;
    for(j=0;j<4;j++)
    {
        ob[j].setx(j);
    }
    for(j=0;j<4;j++)
    {
        cout<<ob[j].getx()<<endl;
    }
  return 0;
}