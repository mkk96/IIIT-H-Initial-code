#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n],i;
	for(i=0;i<n;i++)
		cin>>array[i];
	int min=-1;
	set<int> myset;
	for(i=n-1;i>=0;i--)
	{
		if(myset.find(array[i])!=myset.end())
			min=i;
		else
			myset.insert(array[i]);
	}
	if(min==-1)
		cout<<"No Element";
	else
		cout<<array[min];
	return 0;
}
