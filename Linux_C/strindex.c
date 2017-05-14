/*

此程序旨在对文本中出现关键词的行进行筛选，类比grep命令（Unix/Linux）

Author	: Renleilei
Date	: 2017-4-29
Version	: 1.00

*/

#include <stdio.h>
#define MAXLINE 1000	/* 最大输入行长度 */

int my_getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";	/* 待查找的模式 */


/* 找出匹配的行并显示出来 */
int main(int argc,char **argv)
{
	char line[MAXLINE];
	int found = 0;

	while(my_getline(line, MAXLINE) > 0){
		if(strindex(line, pattern) >= 0){
			printf("%s",line);
			found++;
		}
	}

	return found;
}

/* getline函数重写，将行保存在 */
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

/*  strindex函数: 返回t在s中的位置，若未找到则返回-1 */
int strindex(char s[], char t[])
{
	int i, j, k;

	for(i=0; s[i] != '\0'; i++)
	{
		for(j=i,k=0; t[k]!='\0' && s[j]==t[k]; j++,k++){}
		if(k>0 && t[k]=='\0'){
			return i;
		}
	}
	return -1;
}
