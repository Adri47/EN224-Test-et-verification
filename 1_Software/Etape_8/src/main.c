#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <assert.h>
#include "pgcd.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <time.h>

int main (int argc, char * argv []){

	printf("(II) Starting PGCD program\n");
   
    int buf_A = 0;
    int buf_B = 0;
	int buf_res = 0;

    FILE *ref_A = fopen("ref_A.txt", "r");
    FILE *ref_B = fopen("ref_B.txt", "r");
	FILE *resu_C = fopen("resu_C.txt", "w");

	for(int i = 0; i < 65536; i++){
      fscanf(ref_A, "%d", &buf_A);
      fscanf(ref_B, "%d", &buf_B);

      buf_res = pgcd(buf_A, buf_B);

      fprintf(resu_C, "%d\r\n", buf_res);
    }

    fclose(ref_A);
    fclose(ref_B);
    fclose(resu_C);

	printf("(II) End of PGCD program\n");
  return 0;
}
