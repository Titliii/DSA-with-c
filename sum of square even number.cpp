#include<stdio.h>
#include<math.h>
int main()
{
int i,n,s=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i%2==0)
{s=s+pow(i,2);
}
}
printf("this is sum of square of even number=%d",s);


}
