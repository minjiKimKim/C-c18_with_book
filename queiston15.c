/*
����15
>> rand()�Լ� : "������"�� ���� �����ϴ� �Լ�

*/
#include <stdio.h>
#include <stdlib.h> //rand()�Լ�, srand()�Լ��� �ִ� �������
int main(void) {
	int i, num;

	for (i = 0; i < 10; i++) {
		num = rand() % 2;
		if (num == 1)
			printf("Ȧ��\n");
		else
			printf("¦��\n");
	}
	return 0;
}