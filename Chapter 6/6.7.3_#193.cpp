#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrcat(char *to, char *from)
{
	// find the end of to
	while(*to)
	{
		to++  ;
	} 
	
	//concatenate the string
	while(*from)
	{
		*to++ = *from++ ;
	} 
	
	*to = '\0' ; // null terminates the string 
	
}

int main()
{
	char str[80] ;
	
	strcpy(str, "Ghurte jabo");
	mystrcat(str, " tour dibo");
	printf(str);
	
	return 0;
}
