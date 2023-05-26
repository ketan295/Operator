#include<stdio.h>

main()
{
	int x ,y,F;
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	F=(x-y)^3;
	F=x*x*x-3*x*x*y+3*x*y*y-y*y*y;
	
	printf("\n(x-y)^3=%d",F);
}