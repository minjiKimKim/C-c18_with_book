//for���� ����ؼ�
//1���� n������ ���� ���ض�
//1���� n������ �� �� ¦������ ��� ���ض�
/*#include <stdio.h>
int main(void) {
	int i = 1, sum = 0, n = 10;

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	printf("���� : %d\n", sum);
	return 0;
}*/

#include <stdio.h>
int main(void) {
	int i = 1, sum = 0, n = 10;
	for (i = 1; i <= n; i += 2) {
		sum += i;
	}
	printf("���� : %d\n", sum);
	return 0;
}