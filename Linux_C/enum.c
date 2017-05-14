#include <stdio.h>


enum Month{
	Jan = 1,
	Feb = 2,
	Mar = 3,
	Apr = 4,
	May = 5,
	Jun = 6,
	Jul = 7,
	Aug = 8,
	Sep = 9,
	Oct = 10,
	Nov = 11,
	Dec = 12
};

//此种形式需要在c++中进行，c编译器无法识别这个新的枚举类型
enum dataType{
	CHAT,
	VIDEO,
	SOUND,
	EMOJI
};

int main(int argc,char **argv)
{
//	dataType type;
	printf("%d\n%d\n",Jan,Dec);
	
//	type = CHAT;
//	printf("type = %d\n",type);

	return 0;
}
