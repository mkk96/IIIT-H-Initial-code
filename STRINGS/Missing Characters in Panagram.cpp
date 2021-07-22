#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
string findMissingCharacters(string s)
{
	vector<int> v(26,0);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			v[(int)(s[i]-'a')]=1;
		if(s[i]>='A'&&s[i]<='Z')
			v[(int)(s[i]-'A')]=1;
	}
	char result[26],k=0;
	for(int i=0;i<26;i++)
	{
		if(v[i]==0)
		{
			result[k++]=(char)(i+'a');
		}
	}
	return result;
}
int main()
{
	string s;
	getline(cin, s);
	cout<<findMissingCharacters(s);
	return 0;
}
