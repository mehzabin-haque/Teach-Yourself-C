#include<stdio.h>

// compute the volumn of a cube
double volume(double s1, double s2 , double s3)
{
	return s1*s2*s3 ;
}

int main()
{
	double vol ;
	vol = volume(12.2, 5.67, 9.03);
	printf("Volume: %f", vol);
	
	return 0;
}
