#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[80], *p;
	
	printf("Enter a string : ");
	gets(str);
	p=str;
	
	while(*p != 0)
	{
		*p = toupper(*p);
		p++ ;
	}
	
	printf("%s\n",str); // upperclass string
	
	p=str; // reset p
	
	while(*p != 0)
	{
		*p = tolower(*p);
		p++ ;
	}
	
	printf("%s\n",str); // upperclass string
	
	return 0;
}
