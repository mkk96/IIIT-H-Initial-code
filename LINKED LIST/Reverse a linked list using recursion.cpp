#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
void reverse(node **head)
{
	node *first;
	node *rest;
	first=*head;
	rest=first->next;
	if(*head==NULL)
		return;
	if(rest==NULL)
		return ;
	reverse(&rest);
	first->next->next=first;
	first->next=NULL;
	*head=rest;
}
int main()
{
	int n,a;
	cin>>n;
	node *head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		node *temp=(node *)malloc(sizeof(node));
		temp->val=a;
		temp->next=head;
		head=temp;	
	}	
	reverse(&head);
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
	return 0;
}
