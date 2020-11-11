#include<iostream>
using namespace std;
class name
{
    string nnm;
    int id;
    public:
    void setname(string a,int b)
    {
        nnm=a;
        id=b;

    }
    void show()
    {
        cout<<"You name:"<<nnm<<endl;
        cout<<"Id:"<<id<<endl;
    }
};
int main()
{
    try
    {
        name(shaikat,57);
        if(nnm==0)
        throw nnm;

    }
    catch(string x)
    {
        
    }
    return 0;
}