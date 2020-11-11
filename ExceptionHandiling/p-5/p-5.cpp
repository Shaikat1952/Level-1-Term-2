# include <iostream >
using namespace std ;

void Xhandler ( int test )
{
  cout<<"Inside block="<<test<<endl;
if( test )
throw test ;
}

int main ()
{
    try{
cout << " start \n";
Xhandler (1) ;
Xhandler (2) ;
Xhandler (0) ;
Xhandler (3) ;
cout << " end ";
return 0;
    }
    catch(...)
    {
        cout<<"catching"<<endl;
    }
}