#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int array[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>array[i][j];
		}
	}
	for(j=n-1;j>=0;j--)
	{
		for(i=0;i<n;i++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
