/*
����16
rand()�� ����ؼ� 0���� 9������ ���� �������� "100"�� �����ϰ�,
0���� 9���� ���� ������ ������ ����ϴ� ���α׷� �ۼ�
��, for���� switch�� ����� ��
*/
#include <stdio.h>
#include <stdlib.h> //rand()�Լ�, srand()�Լ� ����
int main(void) {
	int n;
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	int zero = 0;
	for (int i = 0; i < 100; i++) {
		n = rand() % 10;
		printf("%d��° n : %d\n", i, n);
		switch (n) {
		case 0:
			++zero;
			break;
		case 1:
			++one;
			break;
		case 2:
			++two;
			break;
		case 3:
			++three;
			break;
		case 4:
			++four;
			break;
		case 5:
			++five;
			break;
		case 6:
			++six;
			break;
		case 7:
			++seven;
			break;
		case 8:
			++eight;
			break;
		case 9:
			++nine;
			break;	}
	}
	printf("0�� ����:%d\n", zero);
	printf("1�� ����:%d\n", one);
	printf("2�� ����:%d\n", two);
	printf("3�� ����:%d\n", three);
	printf("4�� ����:%d\n", four);
	printf("5�� ����:%d\n", five);
	printf("6�� ����:%d\n", six);
	printf("7�� ����:%d\n", seven);
	printf("8�� ����:%d\n", eight);
	printf("9�� ����:%d\n", nine);
	
}