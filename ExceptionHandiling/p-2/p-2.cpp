#include<iostream>
using namespace std;
void setx(int i)
{

        
        if(i==2)
        throw i;
        cout<<"Printing i="<<i<<endl;

}
int main()
{
    try{
        setx(0);
        setx(1);
        setx(2);
    }
    catch(int q)
    {
        cout<<"You input "<<q<<endl;
    }
    return 0;
   
}