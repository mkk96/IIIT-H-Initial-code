#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool findAnagram(string s1,string s2)
{
	vector<int> hash(256,0);
	if(s1.length()!=s2.length())
		return false;
	for(int i=0;i<s1.length();i++)
	{
		hash[s1[i]]++;
		hash[s2[i]]--;
	}
	for(int i=0;i<26;i++)
	{
		if(hash[i]!=0)
			return false;
	}
	return true;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(findAnagram(s1,s2))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
