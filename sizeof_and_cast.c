//1. sizeof������
/*
#include <stdio.h>
int main(void) {
	printf("**�⺻ �ڷ����� ũ��**\n");
	printf("char : %d byte\n", sizeof(char));
	printf("short : %d bytes\n", sizeof(short));
	printf("int : %d bytes\n", sizeof(int));
	printf("long : %d bytes\n", sizeof(long));
	printf("long long : %d bytes\n", sizeof(long long));
	printf("unsigned : %d bytes\n", sizeof(unsigned int));

	return 0;
}*/

//2. ĳ��Ʈ������[��������ȯ]
//����) ��������ȯ ������ : ĳ��Ʈ�����ڴ� "���� �ڷ��� ��ü"�� �ƴ�, "������ ����� ��"��
//                       �ڷ����� ��ȯ��Ų��!

#include <stdio.h>
int main(void) {
	float f;
	f = 10 / 4;
	printf("10/4 : %.2f\n", f);
	//���� ��Ȯ�� �������� ����
	f = 10.0 / 4;
	printf("10.0 / 4 : %.2f\n", f);
	f = (float)10 / 4;
	printf("(float)10/4 : %.2f\n", f);

	return 0;
}