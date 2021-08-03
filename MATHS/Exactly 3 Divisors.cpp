#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	vector<int> divisor;
	for(int i=2;i*i<=n;i++)
	{
		if(isprime(i))
		{
			divisor.push_back(i*i);
		}
	}
	vector<int> :: iterator itr;
	for(itr=divisor.begin();itr!=divisor.end();itr++)
	{
		cout<<*itr<<" ";
	}
	return 0;
}
