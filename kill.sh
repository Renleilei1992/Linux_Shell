#
#此脚本旨在作为杀死进程的程序
#
#来源：DJKZ组王轩老师的sha.sh
#

ps -ef | grep $1 | grep -v grep >jincheng.txt

cat jincheng.txt|while read LINE
do
	echo "You want to kill "$LINE
	process_id=`echo $LINE | awk '{print $2}'`
	echo $process_id" has been killed!"
	kill -9 $process_id
done
