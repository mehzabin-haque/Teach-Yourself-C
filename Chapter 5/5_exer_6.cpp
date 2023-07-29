#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int spaces=0 , periods=0 , commas=0 ;
	int i;
	
	printf("Enter a string : ");
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		switch(str[i])
		{
			case '.' :
				periods++ ;
				break ;
			
			case ',' :
				commas++ ;
				break ;
				
			case ' ' :
				spaces++ ;
				break ;
		}
	}
	
	printf("spaces : %d \n",spaces);
	printf("commas : %d \n",commas);
	printf("periods : %d \n",periods);
	
	
	return 0;
}
