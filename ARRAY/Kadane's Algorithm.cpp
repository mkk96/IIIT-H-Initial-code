#include<bits/stdc++.h>
using namespace std;
int findMaxSubSum(int *array,int n)
{
	int i,temp=0,maxSum=0;
	for(i=0;i<n;i++)
	{
		temp+=array[i];
		if(temp>maxSum)
		{
			maxSum=temp;
		}
		if(temp<0)
			temp=0;
	}
	return maxSum;
}
int main()
{
	int n;
	cin>>n;
	int array[n],i;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<findMaxSubSum(array,n);
	return 0;
}
