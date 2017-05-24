all:
	gcc -Wall -o 100-matches main.c Move.c random.c check.c
test/main.o: test/main.c
	gcc -Wall -Werror -o -I thirdparty -c test/main.c -o test/main.o
test/matches-test.o: test/matches-test.c
	gcc -Wall -Werror -I thirdparty -c test/matches-test.c -o test/matches-test.o