#include<iostream>
using namespace std;
int main()
{
	int numpy[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Please enter the any five number";
		cin>>numpy[i];
	}
	cout<<"the array in reverse order "<<endl;
	for(i=4;i>=0;i--)
	{
		cout<<numpy[i]<<" ";
	}
}
