#include<stdio.h>
int main()
{int a[10],n,i,max=0,min;
printf("enter the no. of element");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
	if(min>a[i])
	{
	min=a[i];
	}
	if(max<a[i])
	{
	max=a[i];
	}
}
printf("maximun value is  %d",max);
printf("\n");
printf("minimum value is  %d",min);
}
