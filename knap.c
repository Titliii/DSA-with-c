#include<stdio.h>
#define max 5
void bubble_sort(int);
int n=max;
int z;
int main()
{
int v[n],w[n],p[n],a,b,x,i;

printf("enter the values\n");
//printf("\n");
//scanf("%d",&a);

for(i=0;i<n;i++)
{
	scanf("%d",&v[i]);
}

printf("enter the of weights\n");
//printf("\n");
//scanf("%d",&b);
for(i=0;i<n;i++)
{scanf("%d",&w[i]);
}

printf("enter the capacity");
scanf("%d",&x);	
printf("\n");

printf("ratio values are\n");
for(i=0;i<n;i++)
{
	p[i]=v[i]/w[i];
	printf("%d\n",p[i]);
	
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

for(i=1;i>=p[i]-1;i++)
{
	if(x>0 && w[i]<=x)
	{
		x=x-w[i];
		z=z+v[i];
	}
	else
	{
		if(x>0)
		{
			z=z+v[i]*(x/w[i]);
		}
	}
printf("%f",z);	
}
}
