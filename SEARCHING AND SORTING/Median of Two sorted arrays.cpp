#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int median(int *array,int n)
{
	if(n%2==0)
	{
		return (array[n/2]+array[n/2-1])/2;
	}
	return (array[n/2]);
}
int findMedian(int *array1,int *array2,int n)
{
	if(n<=0)
	{
		return -1;
	}
	if(n==1)
	{
		return (array1[0]+array2[0])/2;
	}
	if(n==2)
	{
		return (max(array1[0],array2[0])+min(array1[1],array2[1]))/2;
	}
	int m1=median(array1,n);
	int m2=median(array2,n);
	if(m1<m2)
	{
		if(n%2==0)
		{
			return findMedian(array1+n/2-1,array2,n-n/2+1);
		}
		return findMedian(array1+n/2,array2,n-n/2);
	}
	if(n%2==0)
	{
		return findMedian(array1,array2+n/2-1,n-n/2+1);
	}
	return findMedian(array1,array2+n/2,n-n/2);
}
int main()
{
	int n;
	cin>>n;
	int array1[n],array2[n];
	for(int i=0;i<n;i++)
	{
		cin>>array1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>array2[i];
	}
	cout<<findMedian(array1,array2,n);
	return 0;
}
