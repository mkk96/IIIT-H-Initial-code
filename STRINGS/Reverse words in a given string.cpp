#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<queue>
#include<vector>
using namespace std;
void findReverse(string s)
{
	vector<string> v;
	int i;
	string str;
	for(i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			v.push_back(str);
			str="";
		}
		else
		{
			str+=s[i];
		}
	}
	v.push_back(str);
	for(i=v.size()-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
}
int main()
{
	string s;
	getline(cin,s);
	findReverse(s);
	return 0;
}
