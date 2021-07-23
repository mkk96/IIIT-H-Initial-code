#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool findElement(vector<int> &v,int start,int end,int m)
{
	int mid=(start+end)/2;
	if(v[mid]==m)
	{
		return true;
	}
	if(start<=end)
	{
		if(v[mid]<m)
		{
			return findElement(v,start,mid-1,m);
		}
		else
		{
			return findElement(v,mid+1,end,m);
		}
	}
	return false;
}
int main()
{
	int n,m;
	cin>>n;
	vector<int> v(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cin>>m;
	sort(v.begin(),v.end());
	if(findElement(v,0,n-1,m))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
