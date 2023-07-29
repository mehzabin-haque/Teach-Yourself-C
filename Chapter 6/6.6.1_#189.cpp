#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	float *fp, **mfp , val;
	
	fp = &val ;
	mfp= &fp  ;
	
	**mfp = 123.903 ;
	printf("%f \n\t %f",val , **mfp);
	
	return 0;
}
