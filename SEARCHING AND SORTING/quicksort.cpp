#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int partition(vector<int> &v,int l,int h)
{
	int pivot=v[h];
	int j=l-1;
	for(int i=l;i<h;i++)
	{
		if(pivot>v[i])
		{
			j++;
			swap(v[i],v[j]);
		}
	}
	swap(v[j+1],v[h]);
	return j+1;
}
void quickSort(vector<int> &v,int l,int h)
{
	if(l<h)
	{
		int pi=partition(v,l,h);
		quickSort(v,l,pi-1);
		quickSort(v,pi+1,h);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n,0);
	for(int i=0;i<n;i++)
		cin>>v[i];
	quickSort(v,0,n-1);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
		return 0;
}
