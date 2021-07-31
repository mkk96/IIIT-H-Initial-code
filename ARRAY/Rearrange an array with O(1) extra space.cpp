#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n],i;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<n;i++)
	{
		array[i]+=(array[array[i]]%n)*n;
	}
	for(i=0;i<n;i++)
	{
		array[i]/=n;
	}
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
