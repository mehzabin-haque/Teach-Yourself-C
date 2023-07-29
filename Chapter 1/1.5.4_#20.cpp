#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long year,a;
	
	printf("Enter year : ");
	scanf("%lld",&year);
	
	a = year*365*60*60*24 ;
	
	printf("Year to second convertion : %lld",a);
	
	return 0;
}
