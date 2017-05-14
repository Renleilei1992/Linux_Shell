/*

   此程序旨在测试if(字符串)是否有结果_for 周庆鹏


Author  :	Renleilei
Date	:	2017-03-28
Version :	1.00

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	char str[10] = "Hello!";
	if(str){
		printf("%s\n",str);
	}

	char str1[10] = {};
	char str2[10] = {'\0'};
	char str3[10];
	if(str3){
		printf("str3??\n");
	}

	char *p = "Hello!";
	char *q = NULL;
	char *k;
	if(k){
		printf("k: %s\n",p);
	}
	printf("%ld %ld %d 0x%x %s %d %s\n",sizeof(q),sizeof(int),p,p,p,q,q);

	int *z = 5;
	int *x = NULL;
	int *c;
	if(c){
		printf("z: %d\n",z);
	}

	return 0;
}
