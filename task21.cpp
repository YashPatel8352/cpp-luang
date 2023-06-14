#include<iostream>
using namespace std;
class Box
{
int l,w;
public:
void setdata(int a,int b)
{
    l=a,w=b;
}
int getdata()
{
    return l*w;
}
friend Box operator+(Box,Box);
};

Box operator+(Box x,Box y)
{
    Box t;
    t.l= x.l + y.l;
    t.w= x.w + y.w;
    return t;
}

int main()
{
    Box a,b,c;
    a.setdata(2,2);
    cout<<"area of box A is: "<<a.getdata()<<endl;

    b.setdata(5,5);
    cout<<"area of box B is: "<<b.getdata()<<endl;

    c= a+b;
    cout<<"area of box C is: "<<c.getdata()<<endl;
}
