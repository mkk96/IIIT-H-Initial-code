#include<bits/stdc++.h>
using namespace std;
int findtransition(int *array,int low,int high)
{
	int i=low;
	int j=high;
	while(i<=j)
	{
		int mid=(j+i)/2;
		if(array[mid]==0)
			i=mid+1;
		else if(array[mid]==1)
		{
			if(mid==0||(mid!=0&&array[mid-1]==0	))
				return mid;
			j=mid-1;
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
	cout<<findtransition(array,0,n-1);
	return 0;
}
