#ifndef MAIN
#define MAIN
#include "stdlib.h"
#include "natural.h"
#include "integer.h"
#include "rational.h"
#include "polynom.h"
#include "inputs.h"

/* Именованные константы */

#define POSITIVE 0
#define NEGATIVE 1

#define MENU_NATURAL 1
#define MENU_INTEGER 2
#define MENU_RATIONAL 3
#define MENU_POLYNOMS 4
#define MENU_EXIT 5

#define COUNT_NUMBERS 3
/* Типы данных */
struct NATURAL
  {
  int *number; // указатель на массив цифр числа
  int index;  //номер старшего разрядаA
  };

struct INTEGER
  {
  struct NATURAL natural_part;  // модуль числа
  short sign; // знак числа (0 - положительное, 1 - отрицательное)
  };

struct RATIONAL
  {
  struct NATURAL numerator;  // числитель
  struct NATURAL denominator;  // знаменатель
  short sign; // знак
  };

struct POLYNOMIAL
  {
  struct RATIONAL* factors;  // указатель на массив коэффициентов
  int degree; // старшая степень
  };

typedef unsigned short _uint16;

#endif // MAIN
