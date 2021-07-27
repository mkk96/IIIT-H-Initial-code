#include<bits/stdc++.h>
#include<vector>
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
	vector<int> leader;
	leader.push_back(array[n-1]);
	int max=array[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(array[i]>max)
		{
			max=array[i];
			leader.push_back(array[i]);
		}
	}
	vector<int> :: iterator itr;
	for(itr=leader.begin();itr!=leader.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
