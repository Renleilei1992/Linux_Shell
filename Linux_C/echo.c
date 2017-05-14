/*

此程序旨在对shell脚本的二次传值问题进行探讨

Author  : Renleilei
Date    : 2017-03-30
Version : 1.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 32

int main(void)
{
	char name[MAXLEN];
	char phone_num[MAXLEN];
/*	string *name;
	char *phone_num; */
	
	printf("Plz input your name: ");
	scanf("%s",&name);
//	scanf("%s",*name);
	printf("Plz input your phone number: ");
	scanf("%s",&phone_num);
	printf("NAME: %s\n",name);
	printf("PHONEM_NUM: %s\n",phone_num);
	
	
	char COUNT[MAXLEN];
	strcpy(&COUNT,&name);
	printf("NAME: %s\n",COUNT);
	strcpy(&COUNT,&phone_num);
	printf("PHONEM_NUM: %s\n",COUNT);
	
	exit(EXIT_SUCCESS);
}
