// Подгружаемые модули:
//SUB_NN_N - вычитание из первого большего числа, второе меньшее или равное
//MUL_ND_N - умножение на цифру
//COM_NN_D - сравнение двух чисел
// Прототип struct NATURAL SUB_NDN_N(struct NATURAL A, struct NATURAL B, struct NATURAL c), где
// 1-й параметр - уменьшаемое
// 2-й параметр - вычитаемое
// 3-й параметр - цифра, на которую умножаем, в случае неотрицательного результата
// Возвращает результат вычитания из натурального другого натурального,
//     умноженного на цифру, в случае неотрицательного результата
// Филькина - Никифоров - 4305
#include "../build/main.h"

struct NATURAL SUB_NDN_N(struct NATURAL A, struct NATURAL B, int c)
{
	struct NATURAL r, t;
	return (r = (COM_NN_D(A, t = MUL_ND_N(B, c)) != 1) ? SUB_NN_N(A, t) : SUB_NN_N(A, B));
}
