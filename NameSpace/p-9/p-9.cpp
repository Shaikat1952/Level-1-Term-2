#include<iostream>
namespace myspace
{
    class myclass{
    void show()
    {
        cout<<"Printing in virtual namespace"<<endl;
    }
    };
}
using namespace std;
void show()
{
    cout<<"Printing in usual namespace"<<endl;
}
int main()
{
     myclass obj;
     obj.show();
     return 0;

}