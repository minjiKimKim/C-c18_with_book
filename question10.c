//����10
//�Ϲ��� ��� ��ȯ
#include <stdio.h>
#include <limits.h>
int main(void) {
	unsigned char a = 100, b = 200, d;
	signed char c = -50;
	d = a + b + c; //int���� unsigned char������[250]
	printf("d = %d\n", d);
	printf("UCHAR_MAX : %d\n", UCHAR_MAX);
	return 0;

}