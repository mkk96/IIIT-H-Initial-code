#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findElement(vector<int> &v,int l,int n,int m)
{
	if (l > n)
        return -2;
	int mid=(l+n)/2;
	if(v[mid]==m)
	{
		return mid;
	}
	if(v[l]<=v[mid])
	{
		if(m>=v[l]&&m<=v[mid])
			return findElement(v,l,mid-1,m);
		return findElement(v,mid+1,n,m);
	}
	if(m>=v[mid]&&m<=v[n])
	{
		return findElement(v,mid+1,n,m);
	}
	return findElement(v,l,mid-1,m);
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
	cout<<findElement(v,0,n-1,m)+1;
	return 0;
}
