#include<stdio.h>
int main()
{int n,a,b,c,f;
do{
	printf("press 1 for +\n press 2 for-\npress 3 for *\n press 4 for/ \n");
	scanf("%d",&n);
	printf("enter two number");
	scanf("%d%d",&a,&b);
	switch(n)
{
		case 1: c=a+b;
	printf("%d is addition",c);
	break;
	case 2: c=a-b;
	printf("%d is subtraction",c);
	break;
	case 3: c=a*b;
	printf("%d is multiplication",c);
	break;
	case 4: c=a/b;
	printf("%d is division",c);
	break;
	default:
		printf("wrong choice enter");
		break;
}

printf("to continue press 65\n");
scanf("%d",&f);
}
while(f==65);
printf("menu end");
}
