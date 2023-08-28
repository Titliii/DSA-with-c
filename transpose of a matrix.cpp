#include<stdio.h>
#include<math.h>
int main()
{int i,j,r,c,a[10][10],b[10][10];
printf("enter row&coloum");
scanf("%d%d",&r,&c);
printf("enetr matirx element");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);
}
}
for(i=0;i<c;i++)
{for(j=0;j<r;j++)
{b[j][i]=a[i][j];
}
}
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{printf("%d\t",b[i][j]);
}
printf("\n");
}
}
