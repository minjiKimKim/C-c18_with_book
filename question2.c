//�����Ϸ��� ���Ŀ��� ������ ������ �� ���� "��"���� ���� ��ū���� ���Ѵ�.
//������ ���� �ۼ��ض�
//a+++b�� ��� ���Ǵ��� �����ض�
#include <stdio.h>
int main(void) {
	int a, b;
	a = b = 0;
	printf("a+++b = %d\n", a++ + b); //a:1, a++:0, b:0, a++ + b:0
	printf("a = %d, b = %d\n", a, b);//a:1, b:0

	a = b = 0;
	printf("a+ ++b = %d\n", a + ++b); //a:0, b:1, ++b:1, a+ ++b:1
	printf("a : %d, b:%d\n", a, b); //a:0, b:1

	a = b = 0;
	printf("a++ +b = %d\n", a++ + b); //a:1, a++:0, b:0, a++ +b:0
	printf("a : %d, b:%d\n", a, b);
	return 0;
	


}