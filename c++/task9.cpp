#include<iostream>
using namespace std;
class various
{
    public:
    various(int l,int w)
    {
        cout<<"rectangle is: "<<l*w<<endl;
    }
    various(int a)
    {
        cout<<"square is: "<<a*a<<endl;
    }
    various(double b,double h)
    {
        cout<<"triangle is: "<<0.5*(b*h)<<endl;
    }
    various(double r)
    {
        cout<<"circle is: "<<3.14*r*r<<endl;
    }




};
int main()
{
    various a(5,7),b(15),c(10.0,15.0),d(10.5);
}