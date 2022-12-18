#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>
int main(int argc, char **argv){
	remove("TEMP");
	
	srand(time(NULL));
	
	int fd = open("TEMP", O_CREAT, 0666);
	if(fd <= 0) {
		fprintf(stderr, "Errore nell'apertura del file\n");
		return 0;
	}
	char c[20];
	while(1){
		sprintf(c, "%d %d ", getpid(), 1+rand()%100);
		printf("%s\n", c);
		write(fd, c, strlen(c));
		sleep(1);
	}
	
}
