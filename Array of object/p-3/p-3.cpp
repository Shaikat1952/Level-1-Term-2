#include<iostream>
using namespace std;
class samp
{
    int x,y;
    public:
    samp(){x=0;y=0;};
    samp(int a,int b)
    {
        x=a;
        y=b;
    }
    int showx()
    {
        return x;
    }
    int showy()
    {
        return y;
    }
};
int main()
{
   samp obj[4][2]={samp(1,2),samp(3,4),samp(5,6),samp(7,8)};
   int i;
   for(i=0;i<4;i++)
   {
       cout<<obj[i][0].showx()<<" ";
              cout<<obj[i][0].showx()<<endl;
       cout<<obj[i][1].showy()<<" ";
              cout<<obj[i][1].showx()<<endl;

   }
 return 0;
}