#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
void merge(vector<int> &v,int l,int mid,int h)
{
	queue<int> temp;
	int i=l,j=mid+1;
	while(i<=mid&&j<=h)
	{
		if(v[i]<v[j])
		{
			temp.push(v[i++]);
		}
		else
		{
			temp.push(v[j++]);
		}
	}
	while(i<=mid)
	{
		temp.push(v[i++]);
	}
	while(j<=h)
	{
		temp.push(v[j++]);
	}
	for(int k=l;k<=h;k++)
	{
		v[k]=temp.front();
		temp.pop();
	}
}
void mergeSort(vector<int> &v,int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergeSort(v,l,mid);
		mergeSort(v,mid+1,h);
		merge(v,l,mid,h);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	mergeSort(v,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
