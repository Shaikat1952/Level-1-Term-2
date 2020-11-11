#include<iostream>
using namespace std;
class Students
{
    int scores[5];
    public:
     int sum=0;
    
    void input()
    {
        int i;
        for(i=0;i<5;i++)
        {
            cin>>scores[i];
            sum=sum+scores[i];
        }
    }
    int calculateTotalScore()
    {
         return sum;
        
    }
};
int main()
{
    int n,i,count=0;
    cin>>n;
    Students obj[n];
    for(i=0;i<n;i++)
    {
            obj[i].input();

    }
    int kristen=obj[0].calculateTotalScore();
    for(i=0;i<n;i++)
    {
        
          int total=obj[i].calculateTotalScore();
         if(kristen<total)
         count++;

    }
    cout<<count<<endl;
    return 0;
}