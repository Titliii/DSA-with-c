#include<stdio.h>
#include<math.h>
int main()
{int n,s=0,i,r,p=0;
printf("enter the no");
scanf("%d",&n);
i=n;
for(i=n;i<n;i++)
{
n=n/10;
}
for(i=n;i<n;i++)
{
r=n%10;
s=s+pow(r,n);}
if(s==i)
printf("%d is the armstrong number",i);
else
printf("%d is not the armstrong number",);

}

