#include<stdio.h>

main()
{
	int x ,y,F;
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	F=(x-y)^2;
	F=x*x-2*x*y+y*y;
	
	printf("\n(x-y)^2=%d",F);
}