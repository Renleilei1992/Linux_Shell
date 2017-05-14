/*

此程序旨在对输入的年份进行判断是否属于闰年

*/

#include <stdio.h>

int main(int argc,char **argv)
{
	int year = 0;

	//如果需要加入不断判断的功能，使用while死循环包含如下即可，下列功能可以进行封装

	printf("Plz input the year: ");
	scanf("%d",&year);

	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d is leap year!\n",year);
	}else{
		printf("%d is not a leap year!\n",year);
	}

	return 0;
}
