#define KEY AlbertIsGood
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        int main(int argc, char* argv[]) {
				
				char testkey[] = "Test123";
				char key[] = "AlbertIsGood";

                printf("Hello World \n");

#ifdef DEBUG
				printf("You passed in this many arguments :  %d \n", argc-1);

				for(int tmp=0;tmp<argc;tmp++) {
					printf("You passed in :  %s \n", argv[tmp]);
				}
#endif 

				if(argc <= 1) {
					printf("You passed in zero arguments. Exiting. \n");
                	return EXIT_FAILURE;
				} 

				else 

				if (!strcmp(testkey,argv[1])) {
					printf("Test mode pass. \n");
				}
	
				else if (!strcmp(key,argv[1])) {
					printf("Your PIN is 1324. \n");
				}
				else {
					printf("Sorry - unrecognized input.\n");
				}

                return EXIT_SUCCESS;
}
