#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	int array[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>array[i][j];
		}
	}
	for(k=0;k<max(n,m);k++)
	{
		for(i=k;i<m-k;i++)
		{
			cout<<array[k][i]<<" ";
		}
		for(i=1+k;i<n-k;i++)
		{
			cout<<array[i][m-1-k]<<" ";
		}
		for(i=m-2-k;i>=k;i--)
		{
			cout<<array[n-1-k][i]<<" ";
		}
		for(i=n-2-k;i>=k+1;i--)
		{
			cout<<array[i][k]<<" ";
		}
	}
	return 0;
}
