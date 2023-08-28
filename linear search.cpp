#include<stdio.h>
int main()
{int i,n,pos=-1,x,a[10];
printf("enter the no of element");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("\nenter element to search");
scanf("%d",&x);
for(i=0;i<n;i++)
{if(x==a[i])
{pos=i;
break;
}
}
if(pos!=-1)
printf("item is present & the position is %d",pos);
else
printf("%d is not found",x);
}
