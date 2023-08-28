#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max,min;
void random_input(int a,int n,int i)
{ srand(time(0));
for(int i=0;i<n;i++)
a[i]=rand()%1000;
}
void display(int a,int n)
{
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
}
void max_min(int a,int i,int j)
{
	int max1,min1,mid;
	{
		if(i==j)
		{
		max=min=a[i];
		}
		else
		{
			if(i==j-1)
			{
				if(a[i]<a[j])
				{
					max=a[j];
					min=a[i];
				}
				else
				{
					max=a[i];
					min=a[j];
				}
			}
			else
			{
					mid(i+j)/2;
					max_min(a,i,mid);
					max1=max;
					min1=max;
					max.min(a,mid+1,j);
					if(max<max1)
					max=max1;
					if(min>min1)
					min=min1;
				
			}
		
		}
	}
}
void main()
{
	int i,n;
	clock_t end,start;
	double h;
	printf("array size");
	scanf("%d",&n);
	int a[n];
	random_input(a,n);
	display(a,n);
	max=a[0];
	min=a[0];
	start=clock();
	max_min(a,1,n-1);
	end=clock();
	h=(double)(end-start)/CLOCKS_PER_SEC;
	printf("max %d",max);
	printf("min %d",min)
	printf("%f sec",n);
}
