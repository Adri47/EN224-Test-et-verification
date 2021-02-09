#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <assert.h>
#include "pgcd.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

int main (int argc, char * argv []){

	assert(pgcd(0,0) == 0);
	assert(pgcd(10,0) == 10);
	assert(pgcd(0,56) == 56);
	assert(pgcd(65535,65535) == 65535);
	assert(pgcd(65535,10000) == 5);
	assert(pgcd(10000,65535) == 5);

	printf("(II) Starting PGCD program\n");

	if (argc > 1){
	int A = atoi(argv[1]);
	int B = atoi(argv[2]);
	printf("PGCD = %d\n", pgcd(A, B));
}

	printf("(II) End of PGCD program\n");
  return 0;
}
