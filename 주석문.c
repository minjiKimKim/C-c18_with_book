/*
원 둘레 계산기
2022.08.04
by minji*/

#include <stdio.h>
int main(void) {
	int r; //반지름 길이
	float length; //원 둘레 길이
	float pi = 3.14; //pi값 고정

	printf("원의 반지름 길이를 입력하세요:");
	scanf("%d", &r); //반지름 입력 
	length = 2 * r * pi;
	printf("%d 반지름을 가진 원의 둘레 : %.2f\n", r, length);
	return 0;

	//프로그램 구조는 항상 크게 보면, 사용할 변수선언, scanf를 통한 값 입력, printf로 값 출력,
	//그 외의 수식들.
}