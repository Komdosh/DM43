/*Преобразование многочлена — кратные корни в простые
* Подгружаемые модули:
* DIV_PP_P - деление многочленов
* GCF_PP_P - нод многочленов
* DER_P_P - производная многочлена
* Бровко Десницкий 4305
*/
#include "../build/main.h"
struct POLYNOMIAL NMR_P_P(struct POLYNOMIAL a) /*Функция написана сборщиком, т.к. не была сдана*/
{
	return DIV_PP_P(a, GCF_PP_P(a, DER_P_P(a)));
}
