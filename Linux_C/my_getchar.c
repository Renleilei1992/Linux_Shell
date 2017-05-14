/*

此程序旨在弄清楚C中 getchar 等获取输入的函数
int getchar(void)

*/

#include <stdio.h>

int main(int argc,char **argv)
{
	int c = getchar();
	while(c != EOF){
		putchar(c);
//		puts("\n");
//		break;
		c = getchar();//将输入信息同步至屏幕输出，使用ctrl+d可以中断这个动作
	}

	char str_input[1024] = {0};	//{} 也是可以的
	printf("Plz input something: ");
	scanf("%s",&str_input);
	printf("You input : %s\n",str_input);

	return 0;
}
