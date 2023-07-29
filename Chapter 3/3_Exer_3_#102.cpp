#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1;
	
	/*for(;i<11;i++)
	{
		printf("%d\n",i);
	} */
	
	printf("\n \n");
	
	while(i<11)
	{
		printf("%d\n",i);
		i++ ;
	}
	
	printf("\n \n");
	
	do
	{
		printf("%d\n",i);
		i++ ;
	}while(i<11);
	
	return 0;
}
