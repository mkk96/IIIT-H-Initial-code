#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}
int position(int n)
{
	int count=0;
	while(n>0)
	{
		count++;
		if(n%2)
		{
			return count;
		}
		n/=2;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	cout<<position(n);
	return 0;
}
