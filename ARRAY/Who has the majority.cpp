#include<bits/stdc++.h>
using namespace std;
int findMajority(int *array,int n)
{
	int i,count=1;
	int temp=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]==temp)
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==0)
		{
			temp=array[i];
			count=1;
		}
	}
	count=n/2+1;
	for(i=0;i<n;i++)
	{
		if(array[i]==temp)
		{
			count--;
		}
		if(count==0)
		{
			return temp;
		}
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
	cout<<findMajority(array,n);
	return 0;
}
