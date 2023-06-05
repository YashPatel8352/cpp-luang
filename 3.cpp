#include <iostream>
using namespace std;
int main() 
{
    int a[10] ;
    
    int sum = 0,i;

    for(i = 0 ; i < 10 ; i++)
    {
        cout<<"enter a[%d]: ";
        cin>>a[i];
    }
    for ( i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) 
        {
            sum += a[i];
        }
    }
    cout<<"Total of odd elements:"<<sum;

}
    



    
    



