//���� : _Bool��
//_Bool���� ������ "0 �Ǵ� 1"�� ����ȴ�!
//����! : ���� ��ü�� �濡�� ������ 0, ���� 0�̿��� ��
//      : _Bool�� ������ 0�� 1�� �����!

#include <stdio.h>
#include <stdbool.h>
int main(void) {
	bool a, b, c;
	int in = 1024;

	a = true; //stdbool.h�� ���� 1�� true��, 0�� false�� ǥ������
	b = false;
	c = a + b + in;

	printf("a : %d, b : %d, c: %d\n", a, b, c);

	
}