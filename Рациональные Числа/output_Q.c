#include "../build/main.h"
int output_Q(struct RATIONAL a)
{
	printf("���������:\n");
	if (a.sign)
		printf("-");
	for (int i = 0; i < a.numerator.index; ++i)
		printf("%d", a.numerator.number[i]);
	printf("�����������:\n");
	for (int i = 0; i < a.denominator.index; ++i)
		printf("%d", a.denominator.number[i]);
	return 0;
}