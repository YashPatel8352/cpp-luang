#include<iostream>
using namespace std;
class base
{   
    
    public:
    
    int a=1;
};
class base1 : public base
{
    public:
    int n;

    void setB()
    {
        cout<<"enter n: ";
        cin>>n;
    }
};

class base2 : public base1
{
    public:
    int total;
    void getdata()
    {
        total=1;
        for (int i = 1; i <= n; i++)
        {
            total= total * i;
            
        }
        cout<<total;
    }
};

int main()
{
    base2 d;
    d.setB();
    d.getdata();
}
