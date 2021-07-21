#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool findpower(int n)
{
	while(n>1)
	{
		if(n%2)
			return false;
		n/=2;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	if(findpower(n))
	{
		cout<<"Power of 2";
	}
	else
	{
		cout<<"Not a power of 2";
	}
	return 0;
}
