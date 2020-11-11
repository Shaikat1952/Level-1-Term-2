//In the code we drow a square,user will define how many rows he want
#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Input square's row to drow :";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}