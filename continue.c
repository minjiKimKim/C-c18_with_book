//continue�� ����
//1. continue�� �ڿ� �ִ� �ݺ��� ������ ���� �������� ��� �Ѿ�´�
//2. ���̻� ������ �������� �ʾƼ� ó������ �ٽ� �ݺ��� �ϰ� ���� ��

#include <stdio.h>
int main(void) {
	unsigned long long f;
	int n, i;
	while (1) {
		printf("����� ���� ���� �Է��ϼ��� :");
		scanf("%d", &n);
		if (n < 0) {
			printf("������ �Է��߾��. ����� �Է��ϼ���\n");
			continue;
		}

		for (f = i = 1; i <= n; i++)
			f *= i;
		printf("%d! = %llu\n", n, f);
		break;

		//continue�� ������ ��� ����� �Ѿ��
	}

	return 0;
}