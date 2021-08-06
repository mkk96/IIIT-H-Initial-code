#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n],i;
	map<int,int> value;
	for(i=0;i<n;i++)
	{
		int a;
		cin>>a;
		value[a]=0;
	}
	map<int,int> ::iterator itr;
	for(itr=value.begin();itr!=value.end();itr++)
	{
		int x=itr->first;
		int a=0,b=0,c=0;
		while(x>0)
		{
			int temp=x%10;
			if(temp==1)
				a=1;
			if(temp==2)
				b=1;
			if(temp==3)
				c=1;
			x/=10;
		}
		if(a&&b&&c)
			itr->second=1;
	}
	for(itr=value.begin();itr!=value.end();itr++)
	{
		if(itr->second)
			cout<<itr->first<<endl;
	}
	return 0;
}
