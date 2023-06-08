#include<iostream>
using namespace std;
class introduction
{
    char location[20    ],name[50],hobby[20];
    int age,family,qulification;
    public:
    introduction()
    {
        cout<<"defualt constructor is called..."<<endl;
        cout<<"enter name: \n";
        cin>>name;
        cout<<"enter your location: \n";
        cin>>location;
        cout<<"enter your qulification: \n";
        cin>>qulification;
        cout<<"enter your family: \n";
        cin>>family;
        cout<<"enter your hobby: \n";
        cin>>hobby;
        cout<<"enter your age: \n";
        cin>>age; 
    }
    ~introduction()
    {
        cout<<"destructor is called..."<<endl;
    }
    void getdata()
    {
        cout<<"name is:  \n"<<name<<endl;
        cout<<"location is: \n"<<location<<endl;
        cout<<"qulification is: \n"<<qulification<<endl;
        cout<<"family is: \n"<<family<<endl;
        cout<<"hobby is: \n"<<hobby<<endl;
        cout<<"age is: \n"<<age<<endl;
    }
};
int main()
{
    introduction a;
    a.getdata();
}