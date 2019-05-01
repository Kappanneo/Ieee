build: ieee.c klib
	gcc -o ieee ieee.c klib/klib.o

klib:
	git clone "https://gitlab.com/kappanneo/klib.git"
	make -C klib
