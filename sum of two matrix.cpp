#include<stdio.h>
int main()
{int a[10][10],b[10][10],d[10][10];
int i,j,r,c;
printf("enter row& coloum");
scanf("%d%d",&r,&c);
printf("enter matrix element");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{d[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{printf("%d\t",d[i][j]);
}
}

}
