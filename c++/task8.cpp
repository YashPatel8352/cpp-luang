#include<iostream>
    using namespace std;
     class solid
    {
    public:
    solid(int r,int h)
    {
        cout<<"Volume of cylinder is "<<(3.14*r*r*h)<<endl;
    }
    solid(double r1)
    {
        cout<<"Volume of cube is "<<((4*3.14*r1*r1*r1)/3)<<endl;
    }
    solid(int a)
    {
        cout<<"Volume of sphere is "<<(a*a*a)<<endl;
    }
    solid(double b,double h)
    {
        cout<<"volume of prism is: "<<b*h<<endl;
    }
    };
    int main()
    {
        solid a(2,3),b(2.1),c(30),d(10.0,20.0);
    }
