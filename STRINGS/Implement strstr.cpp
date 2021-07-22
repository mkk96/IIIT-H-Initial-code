#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool findImplementStrStr(string s1,string s2)
{
	int i,j,k;
	for(i=0;i<s1.length();i++)
	{
		j=0;
		k=i;
		while(j<s2.length())
		{
			if(s1[k]==s2[j])
			{
				j++;
				k++;
			}
			else
			{
				break;
			}
		}
		if(j==s2.length())
		{
			return true;
		}
		cout<<endl;
	}
	return false;
}
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(findImplementStrStr(s1,s2))
	{
		cout<<"Sub string present";
	}
	else
	{
		cout<<"Sub string is not present";
	}
	return 0;
}
