#include<iostream>
using namespace std;
class Test
{
    int n;
    public:
    void setdata()
    {
        cout<<"Enter n:";
        cin>>n;
    }
    void getdata()
    {
        cout<<"value of n:"<<n;
    }
};
int main()
{
    Test a;
    a.setdata();
    a.getdata();
}