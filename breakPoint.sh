#
#Author : Renleilei
#Date   : 2017-04-09
#Version: 1.00
#

CORRECT="0"
FALSE="1"

MIN="1"
MAX="5"

TASKNUM=$1

echo "可断点程序开始..."
echo $0" 任务开始....参数为: "$1" 参数数量为: "$#

if [ $# -eq "0" ]; then
	echo "输入参数为空！请在执行任务脚本的同时输入执行任务参数!!!"
	exit $FALSE;	
fi

while [ $TASKNUM -le $MAX ]
do
	case "$TASKNUM" in
		"1" )
			echo "执行第"$TASKNUM"个任务开始..."
			echo "DCP_1|S|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			cd ~/Renleilei/Apr-2017/my_shell/DCP
			sh ./dcp_1.sh
			if [ $? -ne 0 ]; then echo "ERROR: DCP_1 执行失败!"; exit $FALSE;fi
			echo "DCP_1|E|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			echo "执行第"$TASKNUM"个任务结束...";;
		"2" )
			echo "执行第"$TASKNUM"个任务开始..."
			echo "DCP_2|S|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			cd ~/Renleilei/Apr-2017/my_shell/DCP
			sh ./dcp_2.sh
			if [ $? -ne 0 ]; then echo "ERROR: DCP_2 执行失败!"; exit $FALSE;fi
			echo "DCP_2|E|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			echo "执行第"$TASKNUM"个任务结束...";;
		"3" )
			echo "执行第"$TASKNUM"个任务开始..."
			echo "DCP_3|S|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			cd ~/Renleilei/Apr-2017/my_shell/DCP
			sh ./dcp_3.sh
			if [ $? -ne 0 ]; then echo "ERROR: DCP_3 执行失败!"; exit $FALSE;fi
			echo "DCP_3|E|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			echo "执行第"$TASKNUM"个任务结束...";;
		"4" )
			echo "执行第"$TASKNUM"个任务开始..."
			echo "DCP_4|S|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			cd ~/Renleilei/Apr-2017/my_shell/DCP
			sh ./dcp_4.sh
			if [ $? -ne 0 ]; then echo "ERROR: DCP_4 执行失败!"; exit $FALSE;fi
			echo "DCP_4|E|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			echo "执行第"$TASKNUM"个任务结束...";;
		"5" )
			echo "执行第"$TASKNUM"个任务开始..."
			echo "DCP_5|S|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			cd ~/Renleilei/Apr-2017/my_shell/DCP
			sh ./dcp_5.sh
			if [ $? -ne 0 ]; then echo "ERROR: DCP_5 执行失败!"; exit $FALSE;fi
			echo "DCP_5|E|"`date` >> `~/Renleilei/Apr-2017/my_shell/DCP/time.log`
			echo "执行第"$TASKNUM"个任务结束...";;
		   *)
			echo "参数输入有误！"
			exit $FALSE;; 
	esac
	TASKNUM=`expr $TASKNUM + 1`
done


