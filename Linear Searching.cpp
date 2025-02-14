#include<iostream>
using namespace std;
int main()
{
	int arr[7]={20,30,50,60,70,65,9};
	int i, n, loc=-1;
	cout<<"enter value to find";
	cin>>n;
	for(i=0;i<4;i++)
	{
		if(arr[i]==n)
		{
			loc=1;
		}
	}
	if(loc==-1)
	{
		cout<<"value not found in array";
	}
	else
	{
		cout<<"value found at index"<<" "<<loc;
	}
	return 0;
}
