#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool findValidateAnIPAddress(string s)
{
	int i,count=0,n[4]={0},k=0;
	string a[4];
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='.')
		{
			count++;
			k++;
		}
		else
		{
			n[k]++;
			a[k]=a[k]+s[i];
			if(s[i]>='0'&&s[i]<='9')
				return false;
		}
		if(n[k]>3)
			return false;
	}
	for(i=0;i<4;i++)
	{
		stringstream geek(a[i]);
	    int x;
	    geek >> x;
	    cout<<x<<endl;
	    if(!(x>=0&&x<=255)||a[i].find('0')==0)
	    	return false;
	    	
	}
	if(count!=3)
	{
		return false;
	}
	return true;
}
int main()
{
	string s1;
	cin>>s1;
	if(findValidateAnIPAddress(s1))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
