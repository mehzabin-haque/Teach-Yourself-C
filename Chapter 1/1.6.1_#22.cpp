#include<stdio.h>
int main()
{
	float e_days,j_years;
	printf("Enter number of Earth days : ");
	scanf("%f",&e_days);
	
	// now compute Jovian years
	j_years = e_days/ (365.0*12.0);
	
	printf("Equivalent Jovian years : %f",j_years);
	
	return 0;
}
