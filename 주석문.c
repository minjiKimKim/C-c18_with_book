/*
�� �ѷ� ����
2022.08.04
by minji*/

#include <stdio.h>
int main(void) {
	int r; //������ ����
	float length; //�� �ѷ� ����
	float pi = 3.14; //pi�� ����

	printf("���� ������ ���̸� �Է��ϼ���:");
	scanf("%d", &r); //������ �Է� 
	length = 2 * r * pi;
	printf("%d �������� ���� ���� �ѷ� : %.2f\n", r, length);
	return 0;

	//���α׷� ������ �׻� ũ�� ����, ����� ��������, scanf�� ���� �� �Է�, printf�� �� ���,
	//�� ���� ���ĵ�.
}