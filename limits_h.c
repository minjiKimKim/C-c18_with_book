/*
<limits.h> ������� ����
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	//���� ���� ������ �ʿ����
	//int a;
	//float b;

	printf("int max : %d, int min : %d\n", INT_MAX, INT_MIN);
	printf("float max : %f, float min : %f\n", FLT_MAX, FLT_MIN);
}