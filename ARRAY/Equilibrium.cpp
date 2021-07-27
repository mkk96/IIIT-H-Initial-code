#include<bits/stdc++.h>
using namespace std;
int findEquilibrium(int *array,int n)
{
	int sum=0,total_sum=0,i;
	for(i=0;i<n;i++)
	{
		total_sum+=array[i];
	}
	for(i=0;i<n;i++)
	{
		total_sum-=array[i];
		if(sum==total_sum)
		{
			return i+1;
		}
		sum+=array[i];
	}
	return -1;
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
	cout<<findEquilibrium(array,n);
	return 0;
}
