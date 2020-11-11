#include<iostream>
using namespace std;
  


class sta
{
        public:

    static int i;
    void seti(int x)
    {
        i=x;
    }
    int geti()
    {
        return i;
    }
};
int sta::i;
int main()
{
    sta obj,obj1;
    sta::i=100;
    cout<<obj.geti()<<endl;
    cout<<obj1.geti()<<endl;
    return 0;
}
