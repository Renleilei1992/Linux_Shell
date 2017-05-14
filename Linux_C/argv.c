/*

此程序旨在对C语言的入参进行认知，入参数量，入参判断等

Author  : Renleilei
Date   	: 2017-04-04
Version	: 1.00

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	if(argc < 2){
		printf("usage: argv lost!\n");
		return 1;
	}else{
		printf("Arg num: %d\n",argc);
	}

	int m = atoi(argv[1]);
	char *c = argv[2];
//	char ch = atoi(argv[3]);
	char ch1 = argv[3][0];
//	char ch1_1 = argv[3];
	char ch2 = argv[4][0];
	char *str = "Hello C!";
	printf("argv[1] = %d\n",m);
	printf("argv[2] = %s\n",c);
	printf("argv[3] = %c\n",ch1);
//	printf("argv[3] = %c\n",ch1_1);
	printf("argv[4] = %c\n",ch2);
	printf("str = %s\n",str);
	printf("c's addr: 0x%x argv[2]'s addr: 0x%x\n",c,argv[2]);
	printf("argv[2]'s val: %s  addr:%p\n",argv[2],*argv[2]);

	return 0;
}
