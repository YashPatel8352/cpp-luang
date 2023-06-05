#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[50];
    float eng,maths,sci,total;
    float ctotal()
    {
        return eng+maths+sci+total;
    }
    public:
    void takedata()
    {
        cout<<"enter admno: ";
        cin>>admno;
        cout<<"enter name: ";
        cin>>sname;
        cout<<"enter sci marks is: ";
        cin>>sci;
        cout<<"enter maths mark is: ";
        cin>>maths;
        cout<<"enter eng mark is: ";
        cin>>eng;
        total=ctotal();
    }
    void showdata()
    {
        cout<<"admno is: "<<admno<<endl;
        cout<<"sname is: "<<sname<<endl;
        cout<<"eng is: "<<eng<<endl;
        cout<<"sci is: "<<sci<<endl;
        cout<<"maths is: "<<maths<<endl;
        cout<<"total is: "<<total<<endl;

    }

};
int main()
{
    student a;
    a.takedata();
    a.showdata();
}