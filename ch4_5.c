//4.7
//for������ ������ i�� "for"�������� ��밡���� ������,
//for�� ������ �� ������ �������

#include <stdio.h>
int main(void) {
	int i = 1, sum = 0, n;
	printf("������ �Է��ϼ���:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		sum += i;

	printf("1���� %d������ ��: %d\n", i - 1, sum);
	return 0;
}