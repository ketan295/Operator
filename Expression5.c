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
	
	F=(x+y+z)^3;
	F=x*x*x+y*y*y+z*z*z+3*x*x*y+3*x*x*z+3*y*y*x+3*y*y*z+3*z*z*x+3*z*z*y+6*x*y*z;
	
	printf("\n(x+y+z)^3=%d",F);
}