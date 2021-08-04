#include<bits/stdc++.h>
using namespace std;
void permutations(string s,int l,int h)
{
	if(l==h)
	cout<<s<<" ";
	else
	{
		for(int i=0;i<=h;i++)
		{
			swap(s[i],s[l]);
			permutations(s,l+1,h);
			swap(s[i],s[l]);
		}
	}
}
int main()
{
	string s;
	cin>>s;
	permutations(s,0,s.size()-1);
	return 0;
}
