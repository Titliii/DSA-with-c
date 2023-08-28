#include<stdio.h>
int main()
{
	int a[10],n,i,pos;
	printf("enter the no of element");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	printf("choose the position");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{a[i-1]=a[i];
	}
	for(i=0;i<n-1;i++)
	{printf("%d",a[i]);
	}
}
