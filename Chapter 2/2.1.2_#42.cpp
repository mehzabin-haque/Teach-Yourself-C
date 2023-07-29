#include<stdio.h>
int main()
{
	int ans,a,b ;
	printf("Enter two numbers : \n");
	scanf("%d %d",&a,&b);
	
	printf("\nWhat is %d + %d ?\n",a,b);
	scanf("%d",&ans);
	
	if (ans == a+b)
	{
		printf("\nRight !");
	}
	
	else
	{
		printf("\nSorry, you're wrong.\n");
		printf("The ans is %d",a+b);
	}
	
	return 0;
}
