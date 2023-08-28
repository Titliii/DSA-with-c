#include<stdio.h>
int main()
{int a[10],i,n,x,mid,lb=0,ub,pos=-1;
printf("eter the no. of element");
scanf("%d",&n);
printf("enter the elements");
ub=n-1;
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("chosse the element");
{
scanf("%d",&x);
}
while(lb<=ub)
{ mid=(lb+ub)/2;
if(x=a[mid])
{pos=mid;
break;
}
else if(x>a[mid])
{lb=mid+i;
}
else
{lb=mid-i;
}
}
if(pos!=-1)
printf("element is present %d", pos+1);
else
printf("element is not present",x);
}
