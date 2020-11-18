all: clean install run

install: fcalculator

clean:  
	rm -rf f.o io.o master.o fcalculator

run: fcalculator
	./fcalculator

fcalculator: master.o io.o f.o
	gcc -o fcalculator master.o io.o f.o

master.o: master.c
	gcc -c master.c 

io.o: io.c
	gcc -c io.c

f.o: f.c
	gcc -c f.c
