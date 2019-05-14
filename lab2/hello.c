#include <stdio.h>

int main(int argc, char *argv[]) {
    //printf("Hello, world!\n");
    if(argc > 2)
    	printf("Erreur: Un seul argument permis\n");
    else{
		printf("Hello %s!\n",argv[1]);

		printf("Program Name Is: %s\n",argv[0]); 
		printf("number of args = %d\n",argc);
	}
    return 0;
}