



#include <stdio.h>

int main(void)
{
	char *p = "Hello!";		//int *p = 6; 与char类型指针的结果相同
	char *p1 = NULL;		//int *p1 = NULL; 与char类型指针的结果相同
	char *p2;				//int *p2; 野指针，与char类型指针的结果相同
	char str[10] = "hello!";
	char str1[10] = {};
	char str2[10];			//if(str/str1/str2) 均等价与 if(1)

	if(p){
		printf("p is true!\n");
	}
	if(p1){
		printf("p1 is true!\n");
	}
	if(p2){
		printf("p2 is true! %s\n",p2);	//等价于 if(1) ,野指针不同于空指针
	}
	return 0;
}
