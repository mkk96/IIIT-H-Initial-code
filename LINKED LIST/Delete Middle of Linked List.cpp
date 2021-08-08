#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
int main()
{
	int n,a;
	cin>>n;
	node *head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		node *newnode=(node *)malloc(sizeof(node));
		newnode->val=a;
		newnode->next=head;
		head=newnode;
	}
	node *slow=head;
	node *fast=head->next;
	node *prev;
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next->next;
		prev=slow;
		slow=slow->next;
	}
	prev->next=slow->next;
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
	return 0;
}
