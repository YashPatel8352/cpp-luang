#include<iostream>
#include<string.h>
using namespace std;
class food{
    public:
    food(){
        cout<<"\t\t\t==================================================="<<endl;
        cout<<"\t\t\t\t\t   Hotel Darshan"<<endl;
        cout<<"\t\t\t==================================================="<<endl<<endl;
        cout<<"\t\t\t******************** Menu *************************"<<endl;
        cout<<"\t\t\t\t  1. Kaju kari\t\t\t 320.00"<<endl;
        cout<<"\t\t\t\t  2. Kaju Kofta\t\t\t 350.00"<<endl;
        cout<<"\t\t\t\t  3. Butter Roti\t\t 40.00"<<endl;
        cout<<"\t\t\t\t  4. Butter Nan\t\t\t 90.00"<<endl;
        cout<<"\t\t\t\t  5. plain Roti\t\t\t 20.00"<<endl;
        cout<<"\t\t\t\t  6. Cold Drinks\t\t 30.00"<<endl;
        cout<<"\t\t\t==================================================="<<endl;
        cout<<"\t\t\t\t  0. Confirm Order"<<endl;
        cout<<"\t\t\t==================================================="<<endl;
    }
};

int main()
{
    string name, mo;
    

    food f;
    int n,ch,amt=0; 
    int price[] = {320,350,40,90,20,30},qty[] = {0,0,0,0,0,0};
    string menu[] = {"Kaju_Kari", "kaju_Kofta","Butter_Roti", "Butter_Nan", "Plain_Roti", "Cold_Drinks"};
cout<<"Enter name:";
    getline(cin, name);
    cout<<"Enter Mobile no:";
    getline(cin, mo);

    int l = mo.size();
    if(l !=10){
        cout<<"Enter Mobile no:";
        getline(cin, mo);
    }

    

    do{
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter Qty  of Kaju kari: ";
            cin>>n;
            qty[0] +=n;
            amt += price[0] * qty[0];
            break;


            case 2:
            cout<<"Enter Qty  of Kaju kofta: ";
            cin>>n;
            qty[1] +=n;
            amt += price[1] * qty[1];
            break;

            case 3:
            cout<<"Enter Qty  of Butter Roti: ";
            cin>>n;
            qty[2] +=n;
            amt += price[2] * qty[2];
            break;

            case 4:
            cout<<"Enter Qty  of Butter Nan: ";
            cin>>n;
            qty[3] +=n;
            amt += price[3] * qty[3];
            break;

            case 5:
            cout<<"Enter Qty  of Plain Roti: ";
            cin>>n;
            qty[4] +=n;
            amt += price[4] * qty[4];
            break;


            case 6:
            cout<<"Enter Qty  of Cold Drinks: ";
            cin>>n;
            qty[5] +=n;
            amt += price[5] * qty[5];
            break;

            case 0:
                cout<<"*********************************"<<endl;
                cout<<"name: "<<name<<endl;
                cout<<"Mobile  No: "<<mo<<endl<<endl;
                cout<<"*********************************"<<endl;
                for(int i=0; i<6;i++){
                    if(qty[i]>0){
                            cout<<menu[i]<<"\t\t\t"<<qty[i]<<"   "<<price[i]<<endl;
                    }
                }
                cout<<"*********************************"<<endl;
                cout<<"Total Amt: "<<amt<<endl;
                cout<<"SGST: "<<amt*0.025<<endl;
                cout<<"CGST: "<<amt*0.025<<endl;
                cout<<"Net Bill: "<<(amt+(amt*0.025)+(amt*0.025))<<endl;
                break;
            default:
                cout<<"Wrong choice...."<<endl;
                break;
        }

    }while(ch!=0);
}
