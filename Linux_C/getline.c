/*

此程序旨在说明字符数组以及操作字符数组函数

Author  : Renleilei
Date    : 2017-03-24
Version : 1.0

*/

#include <stdio.h>
#define MAXLINE 1024	/* 允许输入行的最大长度 */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc,char **argv)
{
	int len = 0;			/*当前行长度*/
	int max = 0;			/*目前为止发现的最长行的长度*/
	char line[MAXLINE];		/*当前的输入行*/
	char longest[MAXLINE];	/*用于保存最长的行*/

	while((len = my_getline(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0){
		printf("%s\n",longest);
	}

	return 0;
}

/*getline函数：将一行读入到s中并返回其长度*/
int my_getline(char s[], int lim)
{
	int c, i;

	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/*copy函数：将from复制到to，这里假定 to足够大*/
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}
