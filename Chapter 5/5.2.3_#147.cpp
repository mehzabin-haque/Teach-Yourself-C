#include<stdio.h>
#include<string.h>
int main()
{
	char s1[] = "abcd" , s2[] = "abCd" , s3[] = "abcd" ;
	int result ;
	
	//comparing string s1 and s2
	result = strcmp(s1,s2);
	printf("strcmp(s1,s2) = %d ",result);
	
	//comparing string s2 and s3
	printf("strcmp(s1,s3) = %d ",strcmp(s1,s3));
	
	return 0;
}
