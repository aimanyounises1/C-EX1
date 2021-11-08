CC=gcc 
Ar=ar
FLAGS= -Wall -g

all: loops recursives recursived loopd mains maindloop maindrec

mains: main.o basicClassification.o advancedClassification.o  recursives  
		$(CC) $(FLAGS) -o mains main.o basicClassification.o advancedClassification.o libclassrec.a


maindloop: main.o basicClassification.o advancedClassification.o loopd 
		$(CC) $(FLAGS) -o maindloop ./libclassloops.so main.o basicClassification.o advancedClassification.o


maindrec: main.o basicClassification.o advancedClassificationRecursion.o recursived
		$(CC) $(FLAGS) -o  maindrec  ./libclassrec.so main.o basicClassification.o advancedClassificationRecursion.o -lm



loops: basicClassification.o advancedClassification.o 
		$(Ar) -rcs libclassloops.a basicClassification.o advancedClassification.o 


recursives: basicClassification.o advancedClassificationRecursion.o 
		$(Ar) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o 


recursived: basicClassification.o advancedClassificationRecursion.o
		$(CC) -fPIC -shared  -o libclassrec.so basicClassification.o advancedClassificationRecursion.o


loopd: basicClassification.o advancedClassification.o 
		$(CC) -fPIC -shared -o libclassloops.so basicClassification.o advancedClassification.o


basicClassification.o: basicClassification.c NumClass.h
		$(CC) $(FLAGS) -fPIC -c basicClassification.c 


advancedClassification.o : advancedClassification.c NumClass.h
		$(CC) $(FLAGS)  -fPIC -c advancedClassification.c


advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
		$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c 


main.o: main.c NumClass.h
		$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean: 
	rm -f *.o *.a *.so loops recursives recursived loopd mains maindloop maindrec