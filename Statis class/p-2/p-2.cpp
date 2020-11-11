#include<iostream>
using namespace std;
class myclass
{
    public:
    int static i;
    void seti(int x)
    {
        i=x;
    }
    void showi()
    {
        cout<<"Showing i="<<i<<endl;
    }
};
int myclass::i;
int main()
{
    myclass obj,obj1;
    myclass::i=20;
    obj1.showi();
    return 0;
}