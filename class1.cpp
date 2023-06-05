#include<iostream>
using namespace std;
class result
{
    private:
    int Maths,English,Science,Total,Rollno;
    float per;
    char grade;
    public: 
    void setdata()
    {
        cout<<"Enter Roll no:";
        cin>>Rollno;

        cout<<"Enter Maths:";
        cin>>Maths;

        cout<<"Enter English:";
        cin>>English;

        cout<<"Enter Science:";
        cin>>Science;
    }
    void clac()
    {
        Total=Maths+English+Science;
        per=Total/3;
    }

    void getdata()
    {
        cout<<"Rollno\tMaths\tEnglish\tScience\tTotal\tper\tgrade\n";
        cout<<Rollno<<"\t"<<Maths<<"\t"<<English<<"\t"<<Science<<"\t"<<Total<<"\t"<<per<<"\t";
        if(per>75)
        cout<<" A";
        else if(per<75 && per>65)
        cout<<" B";
        else if(per<65 && per>55)
        cout<<" C";
        else if(per<55 && per>35)
        cout<<" D";
        else
        cout<<"fail";
    }           
};
int main()
{
    result a;
    a.setdata();
    a.clac();
    a.getdata();
}