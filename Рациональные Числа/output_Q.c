#include "../build/main.h"

int output_Q(struct RATIONAL A)
{
	//printf("���������:\n");
	if (A.sign)
		printf("-");
	output_N(A.numerator);
	printf("/");
	//printf("�����������:\n");
	output_N(A.denominator);
	return 0;
}