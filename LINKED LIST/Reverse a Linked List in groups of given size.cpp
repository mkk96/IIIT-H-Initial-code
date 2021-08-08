#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
node *reversek(node *head,int k)
{
	if(head==NULL)
		return NULL;
	node *current=head;
	node *prev=NULL;
	node *next=NULL;
	int count=0;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		count++;
		if(count==k)
			break;
	}
	if (next != NULL)
		head->next=reversek(next, k);
	return prev;
}
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
	int k;
	cin>>k;
	head=reversek(head,k);
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
	return 0;
}
