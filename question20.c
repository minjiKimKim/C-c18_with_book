//���� 20
//printf ��°�� ����


#include <stdio.h>
int main(void) {
	printf("%.2f\n", 12.0 / 5.0 * 5.0);
	printf("%.2f\n", 12 / 5.0 * 5.0);
	printf("%.2f\n", 12.0 / 5 * 5.0);
	printf("%.2f\n", 12 / 5 * 5.0);

	return 0;
}

/*
�Ʒ� ������ �Է¹��ۿ� ���� �ñ���
#include <stdio.h>
int main(void) {
	int a;
	float b;
	char c;
	
	scanf("%d %f %c", &a, &b, &c);
	printf("%d %f %c\n", a, b, c);

	return 0;
}
*/