/*
문제16
rand()를 사용해서 0부터 9까지의 값을 무작위로 "100"개 생성하고,
0부터 9까지 나온 숫자의 개수를 출력하는 프로그램 작성
단, for문과 switch문 사용할 것
*/
#include <stdio.h>
#include <stdlib.h> //rand()함수, srand()함수 포함
int main(void) {
	int n;
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	int zero = 0;
	for (int i = 0; i < 100; i++) {
		n = rand() % 10;
		printf("%d번째 n : %d\n", i, n);
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
	printf("0의 개수:%d\n", zero);
	printf("1의 개수:%d\n", one);
	printf("2의 개수:%d\n", two);
	printf("3의 개수:%d\n", three);
	printf("4의 개수:%d\n", four);
	printf("5의 개수:%d\n", five);
	printf("6의 개수:%d\n", six);
	printf("7의 개수:%d\n", seven);
	printf("8의 개수:%d\n", eight);
	printf("9의 개수:%d\n", nine);
	
}