#include<iostream>
using namespace std;
class BOOK
{
    int BOOK_NO,numcopies;
    char BOOKTITLE[20];
    float PRICE,cost; 

    float TOTAL_COST()
    {
        return PRICE * numcopies;
    }

    public:
    void INPUT()
    {
        cout<<"enter book no: ";
        cin>>BOOK_NO;
        cout<<"enter booktitle: ";
        cin>>BOOKTITLE;
        cout<<"enter price: ";
        cin>>PRICE;
    }

    void PURCHASE()
    {
        cout<<"enter a num of copies to be purchased: ";
        cin>>numcopies;
        cost= TOTAL_COST();
        cout<<"total cost to be paid: "<<cost<<endl;
    }
};

int main()
{
    BOOK book;
    book.INPUT();
    book.PURCHASE();
}