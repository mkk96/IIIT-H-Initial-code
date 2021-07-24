#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findMinimum(int *array,int n)
{
	pair<int,int> v[n];
	for(int i=0;i<n;i++)
	{
		v[i].first=array[i];
		v[i].second=i;
	}
	sort(v,v+n);
	vector<bool> visit(n,false);
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(visit[i]||v[i].second==i)
		{
			continue;
		}
		int cycle=0;
		int j=i;
		while(!visit[j])
		{
			visit[j]=true;
			j=v[i].second;
			cycle++;
		}
		if(cycle>0)
		{
			ans+=cycle-1;
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"Minimum Sort\t"<<findMinimum(array,n);
	return 0;
}
