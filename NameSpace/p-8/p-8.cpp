#include<iostream>  
namespace myspace
{
class you
{
    int  x,y,z;
    public:
    you(int  a,int  b)
    {
        x=a;
        y= b;
    }
    
    int  show_result()
    {
                  

         return z=x+y;
    }
};
}
using namespace std;
int main()
{
    myspace::you obj(5,3);
    cout<<"Result="<<obj.show_result()<<endl;
    //cout<"**"<<endl;

    
}