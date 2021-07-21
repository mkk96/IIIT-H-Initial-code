#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,m;
	cout<<"Enter dimension of first matrix\t";
	cin>>n>>m;
	int array1[n][m];
	cout<<"Enter matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>array1[i][j];
		}
	}
	int l,k;
	cout<<"Enter dimension of Second matrix\t";
	cin>>l>>k;
	int array2[l][k];
	cout<<"Enter matrix\n";
	for(i=0;i<l;i++)
	{
		for(j=0;j<k;j++)
		{
			cin>>array2[i][j];
		}
	}
	if(n==l&&m==k)
	{
		for(i=0;i<l;i++)
		{
			for(j=0;j<k;j++)
			{
				array1[i][j]=array1[i][j]+array2[i][j];
			}
		}
		for(i=0;i<l;i++)
		{
			for(j=0;j<k;j++)
			{
				cout<<array1[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	else
	{
		cout<<"Cannot be add dur dimension difference";
	}
	return 0;
}
