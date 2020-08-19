all:	randevu

randevu:main.o	randevu.o
	gcc	main.o	randevu.o	-o	randevu

main.o:main.c
	gcc	-c	main.c

randevu.o:randevu.c	randevu.h
	gcc	-c	randevu.c

clean:	
	del *.o	randevu.exe
				
