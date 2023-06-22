#include <iostream>
using namespace std;
class Bank 
{
    private:
    double balance;

    public:
    Bank()
    {
        balance = 1500;
    }

    void add(double amount) 
    {
        balance += amount;
    }

    void withdraw(double amount) 
    {
        if (amount <= balance) 
        {
            balance -= amount;
        } else 
        {
            cout << "Insufficient balance." <<endl;
        }
    }

    void show()
    {
        cout << "Current balance: " << balance <<endl;
    }

    void exit() 
    {
        cout << "Exiting the program" <<endl;
        
    }
};

int main() 
{
    Bank account;
    int choice;
    double amount;

    while (choice!=4) 
    {
        cout << "1. Add money\n2. Withdraw money\n3. Show balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "Enter the amount to add: ";
                cin >> amount;
                account.add(amount);
                break;

            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.show();
                break;

            case 4:
                break;
                
            default:
                cout << "wrong choise" << endl;
                break;
        }
    }
}

