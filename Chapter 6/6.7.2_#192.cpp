#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrcpy(char *to, char *from)
{
	while(*from)
	{
		*to++ = *from++ ;
	} 
	*to = '\0' ; // null terminates the string 
	
}

int main()
{
	char str[80] ;
	mystrcpy(str, "this is a test");
	printf(str);
	
	return 0;
}
