/*

此程序旨在验证EOF的值是1还是0,搞懂EOF

*/

#include <stdio.h>

int main(int argc,char **argv)
{
//	long int nc = 0;
	int c = 0;
	while(getchar() != EOF){
//		nc++;
		c++;
//		printf("%ld\n",nc);
		printf("%d\n",c);
	}
	return 0;
}
