#include<stdio.h>

main()
{
	//perimeter of the circle
	
	const float pi=3.14;
	float r,area;
	
	printf("enter redius of the circle=");
	scanf("%f",&r);
	   area=2 *pi *r *r;
	   printf("perimeter of circle=%.3f",area);
}