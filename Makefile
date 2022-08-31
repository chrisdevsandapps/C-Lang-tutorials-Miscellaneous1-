

#VAR1 = pointers01
VAR1 = pointers02


VAR2 = hello

love: $(VAR1).c
	# gcc $(VAR1).c -o $(VAR2)

	gcc $(VAR1).c -o ./binaryOutput/$(VAR2)
	# sleep 1
	# echo " "
	# clear
	# ./$(VAR2)

	./binaryOutput/$(VAR2)

clear:
	rm $(VAR2)
