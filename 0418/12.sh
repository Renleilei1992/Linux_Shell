sh 1.sh
echo "1.sh end!"
sh 2.sh
if [ $? -ne 0 ]; then echo "ERROR: 2.sh!!"; exit 1;fi
echo "2.sh end!"
date

