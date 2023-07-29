#include<stdio.h>
int main()
{
	float e_w,m_w,m;
	
	printf("Enter your weight : ");
	scanf("%f",&m);
	
	e_w = m*9.8 ;
	m_w = e_w * 0.17;
	
	printf("Effective weight in earth : %f \n",e_w);
	printf("Effective weight in moon : %f \n",m_w);
	
	return 0;
}
