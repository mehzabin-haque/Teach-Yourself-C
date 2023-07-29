#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	
	printf("Enter an integer : ");
	scanf("%d",&i);
	
	for(;i;i--)
	{
		printf("\t%d\n",i);
		printf("\a");
	}
	
	return 0;
}
