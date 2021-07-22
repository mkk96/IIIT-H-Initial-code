#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int findRemainderWith7(string s)
{
	int statc[]={1, 3, 2, -1, -3, -2};
	int result=0,j=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		result+=(s[i]-'0')*statc[j++];
		j%=6;
		result%=7;
	}
	if(result<0)
		return (result + 7) % 7;
	return result;
}
int main()
{
	string s;
	cin>>s;
	cout<<findRemainderWith7(s);
	return 0;
}
