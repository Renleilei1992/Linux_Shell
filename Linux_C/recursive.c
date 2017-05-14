/*

本程序旨在对递归方式进行理解
涉及到上台阶方法数目问题、汉诺塔问题、斐波那契数列问题

*/

#include <stdio.h>

int step_method(int i)	//使用递归方式求解台阶问题
{
	if(i == 1){
		return 1;
	}else if(i == 2){
		return 2;
	}else{
		return step_method(i - 1) + step_method(i - 2);
	}
}

//使用递归方式解决汉诺塔问题
int hannuota(int n, char a, char b, char c)
{
	if(n == 1){
		printf("%c -> %c\n",a,c);
	}

	if(n > 1){
		hannuota(n-1,a,c,b);
		printf("%c -> %c\n",a,c);
		hannuota(n-1,b,a,c);
	}
}

int fibonacci(int n)
{
	if( n == 1 || n == 2){
		return 1;
	}

	if( n > 2){
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(int argc,char ** argv)
{
	int step_count = 10;		//台阶问题
	printf("%d step has %d methods!\n",step_count,step_method(step_count));

	hannuota(3,'A','B','C');	//汉诺塔
	
	int fibnum = 10;				//求斐波那契数列的第n项为多少
	printf("%d is %dth in fibonacci sequence!\n",fibonacci(fibnum),fibnum);
	return 0;
}
