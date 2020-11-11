# include <iostream >
using namespace std ;
void Xtest ( int test )
{
cout << " Inside Xtest , test is: " << test << "\n";
if( test )
throw test ;
}
int main ()
{
cout << " start \n";
try // start a try block
{
    Xtest (0) ;
Xtest (1) ;
Xtest (3) ;
}
catch ( int i) // catch an error
{
cout << " Caught One ! Number is: ";
cout << i << "\n";
}
cout << " end ";
return 0;
}