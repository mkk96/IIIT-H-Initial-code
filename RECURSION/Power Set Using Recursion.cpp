#include<bits/stdc++.h>
using namespace std;
void findpowerSet(string s,int index=0,string cur="")
{
	int n=s.length();
	if(index==n)
	{
			cout<<cur<<" ";
			return;
	}
	findpowerSet(s,index+1,cur+s[index]);
	findpowerSet(s,index+1,cur);
}
int main()
{
	string s;
	cin>>s;
	findpowerSet(s);
	return 0;
}
