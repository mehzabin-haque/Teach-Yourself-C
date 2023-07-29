#include<stdio.h>

int get_a_char()
{
	return 'a' ;
}

int main()
{
	char ch;
	ch = get_a_char();
	printf("%c", ch);
	
	return 0;
}
