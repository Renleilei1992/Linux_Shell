/*

此程序旨在实现库函数 strlen (可以使用多种方法实现)

*/

#include <stdio.h>
#include <string.h>

//实现方式1
int my_strlen(char s[])
{
	int i = 0;
	while(s[i] != '\0'){
		i++;   //此处使用++i更佳！结果一致的
	}
	return i;
}

//实现方式2 : 此方法使用了内存中地址之间的差值计算出字符串的长度 指针->地址
int strlen_diy(char *s)
{
	char *p = s;	//*p是传入字符串的首地址（字符数组的第一个）
	while( *p != '\0'){
		p++;		//对地址的二目运算即是地址的移动
	}
	return p - s;
}

int main(int argc,char *argv[])
{
	char str[10] = "Hello!";

	printf("The length of the str = %d\n",my_strlen(str));

	int j = strlen(str);
	printf("The length of the str = %d\n",j);

	int k = strlen_diy(str);
	printf("The length of the str = %d\n",k);

	return 0;
}
