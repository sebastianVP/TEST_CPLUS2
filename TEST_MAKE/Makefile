blah: blah.o
	cc blah.o -o blah # RUN 3RO
blah.o: blah.c
	cc -c blah.c -o blah.o # RUN 2ND
blah.c:
	echo "int main(){ return 0;}" >blah.c #RUN 1ST
