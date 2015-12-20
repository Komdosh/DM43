#include "../build/main.h"
int output_N(struct NATURAL A)
{
	printf("ind:%d\n", A.index);
	for (int i = A.index-1; i >= 0; --i)
		printf("%d", A.number[i]);
	return 0;
}