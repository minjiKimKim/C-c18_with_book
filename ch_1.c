/*
3.1 > ���� ���� ����
*/
/*#include <stdio.h>
int main(void) {
	int height = 175, int_tmp;
	float weight = 70.0, bmi, float_tmp;
	double bmi_double;

	int_tmp = height * height;
	float_tmp = int_tmp * 0.0001;
	bmi = weight / float_tmp;
	printf("bmi : %.2f\n", bmi);

	return 0;
}*/

//�Ʒ��� printf ���� �ñ���
#include <stdio.h>
int main(void) {
	int a = 2, b = 3;
	printf("%d %d %d\n", a, b); //������ ���� ������, �����Ⱚ ���!
	return 0;
}