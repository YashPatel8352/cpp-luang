#include<iostream>
using namespace std;
class bestman
{
    char bcode[4];
    char bname[20];
    int innings,notout,runs,calc;
    float batavg;
    float calcavg()
    {
        return batavg=runs/(innings-notout);
    }
    public:
    void readdata()
    {
        cout<<"Enter bcode: ";
        cin>>bcode;
        cout<<"Enter bname: ";
        cin>>bname;
        cout<<"Entere innings: ";
        cin>>innings;
        cout<<"Enter notout: ";
        cin>>notout;
        cout<<"Enter runs: ";
        cin>>runs;

    calc=calcavg();
    }
    void displaydata()
    {
        cout<<"bcode is: "<<bcode<<endl;
        cout<<"bname is: "<<bname<<endl;
        cout<<"innings is: "<<innings<<endl;
        cout<<"notout is: "<<notout<<endl;
        cout<<"runs is: "<<runs<<endl;
        cout<<"calc is: "<<calc<<endl;
    }
};
int main()
{
    bestman a;
    a.readdata();
    a.displaydata();
}