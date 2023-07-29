#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[80];
	int i,j,n;
	
	printf("Please log-in by giving your password : ");
	
	for(i=0;i<3;i++)
	{
		printf("\n\nPassword : ");
		gets(name);
		
		if(strcmp("Tristan",name) == 0)
		{
			break;
		}
	}
	
	if(i==3)
	{
		printf("Access Denied \n");
	}
	
	else
	{
		printf("Log-on Successful");
	}
	
	
	return 0;
}
