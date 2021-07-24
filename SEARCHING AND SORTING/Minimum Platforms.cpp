#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findNumberPlatform(int *arr,int *dep,int n)
{
	sort(arr,arr+n);
	sort(dep,dep+n);
	int count=1,result=1,i=1,j=0;
	while(i<n&&j<n)
	{
		if(arr[i]<=dep[j])
		{
			i++;
			count++;
		}
		else if(arr[i]>dep[j])
		{
			j++;
			count--;
		}
		if(count>result)
			result=count;
	}
	return result;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int dep[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>dep[i];
	}
	cout<<findNumberPlatform(arr,dep,n);
	return 0;
}
