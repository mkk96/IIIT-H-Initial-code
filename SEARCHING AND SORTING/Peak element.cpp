#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void findPeak(vector<int> &v,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0&&v[i]>v[i+1])
		{
			cout<<v[i]<<" ";
		}
		else if(i==n-1&&v[i]>v[i-1])
		{
			cout<<v[i]<<" ";
		}
		else
		{
			if(v[i]>v[i-1]&&v[i]>v[i+1])
			{
				cout<<v[i]<<" ";
			}
		}
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
	findPeak(v,n);
	return 0;
}
