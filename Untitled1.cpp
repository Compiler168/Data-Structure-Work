#include<iostream>
using namespace std;
int main()
{
	int temp,n,min;
	cout<<"Enter the size of array";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element :";
		cin>>a[i];
	}
	cout<<"Unsorted array is :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"Sorted array is :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
