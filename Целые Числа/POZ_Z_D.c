#include "../build/main.h"
//����������� ��������������� ����� (1 - �������������, 0 � ������ ����, 2 - �������������)
int POZ_Z_D(struct INTEGER A)
{
  if(!A.natural_part.index)
    return 0;
  return (A.sign+1);
}
