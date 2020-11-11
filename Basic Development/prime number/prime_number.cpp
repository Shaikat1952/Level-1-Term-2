#include<iostream>
using namespace std;
int main()
{
    int n,i,j,r,count=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    cout<<"Prime number"<<endl;
    else
    {
        cout<<"Not prime"<<endl;
    }
    
  return 0;
}