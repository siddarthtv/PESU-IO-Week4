a.out: client.o mystack.o
	gcc client.o mystack.o
client.o: client.c mystack.h
	gcc -c client.c 
mystack.o: mystack.c mystack.h
	gcc -c mystack.c
