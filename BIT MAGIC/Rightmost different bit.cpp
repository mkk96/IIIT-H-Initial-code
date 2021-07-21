#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<log2(n&~(n-1))+1;
	return 0;
}
