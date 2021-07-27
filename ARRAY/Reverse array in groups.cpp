#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int array[n];
	for(int i=0;i<n;i++)
		cin>>array[i];
	for(int i=0;i<n;i+=k)
	{
		int left=i;
		int right=min(i+k-1,n-1);
		while(left<right)
		{
			swap(array[left++],array[right--]);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
