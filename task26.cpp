#include<iostream>
using namespace std;
class base
{
    
    protected:
    int n,i;
    public:
    void num()
    {
    cout<<"Enter  n: ";
    cin>>n;
    }
};
class derived : public base
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
    d.num();
    d.number();
}