//�Ʒ� ������ ���� ������ ��!

#include <stdio.h>
int main(void) {
	int a;
	float b;
	//1. printf 2���� ����
	//1)printf����
	//printf("%d %f\n", 2.5, 1024);
	//2)printf ���� ����
	printf("%d %f\n", 2, 1024.0);
	printf("VS\n");

	//2. scanf ����
	scanf("%d %f", &a, &b);
	printf("%d %.2f\n", a, b);
	return 0;
}