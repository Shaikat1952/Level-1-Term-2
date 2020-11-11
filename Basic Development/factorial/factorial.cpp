#include<iostream>
using namespace std;
/* In the code we get factorial of a number,
input will given by user
*/
int main()
{
    int n,i,fact=1;
    cout<<"Enter a number to get factorial:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is="<<fact<<endl;
    return 0;
}    