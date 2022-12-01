#!/usr/bin/bash
read -p "Enter a number:" a
read -p "Enter a number:" b
if [ $a == $b ];then
	echo "The entered numbers are equal"
else
	echo "The entered numbers are not equal"
fi
