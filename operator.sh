#此程序旨在记录各个UNIX Linux运算符
#包括算数运算符、逻辑运算符、括号等符号

echo "Shall we start? (Y/N)"
read INPUT

#if [[ $INPUT = 'Y' || $INPUT = 'y' ]]; then

#此处右值使用 'y' 与 y 均可，在单中括号内 = 符号对字符有效
if [ $INPUT = 'y' -o $INPUT = 'Y' ]; then
	echo "You input Y!"
else
	echo "Something you input wrong!"
fi

echo "operator.sh end..."
