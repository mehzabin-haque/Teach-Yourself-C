#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char j;
	
	i=0;
	
	for(j=1;j<=100;j++)
	{
		i = j+i ;
	}
	
	printf("Total is %d ",i);
	
	return 0;
}
