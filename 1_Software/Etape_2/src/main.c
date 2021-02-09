#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <time.h>

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

int CheckPGCD(int A, int B)
{
	
}

int RandA()
{
	int A = 0;

	while (A < 1){
		A = rand()%65536;
	}
	return A;
}

int RandB()
{
	int B = 0;

	while (B < 1){
		B = rand()%65536;
	}
	return B;
}

int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");

	//printf("RandA = %d -- RandB = %d\n", RandA(), RandB());
	srand( time( NULL ) );

	int A = 0 ;
	int B = 0 ;

	for (int i = 0 ; i < 200000 ; i++)
	{
		A = RandA();
		B = RandB();
		printf("PGCD(%d,%d) = %d\n", A, B, PGCD(A,B));
	}

	printf("(II) End of PGCD program\n");
  return 0;
}
