#include<iostream>
using namespace std;
class test
{
    int Testcode,NoCandidate,CenterReqd,calc;
    string Description;
    float CALCNTR()
    {
        return CenterReqd=(NoCandidate/100+1);
    }
    public:

    void SCHEDULE()
    {
    cout<<"Enter Testcode: ";
    cin>>Testcode;
    cout<<"Enter Description: ";
    cin>>Description;
    cout<<"Enter NonCandidate: ";
    cin>>NoCandidate;

    calc=CALCNTR();

    }
    void DISPTEST()
    {
        cout<<"Testcode is: "<<Testcode<<endl;
        cout<<"Description is: "<<Description<<endl;
        cout<<"NonCandidate is: "<<NoCandidate<<endl;
    }

}; 
int main()
{
    test a;
    a.SCHEDULE();
    a.DISPTEST();
}