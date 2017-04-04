#
#
#此程序旨在熟悉脚本中逻辑判断的各种形式
#

# [ -f "somefile" ] 判断是否为文件
# [ -x "/bin/ls" ]	判断是否具有可执行权限
# [ -n "$var" ]		判断变量是否有值
# [ "$a" = "$b" ]	判断$a与$b是否相等
# -r file　　　　　用户可读为真
# -w file　　　　　用户可写为真
# -x file　　　　　用户可执行为真
# -f file　　　　　文件为正规文件为真
# -d file　　　　　文件为目录为真
# -c file　　　　　文件为字符特殊文件为真
# -b file　　　　　文件为块特殊文件为真
# -s file　　　　　文件大小非0时为真
# -t file　　　　　当文件描述符(默认为1)指定的设备为终端时为真
# -ne —比较两个参数是否不相等
# -lt —参数1是否小于参数2
# -le —参数1是否小于等于参数2
# -gt —参数1是否大于参数2
# -ge —参数1是否大于等于参数2
# -f — 检查某文件是否存在（例如，if [ -f "filename" ]）
# -d — 检查目录是否存在
# if [  `echo $str | grep -e regexp`  ];then  匹配字符串


exit 2;
echo "???!"

#!/bin/sh
# 判断文件是否存在
# date：2017/4/4

YACCESS=`date -d yesterday +%Y%m%d`
FILE="access_$YACCESS.log.tgz"
cd /data/nginx/logs
if [ -f "$FILE" ];then
	echo "OK"
else
	echo "error $FILE" > error.log
	mail -s "$FILE backup fail" test123@jb51.net <error.log
fi


#!/bin/sh
# 清除相关文件，并按时间段记录日志
# date：2017/04/04
#
DIR=/data/img_cache
DAY=`date +"%Y-%m-%d %H:%M"`
NUM=`ls $DIR |wc -l`
DIRNAME=`ls $DIR| grep leveldb | head -n 1 | awk '{print $NF}'`
if [[ $NUM -gt 3 ]];then
    rm -rf $DIR/$DIRNAME
	echo "---------$DAY----($DIR)--------------" >> /tmp/img_cache.log
    echo "$DIRNAME Deleted successful" >> /tmp/img_cache.log
fi
