#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findMultiple(string s1,string s2)
{
	int i,j,l1=0,l2=0;
	vector<int> v(s1.length()+s2.length(),0);
	for(i=s2.length()-1;i>=0;i--)
	{
		l2=0;
		for(j=s1.length()-1;j>=0;j--)
		{
			int temp=(s1[j]-'0')*(s2[i]-'0');
			v[l1+l2+1]+=(v[l1+l2]+temp)/10;
			v[l1+l2]=(v[l1+l2]+temp)%10;
			l2++;	
		}
		//cout<<l1+l2<<" "<<v[l1+l2]<<"----"<<endl;
		l1++;
	}
	int size=(v[l1+l2-1]==0)?(l1+l2-1):(l1+l2);
	for(i=size-1;i>=0;i--)
	{
		cout<<v[i];
	}
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	findMultiple(s1,s2);
	return 0;
}
