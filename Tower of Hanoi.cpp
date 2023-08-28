#include<stdio.h>
void move(int,char,char,char);
int main()
{
	int n;
	printf("enter the no. of rings");
	scanf("%d",&n);
	move(n,'A','B','C');
	return 0;
}
void move(int n,char source,char spare,char dest)
{
	if(n==1)
	printf("\n move from %c to %c",source,dest);
	else
	{
		move(n-1,source,spare,dest);
		move(1,source,dest,spare);
		move(n-1,spare,dest,source);
	}
}
