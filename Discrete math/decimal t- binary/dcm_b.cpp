#include<iostream>
using namespace std;
int main()
{
    int num,base=2,n1,r1,r2;
    cout<<"Enter number to covert binary:";
    cin>>num;
    while (num!=0)
    {
         n1=num/2;         
         r1=num%2;
         n1=num/2;
         r2=num%2;

    }
    cout<<r1<<" "<<r2<<endl;
    return 0;
    
    
}