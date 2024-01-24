CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: loops recursives loopd maindloop maindrec

loops: libclassloops.a

recursives: libclassrec.a

loopd: libclassloops.so mains

recursived: libclassrec.so maindloop maindrec

libclassloops.a: basicClassification.c advancedClassificationLoop.c NumClass.h
	$(CC) $(CFLAGS) -c basicClassification.c -o basicClassification.o
	$(CC) $(CFLAGS) -c advancedClassificationLoop.c -o advancedClassificationLoop.o
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.c advancedClassificationRecursion.c advancedClassificationLoop.c NumClass.h
	$(CC) $(CFLAGS) -c basicClassification.c -o basicClassification.o
	$(CC) $(CFLAGS) -c advancedClassificationRecursion.c -o advancedClassificationRecursion.o
	ar rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassloops.so: basicClassification.c advancedClassificationLoop.c NumClass.h
	$(CC) $(CFLAGS) -fPIC -shared basicClassification.c advancedClassificationLoop.c -o libclassloops.so

libclassrec.so: basicClassification.c advancedClassificationRecursion.c advancedClassificationLoop.c NumClass.h
	$(CC) $(CFLAGS) -fPIC -shared basicClassification.c advancedClassificationRecursion.c -o libclassrec.so

mains: main.c libclassloops.a
	$(CC) $(CFLAGS) main.c -L. -lclassloops -o mains

maindloop: main.c libclassloops.so
	$(CC) $(CFLAGS) main.c -L. -lclassloops -o maindloop

maindrec: main.c libclassrec.so basicClassification.c advancedClassificationRecursion.c advancedClassificationLoop.c NumClass.h
	$(CC) $(CFLAGS) main.c basicClassification.c advancedClassificationRecursion.c advancedClassificationLoop.c -L. -lclassrec -o maindrec -lclassrec

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
