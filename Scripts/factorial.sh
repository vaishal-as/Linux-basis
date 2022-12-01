#!/usr/bin/bash
read -p "Enter a number to find the factorial:" a
b=1
while [ $a -gt 1 ];do
	b=$((b*a))
	((a--))
done
echo "The factorial of $a is: $b"
