#include<stdio.h>
void main()
{
    int l,b,h,volume,totalsurfacearea;
    printf("enter the value");
	scanf("%d %d %d",&l,&b,&h);
	volume=l*b*h;
	totalsurfacearea=2*((l*b)+(b*h)+(h*l));
	printf("\nVOLUME=%d",volume);
	printf("\nTotalsurfacearea=%d",totalsurfacearea);
	return 0;
}
