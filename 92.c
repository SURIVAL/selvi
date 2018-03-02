#include<stdio.h>
void main()
{
    int x,array[30],y,sum=0;
	scanf("%d",&x);
	for(y=0;y<x;y++)
	{
		scanf("%d",&array[y]);
	}
	for(y=0;y<x;y++)
	{
		sum=sum+array[y];	
	}
	printf("\n%d",sum);
	return 0;
}
