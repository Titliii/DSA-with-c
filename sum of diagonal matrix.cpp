#include<stdio.h>
int main()
{int i,j,r,c,s,a[10][10];
printf("enter row & coloum");
scanf("%d %d",&r,&c);
printf("enter matrix element");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{if(i==j)
{s=s+a[i][j];
}
}
}
printf("%d",s);
return 0;
}
