#include<iostream>
using namespace std;
int main()
{
	int i,j,min,max;
	int arr[4][4];
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
	cout<<"please enter the number";
	cin>>arr[i][j];
	}
	max=min= arr[0][0];
	for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{
		if(arr[i][j]>max)
		{
			max=arr[i][j];
		}
		if(arr[i][j]<min)
		{
			min=arr[i][j];
		}
	}
	cout<<"mixium number="<<max<<endl<<"minium ="<<min<<endl;
}
