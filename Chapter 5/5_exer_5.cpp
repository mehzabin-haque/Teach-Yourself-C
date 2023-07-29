#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int i=0 , j ;
	
	printf("Enter message : ");
	gets(str);
	
	// code it
	j = strlen(str) - 1;
	
	while(i<=j)
	{
		if(i<j)
		{
			printf("%c%c",str[i],str[j]);
		}
		
		else
		{
			printf("%c",str[i]);
		}
		
		i++ ;
		j-- ;
	}
	
	return 0;
}
