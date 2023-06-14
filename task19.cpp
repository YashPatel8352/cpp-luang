#include<iostream>
using namespace std;
class test
{
    int age;
    public:
    test(int n)
    {
        age = n;
    }
    int getage()
    {
        return age;
    }
    test(test &n)
    {
        age = n.age;
    }
};

int main()
{
    test a(10);
    cout<<"age of A is: "<<a.getage()<<endl;

    test b(a);
    cout<<"age of B is: "<<b.getage()<<endl;
}
