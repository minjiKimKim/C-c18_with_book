//문제1 > 프로그램을 출력해보고, 실행결과를 비교해봐라.
//관계연산자, 등가연산자, 논리연산자 모두 수식의 결과값이 0 아니면 1임!!
//그 중, !연산자[논리연산자]는 변수의 값 자체가 아닌, 수식의 결과를 바꾸는 연산자임을 기억!

#include <stdio.h>
int main(void) {
	char c = 'A'; //'A'=65
	int i = 5, j = 10;

	printf("%d %d %d\n", !c, !!c, !!!c);
	printf("%d %d %d\n", -!i, !- i, !- i - !j);
	printf("%d %d %d\n", -!i, !- i, !- i - !j);
	printf("%d %d %d\n", ! (6 * j + i - c), !i - 5, !j - 10);
	return 0;
}