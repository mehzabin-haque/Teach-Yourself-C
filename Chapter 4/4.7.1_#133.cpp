#include<stdio.h>
#include<math.h>
int main()
{
	double i;
	
	for(i=1.0;i<101.0;i++)
	{
		printf("The squareroot of %lf is %lf\n\n",i,sqrt(i));
		printf("Whole number part is : %d\n\n",(int)sqrt(i));
		printf("Fractional part : %lf\n\n",sqrt(i) - (int)sqrt(i));
		printf("\n");
	}
	
	return 0;
}
