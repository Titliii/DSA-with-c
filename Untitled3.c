#include<stdio.h>
int main()
{
int v[10],w[10],p[10],x,i,j;
//printf("enter the no of value");
//scanf("%d",&a);
/*printf("enter the values");
printf("enter the no of weights");
scanf("%d",&b);
*/
printf("enter the values");
for(i=0;i<a;i++)
{
	scanf("%d",&v[i]);
}
printf("enter the weights");
for(i=0;i<a;i++)
{scanf("%d",&w[i]);
}
printf("enter the capacity");
scanf("%d",&x);	
for(i=0;i<a;i++)
{
	p[i]=v[i]/w[i];
}
printf("ratio values %d",p[i]);

}
void bubble_sort(int p[],int n)
{
	int t,i,j;
    for(i=n;i>0;i--)
	{
	for(j=n;j>n-i;j--)
	{
	if(p[j]>p[j-1])
	{
	t=p[j-1];
	p[j-1]=p[j];
	p[j]=t;
	}
	}
	}
	for(i=0;i<n;i++)
	printf("\t%d",p[i]);
}
