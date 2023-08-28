#include<stdio.h>
#define MAX 5
int st[MAX];
int top=-1,i,b;
void push(int);
void pop();
void display();
int main()
	{
		int a,n,x;
	do
	{
printf("press 1 for push\n press 2 for pop\n press 3 for display\n");
scanf("%d",&n);


switch(n)
{
case 1:
	printf("enter number");
	scanf("%d",&a);
	push(a);
	break;
case 2:
	pop();
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

void push(int v)
{
	if(top==MAX-1)
	printf("stack overflow ");
	else
	{
	top=top+1;
	st[top]=v;
	
}
	
}
void pop()
{
if(top==-1)	
printf("stack underflow");
else
{
b=st[top];
printf("deleted=%d\n",b);
top=top-1;
}
}
void display()
{
	if(top==-1)
	{
	printf("\nstack empty\n");
	}
	else
	{
	for(i=top;i>=0;i--)
{
	printf("%d\t",st[i]);
	}	
}
}
