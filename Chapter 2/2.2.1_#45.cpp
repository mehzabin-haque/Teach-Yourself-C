#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter 1st and 2nd number : ");
	scanf("%d %d",&a,&b);
	
	if(b == 0 )
	{
		printf("Can not divide by zero ");
	}
	
	else 
	{
		printf("Answer is %d ", a/b);
	}
	return 0;
}
