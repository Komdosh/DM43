#include "../build/main.h"
//����������� ��������������� ����� (1 - �������������, 0 � ������ ����, 2 - �������������)
int POZ_Z_D(struct INTEGER number)
{
  if(!number.natural_part.index)
    return 0;
  return (number.sign+1);
}
