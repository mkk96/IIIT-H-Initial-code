#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool findRotation(string s1,string s2)
{
	string temp=s1+s1;
	return (temp.find(s2) != string::npos);
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(findRotation(s1,s2))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
