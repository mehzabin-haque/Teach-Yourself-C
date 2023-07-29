#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int twod[4][5] ;
	int i,j;
	
	for(i=0;i<4;i++) //loop for row
	{
		for(j=0;j<5;j++) // loop for coloumn
		{
			twod[i][j] = i*j ;
		}
	}
	
	for(i=0;i<4;i++) //loop for row
	{
		for(j=0;j<5;j++) // loop for coloumn
		{
			printf("%d ",twod[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
