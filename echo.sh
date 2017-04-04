# It's a shell to show how to get the value !

echo "What's your name?"
echo ":\c"
read name
echo "Welcome $name!"

echo "What's your phone number?"
echo ":\c"
read phone_num
echo "Your phone_num is $phone_num!"

for COUNT in name phone_num
do
	if [ $COUNT -eq 0 ]; then
		echo "0 error!"
	else
		echo "$COUNT"
	fi
done
