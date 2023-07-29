#include<stdio.h>
int main()
{
	int i,num;
	
	printf("Enter the number you want to test : ");
	scanf("%d",&num);
	
	printf("Factors of the number : ");
	
	for(i=2; i<num ; i++)
	{
		if((num%i) == 0)
		{
			printf("%d, ",i);
		}
	}
	
	return 0;
}
