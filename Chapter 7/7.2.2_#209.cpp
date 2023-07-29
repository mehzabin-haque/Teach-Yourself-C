#include<stdio.h>

// copy s2 to s1 using recursion
void rcopy(char *s1, char *s2)
{
	if(*s2)
	{
		// if not at the end of s2
		*s1++ = *s2++ ;
		rcopy(s1,s2);
	}
	
	else
	{
		*s1 = '\0' ; // null terminate the string
	}
}

int main()
{
	char str[80];
	
	rcopy(str,"this is a test ");
	printf(str);
	
	return 0;
}
