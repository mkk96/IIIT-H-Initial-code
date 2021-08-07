#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
int main()
{
	int n,a,k;
	cin>>n>>k;
	node *head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		node *temp=(node *)malloc(sizeof(node));
		temp->val=a;
		temp->next=head;
		head=temp;
	}
	int count=0;
	while(head!=NULL)
	{
		if(head->val==k)
		{
			count++;
		}
		head=head->next;
	}
	cout<<count<<endl;
	return 0;
}
