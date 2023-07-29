#include<stdio.h>

double avg()
{
	int i;
	double sum=0.0 , num ;
	for(i=0;i<10;i++)
	{
		printf("Enter next number : ");
		scanf("%lf",&num);
		sum = sum + num ;
	}
	
	return sum/10.0 ;
}

int main()
{
	printf("%f",avg());
	
	return 0;
}
