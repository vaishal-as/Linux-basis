#!/usr/bin/bash

select DRINK in tea coffee water juice apple all close
do
	case $DRINK in
		tea|coffee|juice|all)
			echo "It is available in canteen"
			;;
		water|apple)
			echo "It is available in home"
			;;
		close)
			break
			;;
		*)
			echo "Invalid selection"
			;;
	esac
done
