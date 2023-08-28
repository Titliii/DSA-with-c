#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],str3[20]=" ";
	int i,j,k=0,l,l2;
	printf("enter name");
	gets(str1);
	printf("enter department");
	gets(str2);
	l=strlen(str1)-1;
	l2=strlen(str2)-1;
	
	for(i=0;str1[i]!='\0';i++)
	{
	str3[k]=str1[i];
	k++;	
	}

	for(i=0;str2[i]!='\0';i++)
	{
	str3[k]=str2[i];
	k++;	
	}
	puts(str3);
	return 0;
}
