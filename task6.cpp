 #include<iostream>
using namespace std;
class REPORT
{
    int adno;
    char name[20];
    float marks[5],average,sum;

    float GETAVG()
    {
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return sum / 5;
    }

    public:

    void READINFO()
    {
        cout<<"enter adno: ";
        cin>>adno;
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter marks: ";
        for ( int i = 0; i < 5; i++)
        {
            cin>>marks[i];
        }
        
        average = GETAVG();

    }

    void DISPLAYINFO()
    {
        cout<<"adno is: "<<adno<<endl;
        cout<<"name is: "<<name<<endl;
        cout<<"marks is: "<<marks<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"average marks is: "<<average<<endl;
        
    }
};

int main()
{
    REPORT report;
    report.READINFO();
    report.DISPLAYINFO();
}