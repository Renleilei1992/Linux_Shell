#
#
#
#
#

ARG=$1

echo "------------------------"
echo "您传递的参数个数为: "$#
echo "脚本名称为: "$0
echo "第一个参数为: "$ARG
echo "参数列表: "$@
echo "------------------------"

chmod 777 *
sh ./arg1.sh $ARG

echo $0"执行完毕！---------"

