//����20
//c���� �Ǽ����� ������ ����� ���Ѵ� ������ ���п����� ���� ����ϱ⵵ �Ѵ�.
#include <stdio.h>
int main(void){
	float one = 1.0, zero = 0.0, r1, r2;

	r1 = one / zero;
	r2 = -one / zero;

	printf("���Ѵ� * ���Ѵ� = %f\n", r1 * r1);
	printf("���Ѵ� * -���Ѵ� = %f\n", r1 * r2);
	printf("���Ѵ� * 0 = %f\n", r1 * zero);
	printf("-���Ѵ� * 0 = %f\n", r2 * zero);
	printf("1/���Ѵ� = %f\n", one / r1);
	printf("1/-���Ѵ� = %f\n", one / r2);
	printf("���Ѵ� / ���Ѵ� = %f\n", r1 / r1);
	printf("���Ѵ�/-���Ѵ� = %f\n", r1 / r2);
	printf("���Ѵ� - ���Ѵ� =%f\n", r1 - r1);
	printf("���Ѵ� + 1 = %f\n", r1 + one);

	return 0;
	}