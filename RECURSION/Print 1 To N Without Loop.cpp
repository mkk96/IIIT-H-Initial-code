#include<bits/stdc++.h>
using namespace std;
void printR(int n)
{
	if(n==0)
		return ;
	printR(n-1);
	cout<<n<<" ";
	return ;
}
int main()
{
	int n;
	cin>>n;
	printR(n);
	return 0;
}
