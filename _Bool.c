//예제 : _Bool형
//_Bool형의 변수는 "0 또는 1"만 저장된다!
//주의! : 논리값 자체의 뜻에서 거짓은 0, 참은 0이외의 값
//      : _Bool형 변수는 0과 1만 저장됨!

#include <stdio.h>
#include <stdbool.h>
int main(void) {
	bool a, b, c;
	int in = 1024;

	a = true; //stdbool.h에 의해 1은 true로, 0은 false로 표현가능
	b = false;
	c = a + b + in;

	printf("a : %d, b : %d, c: %d\n", a, b, c);

	
}