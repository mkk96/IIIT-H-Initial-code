#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
char findMaxOccuringChar(string s)
{
	vector<int> hash(26,0);
	for(int i=0;i<s.size();i++)
	{
		hash[(int)(s[i]-'a')]++;
	}
	int max=0,k;
	for(int i=0;i<26;i++)
	{
		if(max<hash[i])
		{
			max=hash[i];
			k=i;
		}
	}
	return (char)(k+'a');
}
int main()
{
	string s;
	cin>>s;
	cout<<findMaxOccuringChar(s);
	return 0;
}
