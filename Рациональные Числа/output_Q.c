#include "../build/main.h"
int output_Q(struct RATIONAL a)
{
	//printf("���������:\n");
	if (a.sign)
		printf("-");
	output_N(a.numerator);
	printf('/');
	//printf("�����������:\n");
	output_N(a.denominator);
	return 0;
}