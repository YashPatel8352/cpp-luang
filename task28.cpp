#include<iostream>
using namespace std;
class base1
{
    
    protected:
    int n;
    public:
    void numn()
    {
    cout<<"Enter  n: ";
    cin>>n;
    }
};
class base2
{
    
    protected:
    int i;
    public:
    void numm()
    {
    cout<<"enter :1 "<<endl;
    }
};
class derived : public base1,public base2
{
    public:
    void number()
    {
    for(i=1;i<=n;i++)
        {
             cout<<i*i<<endl;
        }
    }
};


int main()
{
    derived d;
    d.numn();
    d.numm();
    d.number();
}