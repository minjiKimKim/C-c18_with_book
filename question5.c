/*
문제5. putchar()함수에 대해 알아보자
*/
//putchar()함수는 문자를 화면에 출력하고, 출력한 문자의 아스키코드값을 리턴한다.
#include <stdio.h>
int main(void) {
	for (putchar('1'); putchar('2'); putchar('3'))
		putchar('4');

	return 0;

}
