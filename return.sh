echo "Hello Shell!"
echoa "sad"
if [ $? -ne 0 ]; then echo "Wrong happened!"; exit 99; fi

echo "There's no wrong happen!"
