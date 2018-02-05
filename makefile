all: main.c
	gcc -o create main.c
	
run: 
	./create
	convert img.ppm img.png
clean: 
	rm create
	rm img.ppm
	rm img.png
