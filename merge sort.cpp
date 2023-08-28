#include<stdio.h>
#include<stdio.h>
#define size 100
void merge(int arr[],int beg,int mid,int end)
{
	int i=beg,j=mid+1;
	int k,temp[size],index=beg;
	while((i<=mid)&&(j<=end))
	{
		if(arr[i]<arr[j])
		{
			temp[index]=arr[i];
			i++;
		}
		else
		{
			temp[index]=arr[i];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=arr[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=arr[i];
			i++;
			index++;
		}
	}
	for(k=beg;k<index;k++)
	arr[k]=temp[k];
}
void merge_sort
