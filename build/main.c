#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "main.h"
#include "natural.h"
#include "integer.h"
#include "rational.h"
#include "polynom.h"

int main(int argc, char* argv[])
  {
  bool repeat = true;

  while ( repeat )
    {
    system("cls");
    setlocale (LC_ALL, ".1251");

    /* Main menu */
    printf ("1. %s\n", "Действия с натуральными числами");
    printf ("2. %s\n", "Действия с целыми числами");
    printf ("3. %s\n", "Действия с рациональными числами");
    printf ("4. %s\n", "Действия с многочленами");
    printf ("5. %s\n", "Выход из программы");

    _uint16 menu_item = 0;
    while ( (menu_item < 1) || (menu_item > MENU_EXIT) )
      {
      printf ("%s", "Выберите пункт меню: ");
      scanf ("%d", &menu_item);

      if ( (menu_item < 1) || (menu_item > MENU_EXIT) )
        printf ("%s\n", "Неверный ввод!");
      }

    system ("cls");
    int item = 0;

    switch (menu_item)
      {
      case MENU_NATURAL:
        printf ("1. %s\n", "Сравнение чисел");
        printf ("2. %s\n", "Проверка на равенство нулю");
        printf ("3. %s\n", "Добавление единицы");
        printf ("4. %s\n", "Сложение");
        printf ("5. %s\n", "Вычитание");
        printf ("6. %s\n", "Умножение на цифру");
        printf ("7. %s\n", "Умножение на 10 в степени k");
        printf ("8. %s\n", "Умножение чисел");
        printf ("9. %s\n", "Вычитание числа, умноженного на цифру");
        printf ("10. %s\n", "Вычисления первой цифры деления большего \
                натурального на меньшее, домноженное на 10^k");
        printf ("11. %s\n", "Частное от деления");
        printf ("12. %s\n", "Остаток от деления");
        printf ("13. %s\n", "НОД двух чисел");
        printf ("14. %s\n", "НОК двух чисел");
        item = 0;
        while (item < 1 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 1 || item > 15)
            printf ("Неверный ввод!\n")
          }
      break;

      case MENU_INTEGER:
        printf ("1. %s\n", "Абсолютная величина числа");
        printf ("2. %s\n", "Определение положительности числа");
        printf ("3. %s\n", "Умножение числа на -1");
        printf ("4. %s\n", "Преобразование натурального в целое");
        printf ("5. %s\n", "Преобразование целого неотрицательного в натуральное");
        printf ("6. %s\n", "Сложение");
        printf ("7. %s\n", "Вычитание");
        printf ("8. %s\n", "Умножение");
        printf ("9. %s\n", "Частное от деления");
        printf ("10. %s\n", "Остаток от деления");
        printf ("11. %s\n", "Возврат в меню");
        item = 0;
        while (item < 1 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 1 || item > 15)
            printf ("Неверный ввод!\n")
          }
      break;

      case MENU_RATIONAL:
        printf ("1. %s\n", "Сокращение дроби");
        printf ("2. %s\n", "Проверка на целое");
        printf ("3. %s\n", "Преообразование целого в дробное");
        printf ("4. %s\n", "Преобразование дробного в целое");
        printf ("5. %s\n", "Сложение");
        printf ("6. %s\n", "Вычитание");
        printf ("7. %s\n", "Умножение");
        printf ("8. %s\n", "Деление");
        printf ("9. %s\n", "Возврат в меню");
        item = 0;
        while (item < 1 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 1 || item > 15)
            printf ("Неверный ввод!\n")
          }
      break;

      case MENU_POLYNOMS:
        menuPolynom();
        printf ("1. %s\n", "Сложение многочленов");
        printf ("2. %s\n", "Вычитание многочленов");
        printf ("3. %s\n", "Умножение многочлена на рациональное число");
        printf ("4. %s\n", "Умножение многочлена на x^k");
        printf ("5. %s\n", "Старший коэффициент многочлена");
        printf ("6. %s\n", "Степень многочлена");
        printf ("7. %s\n", "Вынесение из многочлена НОК знаменателей коэффициентов \
                            и НОД числителей");
        printf ("8. %s\n", "Умножение многочленов");
        printf ("9. %s\n", "Частное от деления многочленов");
        printf ("10. %s\n", "Остаток от деления многочленов");
        printf ("11. %s\n", "НОД многочленов");
        printf ("12. %s\n", "Производная многочлена");
        printf ("13. %s\n", "Преобразование многочлена - кратные корни в простые");
        printf ("14. %s\n", "Возврат в меню");
        item = 0;
        while (item < 1 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 1 || item > 15)
            printf ("Неверный ввод!\n")
          }
      break;

      case MENU_EXIT:
        repeat = 0;
      break;
      }
    }
  printf ("Нажмите любую клавишу для выхода из программы");

  return 0;
  }
