#Author	: Renleilei
#Date	: 2017-04-04
#Version: 1.00
#
#此程序旨在对入参进行判断并设定起始点
#
# "$#" 是传递给脚本的参数个数
# "$0" 是脚本本身的名字
# "$1" 是传递给脚本的第一个参数，以此类推
# "$@" 是传递给脚本的所有参数列表

CORRECT="0"		# 右值为 '0' 也可以，已验证
FALSE="1"

MIN="1"
MAX="10"

echo "您传递的参数个数为: "$#
echo "脚本名称为: "$0
echo "第一个参数为: "$1
echo "参数列表: "$@


echo "可断点重续程序开始...."
echo "您希望从第"$1"个任务开始"

#第一种方法：直接进行入参判断并从输入的参数任务开始(仅需输入开始的任务编号)
#优点：仅需输入开始的编号即可完成之后的所有任务执行
#缺点：无法灵活指定一个范围内的任务或者某几个特殊的编号任务
echo "第一种方法：使用第一个参数进行逻辑判断并自增循环执行之后的任务"
#入参判断,检查非法输入
if [ $1 -ge $MIN ] && [ $1 -le $MAX ]; then
	echo "The Arg you have input is CORRECT!"
else
	echo "The Arg you have input is FALSE!"
	exit $FALSE;
fi

COUNT=$1
echo "Task start with "$COUNT"'s..."
while [ $COUNT -le $MAX ]
do
	echo "Start with "$COUNT"'s Task..."
	case "$COUNT" in
		"1"	)
			echo "No."$COUNT"'s Task begin..."
			#excute 1's task 执行第一个任务，执行结束以";;"结尾
			echo "No."$COUNT"'s Task over!";;
		"2"	)
			echo "No."$COUNT"'s Task begin..."
			#excute 2's task 执行第二个任务
			echo "No."$COUNT"'s Task over!";;
		   *)
			echo "NO "$COUNT"'s Task,Check your input!"
			#exit $FALSE;;
			break;;
	esac
	COUNT=`expr $COUNT + 1`
done


#第二种方法：参数列表 for 循环方法
#优点：可以灵活调用脚本中特定的步骤，比如指定执行第 3、7 号任务;
#缺点：数据中心操作的时候需要输入多个参数，参数量大的时候不推荐;
#缺点：不方便进行入参判断，case里面的判断可以及时判断错误并中断;
echo "第二种方法：使用参数列表并嵌套 for 循环 + case 条件"
for Arg in $@
do
	echo "Now,we'll do No."$Arg"'s Task!"
	case "$Arg"	in
		"1"	)
			echo "No."$Arg"'s Task begin..."
			#excute 1's task 执行第一个任务，执行结束以";;"结尾
			echo "No."$Arg"'s Task over!";;
		"2"	)
			echo "No."$Arg"'s Task begin..."
			#excute 2's task 执行第二个任务
			echo "No."$Arg"'s Task over!";;
		   *)
			echo "NO "$Arg"'s Task,Check your input!"
			exit $FALSE;;
	esac
done	
