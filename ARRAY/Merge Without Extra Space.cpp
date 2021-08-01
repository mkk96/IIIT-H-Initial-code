#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int array1[n],array2[m],i,j;
	for(i=0;i<n;i++)
	{
		cin>>array1[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>array2[j];
	}
	i=0;
	j=0;
	int k=n-1;
	while(i<=k&&j<n)
	{
		if(array1[i]<array2[j])
		{
			i++;
		}
		else
		{
			swap(array1[k--],array2[j++]);
		}
	}
	sort(array1, array1 + n);
    sort(array2, array2 + m);
	for(i=0;i<n;i++)
	{
		cout<<array1[i]<<" ";
	}
	for(i=0;i<m;i++)
	{
		cout<<array2[i]<<" ";
	}
	return 0;
}
