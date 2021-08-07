#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
void pairwise(node **head)
{
	if(*head==NULL||(*head)->next==NULL)
		return ;
	node *first=*head;
	node *second=first->next;
	int temp=first->val;
	first->val=second->val;
	second->val=temp;
	pairwise(&(second->next));
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
	pairwise(&head);
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
	return 0;
}
