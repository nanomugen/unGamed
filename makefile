all:	Teste.exe

Teste.exe:	c_system.o	f_system.o	teste.o
	g++	-o	Teste.exe	c_system.o	f_system.o	teste.o
	
c_system.o:	c_system.cpp
	g++	-c	c_system.cpp
	
f_system.o:	f_system.cpp
	g++	-c	f_system.cpp
	
teste.o:	teste.cpp
	g++	-c	teste.cpp