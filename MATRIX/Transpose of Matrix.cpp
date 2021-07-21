#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	int array[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>array[i][j];
		}
	}
	cout<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<array[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
