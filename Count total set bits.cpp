#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bits(int i)
{
	int count=0;
	while(i>0)
	{
		count+=i%2;
		i/=2;
	}
	return count;
}
int main()
{
	int n,i,j,count=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		count+=bits(i);
	}
	cout<<count;
	return 0;
}
