all: 
	gcc -Wall -I thirdparty -o 100-matches main.c Move.c random.c check.c
check.o: check.c
	gcc -c check.c -o check.o
random.o: random.c
	gcc -c random.c -o random.o
move.o: Move.c
	gcc -c Move.c -o move.o
test/main.o: test/main.c
	gcc -Wall -Werror -I thirdparty -c test/main.c -o test/main.o
test/matches-test.o: test/matches-test.c
	gcc -Wall -Werror -I thirdparty -c test/matches-test.c -o test/matches-test.o
matches-test: test/main.o test/matches-test.o check.o random.o move.o
	gcc test/main.o test/matches-test.o check.o random.o move.o -o matches-test
