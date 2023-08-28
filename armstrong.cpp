#include<stdio.h>
#include<math.h>
int main()
{int n,s=0,p,r;
printf("enter the no");
scanf("%d",&n);
s=0;
p=n;
while(n!=0)
{r=n%10;
s=s+r*r*r;
n=n/10;
}
if(s==p)
printf("%d is the armstrong number",p);
else
printf("%d is not the armstrong number",p);

}

