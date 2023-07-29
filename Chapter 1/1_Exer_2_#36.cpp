#include<stdio.h>

float o_to_c(float a);

int main()
{
	float cups,ounces;
	printf("Enter the number of ounces : ");
	scanf("%f",&ounces);
	
	cups = o_to_c(ounces);
	
	printf("Ounces to cups convert %f",cups);
	
	return 0;
}

float o_to_c(float a)
{
	return a/8 ;
}
