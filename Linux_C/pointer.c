/*

此程序旨在对指针的各项功能及特点进行熟悉和测试

Author  : Renleilei
Date	: 2017-03-30
Version	: 1.00

*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char *str = "Hello Pointer!";
	char str1;

	int size_pointer = sizeof(*str);
	int size_pointer1 = sizeof(str1);
	printf("size_pointer = %d\n",size_pointer);	//1
	printf("str = %d\n",str);					//地址
	printf("size_pointer1 = %d\n",size_pointer1);	//1

	return 0;
}
