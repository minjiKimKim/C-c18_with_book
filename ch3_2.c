/*
3.2 > ���� ����
    > Ư�� ���������� vs ����������!
*/
#include <stdio.h>
int main(void) {
	int a = 0, b = 0, c = 0, d = 0;

	a = ++b;
	c = d++;

	printf("a : %d, b : %d, c : %d, d: %d", a, b, c, d);
	return 0;
}