#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	struct node *next;
};
struct node * reverse(struct node *head)
{
	if(!head)
		return NULL;
	struct node *current=head;
	struct node *prev=NULL;
	struct node *next=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	return prev;
}
int main()
{
	int n,a;
	cin>>n;
	struct node *head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		temp->val=a;
		temp->next=head;
		head=temp;
	}
	head=reverse(head);
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
	return 0;
}
