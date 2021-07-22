#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool findIsomorphic(string s1,string s2)
{
	vector<int> hashs1(256,0);
	vector<int> hashs2(256,0);
	if(s1.length()!=s2.length())
		return false;
	for(int i=0;i<s1.length();i++)
	{
		hashs1[s1[i]]++;
		hashs2[s2[i]]++;
		if(hashs1[s1[i]]!=hashs2[s2[i]])
			return false;
	}
	return true;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(findIsomorphic(s1,s2))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
