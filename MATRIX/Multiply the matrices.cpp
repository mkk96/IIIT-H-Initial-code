#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,l,k,q;
	cout<<"Enter first matrix dimension\t";
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
	cout<<"Enter Second matrix dimension\t";
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
	if(m==l)
	{
		int array3[n][k];
		for(i=0;i<n;i++)
		{
			for(j=0;j<l;j++)
			{
				array3[i][j]=0;
				for(q=0;q<m;q++)
				{
					array3[i][j]+=array1[i][q]*array2[q][j];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
				cout<<array3[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
