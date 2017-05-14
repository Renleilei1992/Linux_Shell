/*

此程序旨在对单词计数功能的理解

Author : Renleilei
Date   : 2017-03-24
Version: 1.0

*/

#include <stdio.h>

#define IN 1	//在单词内部
#define OUT 2	//在单词外部

int main(int argc,char **argv)
{
	int c, n1, nc, nw, state;	//n1为行数,nc为字符数,nw为单词数

	state = OUT;
	n1 = nc = nw = 0;

	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n'){
			++n1;
		}
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		}else if(state == OUT){
			++nw;
			state = IN;
		}
		putchar(c);
	}

	printf("n1=%d n2=%d n3=%d\n",n1,nc,nw);
	return 0;
}
