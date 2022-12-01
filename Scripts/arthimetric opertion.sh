#!/usr/bin/bash
read -p "Enter a number:" a
read -p "Enter a number:" b
d=$((a+b))
e=$((a-b))
f=$((a*b))
g=$((a/b))
echo "The addition of two numbers is: $d"
echo "The subraction of two numbers is: $e"
echo "The multiplication of two numbers is: $f"
echo "The division of two numbers is: $g"
