#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	n<<(k-1);
	if(n%2)
	{
		cout<<"Kth bit is set";
	}
	else
	{
		cout<<"Kth bit is not set";
	}
	return 0;
}
