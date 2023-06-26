#include<iostream>
using namespace std;
class base
{   
    
    public:
    int n,m;
    int a=1;
    void setA(){
     cout<<"enter n is: ";
    cin>>n;

    }
};
class base1 : public base
{
    public:
    void setB()
    {
         for (int i = 1; i <= n; i++)
        {
            cout<<"cube is: "<<i*i*i<<endl;
        }
        
    }
};

class base2 : public base1
{
    public:
    int total;
    void getdata()
    {
        total=1;
        for (int i = 1; i <= n; i++)
        {
            total= total * i;
            
        }
        cout<<"factorial is: "<<total;
    }
};

int main()
{
    base2 d;
    d.setA();
    d.setB();
    d.getdata();
}


