//����3 : �Ʒ� ���α׷��� �������� �����ض�
//���������ڿ��� ���������� VS ����������

#include <stdio.h>
int main(void) {
	int a, b = 0, c = 0;
	a = ++b + ++c; //a:2
	printf("a : %d, b:%d, c:%d\n", a, b, c);//2,1,1

	a = b++ + c++; //a:2
	printf("a : %d, b:%d, c:%d\n",a,b,c);//2,2,2

	a = ++b + c++; //a:5
	printf("a : %d, b:%d, c:%d\n",a,b,c);//5,3,3

	a = b-- + --c;//a:5
	printf("a:%d, b:%d, c:%d\n", a, b, c);//5,2,2
	return 0;


}