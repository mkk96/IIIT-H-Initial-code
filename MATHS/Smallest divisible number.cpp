#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long result=1;
	for(long long i=1;i<=n;i++)
	{
		result=result*i/__gcd(result,i);
	}
	cout<<result<<endl;
	return 0;
}
