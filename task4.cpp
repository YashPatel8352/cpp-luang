#include<iostream>
using namespace std;
class yash
{
    int flightnumber,calf;
    string Destination;
    float Distance;
    float fuel;
    float CALFUEL()
    {
        if(Distance<=1000)
        {
            return 500;
        }
        else if(Distance>=1000 && Distance<=2000)
        {
            return 1100;
        }
        //more than 2000
        else
        {
            return 2200;
        }
    }
    public:
    void FEEDINFO()
    {
        cout<<"Enter flightnumber: ";
        cin>>flightnumber;
        cout<<"Enter Destination: ";
        cin>>Destination;
         cout<<"Enter Distance: ";
        cin>>Distance;

        calf= CALFUEL();
    }
    void SHOWINFO()
    {
        cout<<"flightnumber is: "<<flightnumber<<endl;
        cout<<"Destination is: "<<Destination<<endl;
        cout<<"Distance is: "<<Distance<<endl;
    }
};
int main()
{
    yash a;
    a.FEEDINFO();
    a.SHOWINFO();
}





































































































































