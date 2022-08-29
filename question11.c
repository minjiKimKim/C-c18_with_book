//문제11
//수식에는 값과 "형"이 있다.
//수식의 형 관련 >1)자동형변환 2)강제형변환-캐스트연산자
//수식의 형을 알고 싶을 때는 sizeof연산자를 쓰자
#include <stdio.h>
int main(void) {
	char c = 'A';

	printf("sizeof(c) = %u\n", sizeof(c));//char형
	printf("sizeof('A') = %u\n", sizeof('A'));//**문자상수 자체는 int형이다
	printf("sizeof(c+c) = %u\n", sizeof(c + c));//int형[정수승격]
	printf("sizeof(c='A') = %u\n", sizeof(c = 'A'));//char형

	return 0;

}