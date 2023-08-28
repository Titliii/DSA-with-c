#include<stdio.h>
int main()
{int n,i,f=0,s=1,next;
printf("enter the series number");
scanf("%d",&n);
printf("%d%d",f,s);
for(i=3;i<=n;i++)
{next=f+s;
printf("%d ",next);
f=s;
s=next;}
}
