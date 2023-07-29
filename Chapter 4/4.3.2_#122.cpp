#include<stdio.h>
#include<conio.h>
int main()
{
	// printf("%hd",42340); // this won't work correctly
	
	// printf("%hu",42340);
	// printf("%.3f", 2309.0);
	
	int long a;
	
	printf("Enter a long integer : ");
	scanf("%ld",&a);
	printf("Output : %ld ",a);
	
	return 0;
}
