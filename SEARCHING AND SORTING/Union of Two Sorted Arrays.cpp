#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void unionTwoArray(int *array1,int *array2,int n,int m)
{
	int i=0,j=0,k=0;
	int result[n+m];
	while(i<n&&j<m)
	{
		if(array1[i]<=array2[j])
		{
			if(result[k-1]!=array1[i]||i==0)
			{
				result[k++]=array1[i];
			}
			i++;
		}
		else
		{
			if(result[k-1]!=array2[j]||j==0)
			{
				result[k++]=array2[j];
			}
			j++;
		}
	}
	while(i<n)
	{
		if(result[k-1]!=array1[i])
		{
			result[k++]=array1[i];
		}
		i++;
	}
	while(j<m)
	{
		if(result[k-1]!=array2[j])
		{
			result[k++]=array2[j];
		}
		j++;
	}
	for(i=0;i<k;i++)
	{
		cout<<result[i]<<" ";
	}
}
int main()
{
	int n,m,i;
	cin>>n>>m;
	int array1[n],array2[m];
	for(i=0;i<n;i++)
	{
		cin>>array1[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>array2[i];
	}
	unionTwoArray(array1,array2,n,m);
	return 0;
}
