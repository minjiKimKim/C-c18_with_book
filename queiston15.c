/*
문제15
>> rand()함수 : "무작위"로 수를 생성하는 함수

*/
#include <stdio.h>
#include <stdlib.h> //rand()함수, srand()함수가 있는 헤더파일
int main(void) {
	int i, num;

	for (i = 0; i < 10; i++) {
		num = rand() % 2;
		if (num == 1)
			printf("홀수\n");
		else
			printf("짝수\n");
	}
	return 0;
}