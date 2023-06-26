#include<iostream>
using namespace std;
class Bank
{
    public:
    Bank()
    {
       cout<<"Welcome to Dhameliya Bank"<<endl;
    }
};

class saving : public Bank
{
    double sBal = 1000;
    public:
    void Sadd(double amount) 
    {
        sBal += amount;
    }

    void Swithdraw(double amount) 
    {
        if (amount <= sBal) 
        {
            sBal -= amount;
        } else 
        {
            cout << "Insufficient balance." <<endl;
        }
    }

    double SBalance(){
        return sBal;
    }
};

class current : public Bank
{
    double cBal=10000;
    public:
    void Cadd(double amount) 
    {
        cBal += amount;
    }

    void Cwithdraw(double amount) 
    {
        if (amount <= cBal) 
        {
            cBal -= amount;
        } else 
        {
            cout << "Insufficient balance." <<endl;
        }
    }

    double CBalance(){
        return cBal;
    }
};
int main()
{
    int choice, ch;
    double amount;

    cout<<"1.saving"<<endl;
    cout<<"2.current"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice == 1){
        saving s;
        cout<<"1. Add money"<<endl;
        cout<<"2. withdraw money"<<endl;
        cout<<"3. Show balance"<<endl;
        cout<<"0. exit"<<endl;
       do{
         cout<<"Enter your choice: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter deposite amount: ";
            cin>>amount;
            s.Sadd(amount);
            break;
        case 2:
            cout<<"Enter withdraw amount: ";
            cin>>amount;
            s.Swithdraw(amount);
            break;
        case 3:
            cout<<"Your Balance is: "<<s.SBalance()<<endl;
            break;
        case 0:
            break;
        
        default:
        cout<<"Wrong choice...."<<endl;
            break;
        }
       }while(ch!=0);

    }else{
        current c;
        cout<<"1. Add money"<<endl;
        cout<<"2. withdraw money"<<endl;
        cout<<"3. Show balance"<<endl;
        cout<<"0. exit"<<endl;
        do{
            cout<<"Enter your choice: ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter deposite amount: ";
            cin>>amount;
            c.Cadd(amount);
            break;
        case 2:
            cout<<"Enter withdraw amount: ";
            cin>>amount;
            c.Cwithdraw(amount);
            break;
        case 3:
            cout<<"Your Balance is: "<<c.CBalance()<<endl;
            break;
        case 0:
            break;
        
        default:
        cout<<"Wrong choice...."<<endl;
            break;
        }
        }while(ch!=0);
    }

        
    
}