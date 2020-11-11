#include<iostream>
using namespace std;
int main()
{
    int x,y,q=0;
    cout<<"Enter a number:";
    cin>>x;
    cout<<"Enter second number";
    cin>>y;
    int v;
    if(x<0)
    v=-(x);
    else
    v=x;
    while(v>=y)
    {
        v=v-y;
        q=q+1;
    }
    if(x<0 && v>=0)
    {
        v=y-v;
        q=-(q+1);
    }
    cout<<"Q="<<q<<endl;
    cout<<"R="<<v<<endl;
    return 0;
    
}