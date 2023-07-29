#include<stdio.h>

float convert(float a);

int main()
{
	float dollar,pound;
	printf("Enter the amount in dollars : ");
	scanf("%f",&dollar);
	
	pound = convert(dollar);
	
	printf("%f dollar converted into %f pound.",dollar,pound);
	
	return 0;
}

float convert(float a)
{	
	return a*.5;
}
