/*
����4. min(x,y)�� ���׿����ڷ� ����
(x>y)? y:x;
�̿� ���� ���� ���п����� ǥ���غ���
*/

#include <stdio.h>
int main(void) {
	int x, y, z;
	int result;
	printf(" x:");
	scanf("%d", &x);
	printf("y:");
	scanf("%d", &y);
	printf("z :");
	scanf("%d", &z);

	//min(x,y,z) : ������ �� ��, �ּҰ� ���
	result = (y > z) ? z : (x > y) ? y : x;
	printf("�ּҰ��� %d\n", result);

}