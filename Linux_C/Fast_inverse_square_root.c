/*

此程序旨在对wiki百科上的平方根倒数计算法进行重现

Source	: Wiki
Author	: Renleilei
Date	: 2017/4/25

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Q_rsqrt(float number);
double sqrt(double number1);

int main(int argc,char **argv)
{
	float num = 9.0f;
	double num1 = 9.00;
	printf("The root of num is: %lf \n",Q_rsqrt(num));
	printf("The root of num is: %f \n",sqrt(num1));
	printf("\n");
	return 0;
}

float Q_rsqrt(float number)
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y = number;
	i = *(long *)&y;
	//evil floating point bit level hacking
	i = 0x5f3759df - ( i >> 1 );
	//what the fuck?
	y = *(float *)&i;
	y = y*(threehalfs - (x2*y*y));	//1st iteration
//	y = y*(threehalfs - (x2*y*y));	//2nd iteration,this can be removed
	
	return y;
}



