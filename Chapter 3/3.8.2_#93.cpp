#include<stdio.h>
#include<conio.h>
int main()
{
	int total=0,i,j;
	
	do
	{
		printf("Enter next number (0 to stop) : ");
		scanf("%d",&i);
		printf("Enter number again : ");
		scanf("%d",&j);
		
		if(i != j)
		{
			printf("Mismatch!!");
			continue;
		}
		
		total = total + i;
		
	}while(i != 0);
	
	printf("Total is %d\n",total);
	
	return 0;
}
