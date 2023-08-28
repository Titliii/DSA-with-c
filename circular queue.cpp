#include<stdio.h>
#define MAX 5
int queue[MAX]; 
int rear=-1,front=-1,i,b,max,w;
void insert(int);
void deletion();
void display();
int main()
	{
		int a,n,x;
	do
	{
printf("press 1 for insert\n press 2 for deletion\n press 3 for display\n");
scanf("%d",&n);


switch(n)
{
case 1:
	printf("enter number");
	scanf("%d",&a);
	insert(a);
	break;
case 2:
	deletion();
	break;
case 3:
	display();
	break;
default:
	printf("wrong choice\n");
	
}
printf("to continue press 4\n");
scanf("%d",&x);
}
while(x==4);
return 0;
}

void insert(int v)
{
   if(front==0 && rear==MAX-1)
   printf("queue is overflow");
   
	else if(front==-1 && rear==-1)
	{
	front=rear=0;
	}
else if(rear==MAX-1 && front!=0)
{rear=0;
}
else
rear=rear+1;
queue[rear]=v;
}

void deletion()
{
if(front==-1)
{
printf("queue is underflow");
}
w=queue[front];
 if(front==rear)
{front=rear=-1;
}
else if(front==MAX-1)
{front=0;
}
else
front=front+1;
}

void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
	printf("\nstack empty\n");
    }
	else
	{
	for(i=front;i<=rear;i++)
    {
	printf("%d\t",queue[i]);
	}	
} 
}

