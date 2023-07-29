#include<stdio.h>
#include<string.h>
int main()
{
	char str[100] , bigstr[100] , command[100];
	int i;
	
	for(;;)
	{
		printf("Enter a string : ");
		gets(str);
		printf("Enter another string : ");
		gets(bigstr);
		
		if(strlen(str) + strlen(bigstr) < 100)
		{
			strcat(str,bigstr);
			printf("%s\n",str);
		
			printf("\nEnter a Command : ");
			gets(command);
		
			if ( strcmp(command,"quit") == 0)
			{
				printf("\n%s\n",str);
				break ;
			}
			
			else
			{
				continue ;
			}
		}
		
		else
		{
			printf("OVERRUN !!!");
			break;
		}
	}
	
	return 0;
}
