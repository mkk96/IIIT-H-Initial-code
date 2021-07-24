#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void intersection(int *array1,int *array2,int n,int m)
{
	int i=0,j=0,temp[n+m],k=0;
	while(i<n&&j<m)
	{
		if(array1[i]<array2[j])
		{
			i++;
		}
		else if(array1[i]>array2[j])
		{
			j++;
		}
		else
		{
			temp[k++]=array1[i++];
			j++;
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<temp[i]<<" ";
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int i,array1[n],array2[n];
	for(i=0;i<n;i++)
	{
		cin>>array1[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>array2[i];
	}
	intersection(array1,array2,n,m);
	return 0;
}
