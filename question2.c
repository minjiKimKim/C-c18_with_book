//컴파일러는 수식에서 가능한 연산자 중 가장 "긴"것을 먼저 토큰으로 취한다.
//가독성 좋게 작성해라
//a+++b가 어떻게 계산되는지 설명해라
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