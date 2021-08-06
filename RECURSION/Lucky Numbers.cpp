#include<bits/stdc++.h>
using namespace std;
bool findLucky(int n)
{
	static int count=2;
	if(count>n)
		return true;
	if(n%count==0)
		return false;
	int x=n-n/count;
	count++;
	return findLucky(x);
}
int main()
{
	int n;
	cin>>n;
	if(findLucky(n))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
