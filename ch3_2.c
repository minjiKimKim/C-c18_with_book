/*
3.2 > 수식 예제
    > 특히 전위연산자 vs 후위연산자!
*/
#include <stdio.h>
int main(void) {
	int a = 0, b = 0, c = 0, d = 0;

	a = ++b;
	c = d++;

	printf("a : %d, b : %d, c : %d, d: %d", a, b, c, d);
	return 0;
}