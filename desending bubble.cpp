#include<stdio.h>
int main()
{
	int a[10],n,i,j,x;
	printf("enter the element");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	for(i=n;i>0;i--)
	{
	for(j=n;j>n-i;j--)
	{
	if(a[j]>a[j-1])
	{
	x=a[j-1];
	a[j-1]=a[j];
	a[j]=x;
	}
	}
	}
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
}
