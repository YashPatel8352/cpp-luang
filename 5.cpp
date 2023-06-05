#include<iostream>
using namespace std;
int main()
{
	char value;

	cout<<"enter value =";
	cin>>value;
	
	if(value=='a'||value=='e'||value=='i'||value=='o'||value=='u')
	{
		cout<<"\n vowel"<<value,value;
	}
	else
	{
		cout<<"\n  constent"<<value,value;
	}
	return 0;
}