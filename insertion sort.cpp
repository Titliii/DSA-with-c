#include<stdio.h>
int main()
{
	int a[10],n,i,j,next;
	printf("enter the no of element");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		next=a[i];
		for(j=i-1;j>=0 && a[j]>next;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=next;
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d\t",a[i]);
	}
}
