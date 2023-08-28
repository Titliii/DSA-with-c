#include<stdio.h>
int main()
{int n,i=1;
float s=0,t;
printf("enter the series number");
scanf("%d",&n);
do 
{t=(float)1/i;
s=s+t;
i++;
}
while(i<=n);
printf("%f",s);
}
