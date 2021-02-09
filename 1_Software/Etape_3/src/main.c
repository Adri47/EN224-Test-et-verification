#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <time.h>

#define MAX 65535

int PGCD(int A, int B)
{
	if (B == 0) return A;
	if (A == 0) return B;
	if ( (A && B) == 0) return 0;

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

int PGCD_2(int A, int B)
{
	if ( (A == 0) && (B == 0) ) return 0;
	else if (B == 0) return A;
	else if (A == 0) return B;

	int C = 0;

	while(B !=0){
		C = A;
		A = B;
		B = C % B;
	}
	return A;
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

	for (int i = 0 ; i < MAX ; i++)
	{
		A = RandA();
		B = RandB();

		printf("PGCD_1(%d,%d) = %d  ----  PGCD_2(%d,%d) = %d\n", A, B, PGCD(A,B), A, B, PGCD_2(A,B));
	}

	printf("(II) End of PGCD program\n");
  return 0;
}
