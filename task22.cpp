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
friend Box operator++(Box);
};

Box operator++(Box x)
{
    Box t;  
    t.l= ++x.l;
    t.w= ++x.w;
    return t;
}

int main()
{
    Box a,c;
    a.setdata(2,2);
    cout<<"area of box A is: "<<a.getdata()<<endl;

   
    c= ++a;
    cout<<"area of box C is: "<<c.getdata()<<endl;
}
