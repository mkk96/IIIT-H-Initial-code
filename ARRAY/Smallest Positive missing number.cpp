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
	i=0;
	while(array[i]>=1&&array[i]<=n&&array[i]!=i)
	{
		swap(array[i],array[array[i]-1]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]!=i+1)
		{
			cout<<i+1<<endl;
			break;
		}
	}
	return 0;
}
