#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int result=(a%(int)(pow(10,9)+7)+b%(int)(pow(10,9)+7))%(int)(pow(10,9)+7);
	cout<<result<<endl;
	return 0;
}
