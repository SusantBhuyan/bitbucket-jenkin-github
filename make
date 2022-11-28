all : ABR.o assert.o mlk_might_must.o  
	ls
ABR.o: ABR.c
	gcc -c ABR.c
assert.o: assert.c
	gcc -c assert.c
mlk_might_must.o: mlk_might_must.c
	gcc -c mlk_might_must.c
clean:
	rm -rf *.o