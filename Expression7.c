#include<stdio.h>

main()
{
	int x ,y,z,F;
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the value of y :");
	scanf("%d",&y);
	printf("Enter the value of z :");
	scanf("%d",&z);
	
	F=(x+y+z)^2;
	F=x*x+y*y+z*z+2*x*y+2*y*z+2*z*x;
	
	printf("\n(x+y+z)^2=%d",F);
}