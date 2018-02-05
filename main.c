#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>


void header(int fd){
	char* head = "P3\n500 500\n255\n";
	write(fd, head, strlen(head));
}

void image(){
	int fd = open("img.ppm", O_WRONLY | O_CREAT | O_EXCL , 0644);
	header(fd);
	int i,j;
	for(i=0; i<500; i++){
		for(j=0; j<500; j++){
			char* green = "0 255  0 ";
			write(fd, green, strlen(green));
		}
	
	}
	close(fd);
}

int main(){
	image();
	return 0;
}
