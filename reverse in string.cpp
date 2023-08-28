#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],reverse_str1[20]="";
	int i,j=0,l;
	printf("enter the name");
	gets(str1);
	l=strlen(str1)-1;
	for(i=l;i>=0;i--)
	{
		
		reverse_str1[j]=str1[i];
		j++;	
	}
	puts(reverse_str1);
	return 0;
}
