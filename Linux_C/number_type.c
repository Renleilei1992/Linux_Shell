/*

本程序旨在搞清楚一部分c语言基础知识

*/

#include <stdio.h>

int main(int argc,char **argv)
{
	//搞清楚 ++a 和 a++的区别，顺便测试一下三目运算符
	int a,b,c,d = 0;
	a = 10;
	b = a++;	//b=10,  a=11;
	c = ++a;	//c=12,  a=12;
	d = 10*a++;	//d=120, a=13;(前++即当前使用的a已经是a+1,后++在使用a之后a自增1)

	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
	printf("ans(a>c ? a:c) = %d\n",a>c ? a:c);
	//搞清楚各个格式输出的区别以及占用内存的大小
	char str[] = "Hello";	//sizeof(str) = 6, "\n"终止符也占一个字节
	char *p = str;			//sizeof(p) = 8,   
	char q = 'c';			//sizeof(q) = 1,
	int n = 1000;			//sizeof(n) = 4, int型的大小为4个字节
	float i = 3.141592653f; //"%f"默认输出最高6位小数;"%.3f"输出3位小数..
	double j = 3.23243432402;//"%f" double型输出依旧遵循浮点型输出规则

	printf("sizeof(str) = %ld\nsizeof(p) = %ld\nsizeof(q) = %ld\nsizeof(n) = %ld\n",sizeof(str),sizeof(p),sizeof(q),sizeof(n));
	printf("p.address = %p\nn.16 = %#x\nn.8 = %o\n",p,n,n);
	printf("i.f = %f\ni.3lf = %.3lf\nj.double = %f\n",i,i,j);
	//da
	
	return 0;
}
