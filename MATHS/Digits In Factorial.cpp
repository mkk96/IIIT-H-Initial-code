#include<bits/stdc++.h>
using namespace std;
int findDigit(int n)
{
	if(n==0)
		return 1;
	float result=0;
	for(int i=1;i<=n;i++)
	{
		result+=log10(i);
	}
	return (int)result+1;
}
int main()
{
	int n;
	cin>>n;
	cout<<findDigit(n);
	return 0;
}
