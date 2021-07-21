#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int x=n^m,sum=0;
	while(x>0)
	{
		sum+=x%2;
		x/=2;
	}
	cout<<sum;
	return 0;
}
