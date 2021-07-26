#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int i=0,j=0;
	for(i=0;i<n-1;i++)
	{
		if(array[i]!=array[i+1])
		{
			array[j++]=array[i];
		}
	}
	array[j++]=array[n-1];
	for(i=0;i<j;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
