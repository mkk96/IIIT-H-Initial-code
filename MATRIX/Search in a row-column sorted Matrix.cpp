#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,k,flag=0;
	cin>>n>>m;
	int array[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>array[i][j];
		}
	}
	cin>>k;
	i=0;j=m-1;
	while(i<n&&j>=0)
	{
		if(array[i][j]==k)
		{
			cout<<"("<<i+1<<","<<j+1<<")";
			flag=1;
			break;
		}
		if(array[i][j]>k)
		{
			j--;
		}
		else if(array[i][j]<k)
		{
			i++;
		}
		else
		{
			break;
		}
	}
	if(!flag)
	{
		cout<<"Not find element in matrix";
	}
	return 0;
}
