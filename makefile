CC=g++


all: teste.exe
	./teste
	
teste: c_system.o teste.o
	$(CC) -o $@ $^.exe

clean:
	$(RM) teste *.o
