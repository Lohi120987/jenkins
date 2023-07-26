fact_big.exe:main.o fact.o big2.o
	gcc -o fact_big.exe  main.o fact.o big2.o
main.o:main.c
	gcc -c main.c
fact.o:fact.c
	gcc -c fact.c
big2.o:big2.c
	gcc -c big2.c
