#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	cout<<"enter the matrix element"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter the element["<<i<<"]["<<j<<"]";
			cin>> a[i][j];
		}
	}
	cout<<"Matrix is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
	return 0;
	
}
