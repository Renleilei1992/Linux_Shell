/*

	此程序旨在弄清楚c语言中的字符串

Author  : Renleilei
Date    : 2017-3-29
Version : 1.00
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	char *p = "Hello!" " C";	//字符串这样断开也是可以的,p中是完整的语句

	printf("p = %s\n",p);

	printf("p's address = 0x%x\n",p);

	double ans = sqrt(5);

	printf("ans = sqrt(5) = %lf\n",ans);

	return 99;
//	exit(EXIT_FAILURE);
}
