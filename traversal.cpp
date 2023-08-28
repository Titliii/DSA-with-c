#include<stdio.h>
int main()
{ int a[10],n,i;
printf("enter no. of element");
scanf("%d",n);
printf("enter the elements");
for(i=0;i<n;i++)
{ scanf("%d",a[i]);
}

for(i=0;i<n;i++)
{

printf("%d\n",a[i]);
}
}
