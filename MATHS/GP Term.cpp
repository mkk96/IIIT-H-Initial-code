#include<bits/stdc++.h>
using namespace std;
float findGP(float a,float r,float n)
{
	return a*(float)pow(r,n-1);
}
int main()
{
	float a,r,n;
	cin>>a>>r>>n;
	cout<<findGP(a,r,n);
	return 0;
}
