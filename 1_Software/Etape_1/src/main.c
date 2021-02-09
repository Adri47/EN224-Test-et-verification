#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int PGCD(int A, int B)
{

		while(A != B)
		{
			if (A >B)
			{
				A = A - B;

			}else{
				B = B - A;
			}
		}
	return A;
}

int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");

	if (argc > 1){
	int A = atoi(argv[1]);
	int B = atoi(argv[2]);
	printf("PGCD = %d\n", PGCD(A, B));
}

	printf("(II) End of PGCD program\n");
  return 0;
}
