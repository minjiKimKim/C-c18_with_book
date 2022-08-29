//문자 상수 예제
//escape sequence도 문자['']다!!!

#include <stdio.h>
int main(void) {
	printf("\'\\a\' is alert and \'\\b\' is backspace.\n");
	printf("VS\n");
	printf("'\\a' is alert and '\\b' is backspace.\n");
	
	printf("%c%c%c", '\'', 'a', '\''); //변환명세가 %c로 문자니까 그 다음 인자는 문자['']로!!
	printf("%c", '\a');
	printf("I like%c%c%cove \"C\".\n", '\b', '\b', '\b');

	return 0;
}