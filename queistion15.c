//����15
//�ռ� �� ������ �ִ�/�ּ� >>  <limits.h>
//�׷��ٸ� �Ǽ��� �ִ�,�ּ�, ���е� >>  <float.h>

#include <stdio.h>
#include <float.h>
int main(void) {
	printf("FLT_MIN : %g, FLT_MAX:%g ,FLT_DIG :%d\n", FLT_MIN, FLT_MAX, FLT_DIG);
	printf("DBL_MIN: %g, DBL_MAX:%g, DBL_DIG:%d\n", DBL_MIN, DBL_MAX, DBL_DIG);
	printf("LDBL_MIN: %g,LDBL_MAX: %g, LDBL_DIG: %d\n", LDBL_MIN, LDBL_MAX, LDBL_DIG);
	//�Ʒ����ʹ� ��ȯ�� ��ҹ��� �ñ���[������� ��]
	//printf("%f %F\n", 3.14, 3.14);
	//printf("%lf %Lf\n", 3.24, 3.24);

}