#include "../build/main.h"

int output_P(struct POLYNOMIAL A)
{
	for (int i = A.degree - 1; i >= 0; --i)
	{
		output_Q(A.factors[i]);
		if(i!=0)
			printf("x^%d+", i);
	}
	return 0;
}