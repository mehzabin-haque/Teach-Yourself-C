#include<stdio.h>
int main()
{
	int a;
	
	for(a = 0 ; a < 101 ; a = a+5)
	{
		printf("%d \n",a);  // initialization a 0 theke korle hobe 0+5=5 and 5+5=10 , last output 100
							// but 1 theke korle hobe 1+5=6 and 6+5=11 ,last output 96 cz a<101 daoa,a<=101 na
	}
	
	printf("Terminating \n");
	
	printf("\xA0 \xA1 \xA2 \xA3");
	
	printf("\a"); // alert
	
	return 0;
}
