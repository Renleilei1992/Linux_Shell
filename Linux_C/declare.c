/*

此程序旨在试验声明 以及const限定符修饰的声明

*/

#include <stdio.h>

int main(int argc,char **argv)
{
	int i = 0;
	const int j = 5;

	printf("i=%d\nj=%d\n",i,j);
	i = j + 8;
//	j = j++;      // j变量被const修饰符修饰，read-only, 值无法被修改!
//	j = i + 1;		// j变量无法更改其值，原因同上
	printf("i=%d\nj=%d\n",i,j);

	return 0;
}

