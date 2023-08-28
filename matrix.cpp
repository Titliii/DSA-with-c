#include<stdio.h>
#define MAX 5
int n=MAX;
int main()
{
int a[n][n],b[n][n],c[n][n],r1,r2,c1,c2,i,j,k,w,x,y,z;
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
        {
          scanf("%d",&a[i][j]);
      }
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
		
			}
		}
	}
	else
	{
	printf("matrix can't multiplied");
    }
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
	printf("\n");	
	}
}
