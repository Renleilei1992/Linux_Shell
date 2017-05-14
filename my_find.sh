#
#
#此脚本旨在使用find命令模糊查询
#
#
#

echo "You wanto find something's name contains: "$1
find -name "*$1*" -print

echo "The find Result is over!"

