#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
};

struct node *head=NULL;
struct node *create(struct node*);
struct node *display(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
void main()
{
	int n,x;
	do
	{
		printf("\n creat");
		printf("\n display");
		printf("\n insert_beg");
		printf("\n insert_end");
		printf("\n delete_beg");
		printf("\n delete_end");
		printf("\n enter your choice");
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			head=create(head);
			printf("linked list created");
			break;
		case 2:
			head=display(head);
			break;
		case 3:
			head=insert_beg(head);
			break;
		case 4:
			head=insert_end(head);
			break;
		case 5:
			head=delete_beg(head);
			break;
		case 6:
			head=delete_end(head);
			break;
		default:
			printf("wrong choice");		
	}
	printf("to continue press 7");
	scanf("%d",&x);
	}
	while(x==7);
}
struct node *create(struct node *head)
{
struct node *new_node;
int num;
printf("enter the data");
scanf("%d",&num);
new_node=(struct node*)malloc(sizeof(struct node*));
new_node->data=num;
if(head==NULL)
{
	new_node->next=NULL;
	head=new_node;
}
else
{
	new_node->next=head;
	head=new_node;
}
return head;
}
struct node *display(struct node *head)
{
	struct node *ptr;
	ptr=head;
	printf("\n");
	while(ptr!=NULL)
	{
		printf("\t %d",ptr->data);
		ptr=ptr->next;
	}
	return head;
}
struct node *insert_beg(struct node *head)
{
	struct node *new_node;
	int num;
	printf("\n enter the data");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node*));
	new_node->data=num;
	new_node->next=NULL;
	new_node->prev=NULL;
	if(head==NULL)
	{
			head=new_node;
	}
	else
	{
		new_node->next=head;
		head->prev=new_node;
		head=new_node;
	}
    return head;
}
struct node *insert_end(struct node *head)
{
	struct node *ptr,*new_node,*head;
	 int num;
	 num=head;
	 printf("\n enter the data");
	 scanf("%d",&num);
	 new_node=(struct node *)malloc(sizeof(struct node *));
	 if(new_node==NULL)
	 {
	 	printf("allocation error");
	 	exit(0);
	 }
	 new_node->data=num;
	 new_node->next=NULL;
	 new_node->prev=NULL;
	 if(num==NULL)
	 {
	 	num=NULL;
	 }
	else
	{
		while(num->next!=NULL)
		
		{
		num=num->next;
	}
	num->next=new_node;
	new_node->prev=num;
	}
	return head; 
}
