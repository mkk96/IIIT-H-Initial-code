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
	int j=0,sum=0;
	i=0;
	while(i<n&&j<n)
	{
		if(sum==m)
			break;
		if(sum<m)
		{
			sum+=array[j];
			if(sum==m)
			break;
			j++;
		}
		else
		{
			sum-=array[i++];
			if(sum==m)
			{
				j--;
				break;
			}
		}
	}
	cout<<i<<" "<<j;
	return 0;
}
