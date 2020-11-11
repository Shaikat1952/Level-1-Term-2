#include<iostream>
using namespace std;
int main()
{
    char s;
    cout<<"Enter a alphabet to re revese: ";
    cin>>s;
    if(s>=65 && 90<=s)
    {
        cout<<"Reverse is= "<<s+32;
    }
    else if(s>=97 && 122<=s)
    cout<<"Reverse is= "<<s-32;

}