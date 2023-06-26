#include<iostream>
using namespace std;
class base
{
    protected:
    int n,a;
    public:
    void setA(int x)
    {
        a=x;
    }
};
class base1 : public base
{
    protected:
    int n,b;
    public:
    void setB()
    {
        cout<<"Enter  n: ";
        cin>>n;


    }
};

class base2 : public base1
{
    public:
    void getdata()
    {
        for (int i = 0; i <= n; i++)
        {
            cout<<"cube is: "<<i*i*i<<endl;
        }
        
    }
};

int main()
{
    base2 d;
    d.setA(5);
    d.setB();
    d.getdata();
}
