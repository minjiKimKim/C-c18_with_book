//����14. ȭ���µ�(F)�� �Է¹޾� �����µ�(C)�� ����ϴ� ���α׷� �ۼ�

#include <stdio.h>
int main(void) {
	float C, F;
	printf("ȭ���µ��� �Է��ϼ���: \n");
	scanf("%f", &F );

	C = (F - 32) * 5 / 9;
	printf("%.2f = %.2f\n",F, C);
	return 0;
}