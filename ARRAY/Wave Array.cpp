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
	for(i=0;i<n;i+=2)
	{
		if(i>0&&(array[i-1]>array[i]))
		{
			swap(array[i],array[i-1]);
		}
		if(i<n-1&&(array[i+1]>array[i]))
		{
			swap(array[i],array[i+1]);
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
