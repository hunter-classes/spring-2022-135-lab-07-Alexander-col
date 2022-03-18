main: main.o unindent.o
	g++ -o main main.o unindent.o

clean: 
	rm -f main.o funcs.o