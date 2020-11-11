#include<iostream>
using namespace std;
void xtest(int x)
{
    if(x==1)
    throw x;
     cout<<"Enter Xtest,x="<<x<<endl;

}
int main()
{
    try
    {
        xtest(0);
        xtest(1);
        xtest(0);
        xtest(2);
    }
    catch(int j)
    {
        cout<<"You enter x="<<j<<endl;
    }
    return 0;
}