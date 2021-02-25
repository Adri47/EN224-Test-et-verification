#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <assert.h>
#include "pgcd.h"

int pgcd(int A, int B)
{
	assert (A < 65536);
  assert (B < 65536);
	assert (A >= 0);
  assert (B >= 0);

  int tempoA = A;
  int tempoB = B;

  if (B == 0) return A;
	if (A == 0) return B;
	if ( (A && B) ==0) return 0;

		while(A != B)
		{
			if (A >B)
			{
				A = A - B;

			}else{
				B = B - A;
			}
		}

    assert(A>=0);
    assert(A<=tempoA);
    assert(A<=tempoB);
    assert( (tempoA%A) == 0);
    assert( (tempoB%A) == 0);


	return A;
}
