#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void findRow(int n)
{
	stack<char> s;
	while(n>0)
	{
		if(!(n%26))
		{
			s.push('Z');
			n=n/26-1;
		}
		else
		{
			s.push((char)('A'+n%26-1));
			n/=2;
		}
	}
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
}
int main()
{
	int n;
	cin>>n;
	findRow(n);
	return 0;
}
