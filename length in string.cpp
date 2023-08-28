#include<stdio.h>
int main()
{
	char str1[20];
	int i,l=0,y;
	printf("enter the name");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		y=l++;
	}
 printf("the length of the string=%d",y+1);
 return 0;
}
