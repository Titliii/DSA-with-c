#include<stdio.h>
int fibonacci(int);
main()
{
	int n;
	printf("enter the no. of terms in the series:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	printf("\n fibonacci %d=%d",i,fibonacci(i));
	return 0;
}
int fibonacci(int num)
{if(num<=2)
return 1;
return(fibonacci(num-1)+fibonacci(num-2));
}

