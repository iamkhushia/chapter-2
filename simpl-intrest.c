#include<stdio.h>

main()
{
	//area of simple-interest
	
	float p,r,n,interest;
	
	printf("enter the p amount=");
	scanf("%f",&p);
	
	printf("enter the rate of interest=");
	scanf("%f",&r);
	
	printf("enter the time in year=");
	scanf("%f",&n);
	
	interest=p * r * n / 100;
	
	printf("the simple interest=%.3f\n",interest);
	
}