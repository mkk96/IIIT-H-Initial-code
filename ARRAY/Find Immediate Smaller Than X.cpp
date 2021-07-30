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
	int m;
	cin>>m;
	int findMaxmin=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(array[i]<m)
		{
			findMaxmin=max(findMaxmin,array[i]);
		}
	}
	if(findMaxmin==INT_MIN)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<findMaxmin<<endl;
	}
	
	return 0;
}
