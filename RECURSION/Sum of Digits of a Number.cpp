#include<bits/stdc++.h>
using namespace std;
int findSum(int n)
{
	if(n==1||n==0)
		return n;
	return n%10+findSum(n/10);
}
int main()
{
	int n;
	cin>>n;
	cout<<findSum(n)<<endl;
	return 0;
}
