#include<stdio.h>
#include<conio.h>

float soundspeed(double d);

int main()
{
	/*d=30.0;
	t=50.0;
	
	//printf("%d seconds take to travel %d distance is %d\n",t,d,soundspeed());
	soundspeed();
	
	return 0;
}

// non-general version

float soundspeed()
{
	printf("Travel time %f ",d/1129);
} */
	double d;
	printf("Enter distance in feet : ");
	scanf("%lf",&d);
	
	soundspeed(d);
	
	return 0;
}

// parameterized version
float soundspeed(double d)
{
	printf("Travel time %f",d/1129);
}


