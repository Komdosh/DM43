//  ADD_QQ_Q
//  01.05.15.
//  Сложение дробей
#include "../build/main.h"
struct RATIONAL ADD_QQ_Q(struct RATIONAL number1, struct RATIONAL number2)
{
  
  struct NATURAL NOK; //Наименьшее общее кратное
  struct NATURAL factor1,factor2; //Множители
  struct RATIONAL sum;
  
  //Выделение памяти
  //sum.numerator.number = calloc((((COM_NN_D(number1.numerator,number2.numerator))?number1.numerator:number2.numerator).index+1)*sizeof(int));
  //sum.denominator.number = calloc(sizeof(number1.denominator.index+number2.denominator.index)*sizeof(int));
  sum.sign = 0;
  
  if(!(NZER_N_B(number1.denominator))||!(NZER_N_B(number2.denominator)))
    puts("Ошибка! Отрицательный знаменатель на входе!");
    
  else{
    NOK = LCM_NN_N(number1.denominator,number2.denominator);
    
    factor1 = DIV_NN_N(NOK,number1.denominator);
    factor2 = DIV_NN_N(NOK,number2.denominator);
    
    number1.numerator = MUL_NN_N(factor1,number1.numerator);
    number2.numerator = MUL_NN_N(factor2,number2.numerator);
    
    if(number1.sign^number2.sign){ // Если дроби разных знаков
      sum.numerator = SUB_NN_N(number1.numerator,number2.numerator);
      sum.denominator = number1.denominator;
      sum.sign = ((!COM_NN_D(number1.numerator,number2.numerator))?number1:number2).sign; //Выбираем знак суммы
    }                                                                                    //как знак большего числа
    else //Если дроби одного знака
      sum.numerator = ADD_NN_N(number1.numerator,number2.numerator);
      sum.denominator = number1.denominator;
      sum.sign = number1.sign;
  }
  return sum;
}
