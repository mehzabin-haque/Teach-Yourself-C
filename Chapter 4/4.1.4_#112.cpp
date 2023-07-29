#include<stdio.h>
#include<conio.h>
int main()
{
	/* unsigned short int loc_counter ;
	
	scanf("%hu",&loc_counter);
	
	printf("Output %hu ",loc_counter); */
	
	unsigned long int distance ;
	
	printf("Enter the distance in miles : ");
	scanf("%lu",&distance);
	
	printf("%ld seconds takes to travel that distance",distance/186000);
	
	return 0;
}

