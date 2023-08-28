#include<stdio.h>
int main()
{
	int a[10],n,i,pos,x;
	printf("enter the no of element");
	scanf("%d",&n);
	printf("enter the elements");
	
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
	
	printf("\nchoose the position");
	scanf("%d",&pos);
	
	printf("enter the data");
	scanf("%d",&x);
	
	for(i=n;i>=pos;i--)
	{
	a[i]=a[i-1];
    }
    
a[pos-1]=x;
for(i=0;i<=n;i++)
{
	printf("%d",a[i]);
}
}
