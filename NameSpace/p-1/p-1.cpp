#include<iostream>

namespace myspace
{
    void func()
    {
        cout<<"Coustomize namespace is printing"<<endl;
    }
}
using namespace std;
void func()
{
    cout<<"Default namespace is printing"<<endl;
}
int main()
{
    myspace::func();
    func();
    return 0;
}
