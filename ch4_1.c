//���� ���� �� ���
//|| ������, && ������

#include <stdio.h>
int main(void) {
	int math = 0, english = 0, fail = 0;//����, ����, ����

	printf("���� ���� :");
	scanf("%d", &math);

	printf("���� ���� :");
	scanf("%d", &english);

	// ||������
	math >= 60 || fail++; //math�� 60 �̸��϶���, fail++ ����[����]
	english >= 60 || fail++;

	// &&������
	// fail�� 1 �̻��� ���� printf ����
	fail&& printf("���� ���� ���� %d���Դϴ�\n", fail);
	
	return 0;
}