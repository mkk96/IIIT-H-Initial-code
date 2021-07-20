#include<iostream>
#include<bits/stdc++.h>
bool checkSparse(int n)
{
    if (n & (n>>1))
        return false;
 
    return true;
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(checkSparse(n))
	{
		cout<<"Parse";
	}
	else
	{
		cout<<"Not parse";
	}
	return 0;
}
