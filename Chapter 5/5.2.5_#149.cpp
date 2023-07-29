#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char command[80] , temp[80] ;
	int i,j;
	
	for( ; ; )
	{
		printf("Operation ? ");
		gets(command);
		
		// see if users wants to stop
		if(strcmp(command, "quit") == 0)
		{
			break ;
		}
		
		printf("Enter first number : ");
		gets(temp);
		i = atoi(temp);
		
		printf("Enter second number : ");
		gets(temp);
		j = atoi(temp);
		
		// now performs the operations
		if(strcmp(command, "add") == 0)
		{
			printf("%d\n", i+j);
		}
		
		else if(strcmp(command, "subtract") == 0)
		{
			printf("%d\n", i-j);
		}
		
		else if(strcmp(command, "multiply") == 0)
		{
			printf("%d\n", i*j);
		}
		
		else if(strcmp(command, "divide") == 0)
		{
			printf("%d\n", i/j);
		}
		
		else
		{
			printf("Unknown command : \n");
		}
	}
	
	return 0;
}
