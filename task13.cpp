#include<iostream>
using namespace std;
class skill
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a ,w=b ,h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    skill operator/(skill n)
    {
        skill t;
        t.l=l/n.l;
        t.w=w/n.w;
        t.h=h/n.h;
        return t;
    }
};
int main()
{
    skill a,b,c;
    a.setdata(4,4,4);
    cout<<"volume of skill A is: "<<a.getdata()<<endl;

    b.setdata(5,5,5);
    cout<<"volume of skill B is: "<<b.getdata()<<endl;

    c=a/b;
    cout<<"volume of skill C is: "<<c.getdata()<<endl;
}