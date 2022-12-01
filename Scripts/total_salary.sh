#!/usr/bin/bash
read -p "Enter total numbers of employee:" a
c=0
while [ $a -gt 0 ];do
	read -p "Enter the salary of employee:" b
	c=$((c+b))
	((a--))
done
echo "The total salary of all employee is: $c"
