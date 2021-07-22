#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool findBinary(string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='0'&&s[i]!='1')
			return false;
	}
	return true;
}
int main()
{
	string s;
	cin>>s;
	if(findBinary(s))
	{
		cout<<"String is Binary";
	}
	else
	{
		cout<<"String is not Binary";
	}
	return 0;
}
