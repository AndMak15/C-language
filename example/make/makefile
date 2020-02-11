MAIN_FILE=driverArray
OUT_FILE=a

CC=gcc

# GCC main options:
# gcc -c				compiles source files without linking.
# gcc -c				compile source files to object files without linking
# gcc -Dname[=value]	define a preprocessor macro
# gcc -fPIC				generate position independent code for shared libraries
# gcc -glevel			generate debug information to be used by GDB
# gcc -Idir 			add include directory of header files
# gcc -llib 			link with library file
# gcc -Ldir 			look in directory for library files
# gcc -o output 		file	write build output to output file
# gcc -Olevel			optimize for code size and execution time
# gcc -shared			generate shared object file for shared library
# gcc -Uname			undefine a preprocessor macro
# gcc -w				disable all warning messages
# gcc -Wall				enable all warning messages
# gcc -Wextra			enable extra warning messages

CFLAGS=-std=c99 -O0



run: compile $(OUT_FILE).out
	./$(OUT_FILE).out

time: compile $(OUT_FILE).out
	time ./$(OUT_FILE).out

compile: $(MAIN_FILE).o array.o
	gcc $(MAIN_FILE).o array.o -o $(OUT_FILE).out

main.o: $(MAIN_FILE).c
	gcc -c $(MAIN_FILE).c

array.o: ./lib/array.c
	gcc -c ./../lib/array.c

clean:
	rm -rf *.o ./../lib/*.o ./$(OUT_FILE).out