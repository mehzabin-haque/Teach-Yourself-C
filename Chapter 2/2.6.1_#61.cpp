#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter a number : ");
	scanf("%d",&a);
	
	for(i=a;i>0;i--)
	{
		printf("Number : %d \n",i);
		printf("Square : %d \n",i*i);
		printf("Cube   : %d \n",i*i*i);
		printf("\n\n");
	}
	
	printf("\a");
	
	return 0;
}
