/*LED_P_Z
��������:
	������� ���������� ������� ����������� ����������
������������ ������:
	�����������
�������� ����������:
	st - ���������

������� ������
������� �����
4306
*/
#include "../build/main.h"
struct RATIONAL LED_P_Z(struct POLYNOMIAL st)
{
return st.factors[st.degree];
}