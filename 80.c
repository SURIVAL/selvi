#include<stdio.h>
void main()
{
    
	int number,remainder,rev=0;
	printf("enter the number:");
	scanf("%d",&number);
	while(number!=0)
	{
		remainder=number%10;
		rev=(rev*10)+remainder;
		number=number/10;
	number=rev;
	while(number!=0)
	{
		remainder=number%10;
		if(remainder%2==1)
		{
		printf("%d ",remainder);
		}
		number=number/10;
	}
	return 0;

}
}

