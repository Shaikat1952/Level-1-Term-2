//here we code about namespace
#include<iostream>
using namespace std;
namespace st_space
{
    void show_x(){
    cout<<"1st namespace is printing"<<endl;
    }
}
namespace ndspace
{
    void show_y(){
    cout<<"2nd space is printing"<<endl;
    }
}
int main()
{
    st_space::show_x();
    ndspace::show_y();
}