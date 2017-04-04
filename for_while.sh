#!/usr/bin/ksh

#数字段形式
for i in {1..10}
do
   echo $i
done

#详细列出（字符且项数不多）
for File in 1 2 3 4 5
do
    echo $File
done

#对存在的文件进行循环
for shname in `ls *.sh`
do
          name=`echo "$shname" | awk -F. '{print $1}'`          
          echo $name
done

#查找循环（ls数据量太大的时候也可以用这种方法）
for shname in `find . -type f -name "*.sh"`
do
          name=`echo "$shname" | awk -F/ '{print $2}'`         
          echo $name
done

#((语法循环--有点像C语法，但记得双括号
for((i=1;i<100;i++))
do
    if((i%3==0))
    then
        echo $i
        continue
    fi
done

#seq形式 起始从1开始
for i in `seq 100`
do
    if((i%3==0))
    then
        echo $i
        continue
    fi
done

#while循环注意为方括号[],且注意空格
min=1
max=100
while [ $min -le $max ]
do
    echo $min
    min=`expr $min + 1`
done  

#双括号形式，内部结构有点像C的语法，注意赋值：i=$(($i+1))
i=1
while(($i<100))
do
    if(($i%4==0))
    then
        echo $i
    fi
    i=$(($i+1))
done

#从配置文件读取，并可以控制进程数量
MAX_RUN_NUM=8
cat cfg/res_card_partition.cfg |grep -v '^$'|grep -v "#" | grep -v grep |while read partition
do       
                nohup sh inv_res_card_process.sh $partition >log/resCard$partition.log 2>&1 &              
                while [ 1 -eq 1 ]
                do
                                psNum=`ps -ef | grep "inv_res_card_process" | grep -v "grep" | wc -l`
                                if [ $psNum -ge $MAX_RUN_NUM ]
                                then
                                              sleep 5
                                else
                                              break
                                 fi                                       
                done               
done


# 三.循环控制语句
# break 命令不执行当前循环体内break下面的语句从当前循环退出.
# continue 命令是程序在本循体内忽略下面的语句,从循环头开始执行
