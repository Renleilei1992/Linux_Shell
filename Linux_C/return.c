/*

此程序旨在对返回值的认知加以巩固
如果头文件包含math.h,编译的过程中需要加入-lm参数调用该库

Author	: Renleilei
Date	: 2017-4-29
Version	: 1.00

*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	float a = 3.0f;
	float b = 9.0f;
	printf("sqrt(3.0f) = %lf\n",sqrt(a));
	printf("sqrtf(9.0f) = %lf\n",sqrtf(b));	
	
	return 0;
}
