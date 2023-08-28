#include<stdio.h>
int main()
{
	int a[10],n,i,j,s,p;
	printf("enter the no of element");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	for(i=n-1;i>=1;i--)
	{
	p=i;
	for(j=0;j<i;j++)
	{
	if(a[j]>=a[p])
	
	p=j;

}
	s=a[p];
	a[p]=a[i];
	a[i]=s;
	}
	printf("\n the sorted array is");
	for(i=0;i<n;i++)
	{printf("\t %d",a[i]);
	}
}
