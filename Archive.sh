#交互式归档程序,cpio 可以man一下看手册或者上网查一下用法
#Interactive program to restore, backup, or unload
#a directory
echo "Welcome to the menu driven Archive program"
ANSWER=Y
while [ $ANSWER = Y -o $ANSWER = y ]
#该语法在AIX中适用，但在Ubuntu中不适用
#while [[ $ANSWER = Y || $ANSWER = y ]]	
do
	echo _
#Read and validate he name of the directory
	echo "What directory do you want? \c"
	read WORKDIR
	if [ ! -d $WORKDIR ]
	then
		echo "Sorry, $WORKDIR is not a directory"
		exit 1
	fi
#Make the directory the current working directory
	cd $WORKDIR
#Display a Menu
	echo "Make a Choice from the Menu below"
	echo _
	echo "1 Restore Archive to $WORKDIR"
	echo "2 Backup $WORKDIR"
	echo "3 Unload $WORKDIR"
	echo
#Read and Excute the user's selection
	echo "Enter Choice: \c"
	read CHOICE
	case "$CHOICE" in
		"1")
		   	echo "Restoring...";;
		   #cpio -i </dev/rmt0
		"2")
			echo "Backuping...";;
		   #ls | cpio -o >/devrmt0
		"3")
	 		echo "Unloading...";;
		   #ls | cpio -o >/dev/rmt0
	      *)
   			echo "Sorry, $CHOICE is not a valid choice!"
  	esac
#Check for cpio errors
if [ $? -ne 0 ]; then
	echo "A problem has been occurred during the process!"
	if [ $CHOICE = 3 ]; then
		echo "The directory will not be erased!"
	fi
	echo "Please check the device and try again!"
	exit 2
else
	if [ $CHOICE = 3 ]; then
		echo "I'll rm all!"
	fi
fi
echo "Do you want to make another choice?\c"
read ANSWER
done

			 

