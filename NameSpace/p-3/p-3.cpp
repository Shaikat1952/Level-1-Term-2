#include<iostream>
using namespace std;

namespace myspace
{

        int x;
        void setx(int a)
        {
            x=a;
       }
        void showx()
        {
            cout<<"X="<<x<<endl;
        }
    
}
int main()
{
    myspace::setx(10);
    myspace::showx();

}