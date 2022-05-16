#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	FILE *fipt;
    char array[51][80];
		int i=0;
    srandom(getpid());
	fipt = fopen(argv[1], "r");
	if (fipt == NULL) {
		printf("Error/n");
		exit(-1);
	}
    while(i<51){
        fgets(arr[i],80, input);
        i++;
    }
    printf(arr[random()%51]);
}