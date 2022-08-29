/*
문제12 > 이스케이프 시퀀스 문자 출력
*/
#include <stdio.h>
int main(void) {
	//printf("'\a'");
	printf("'\b'\n");
	printf("abcd\bc\n");
	printf("what?\f\n");
	printf("\f\n");
	printf("ddddddd\ta\vdd\rs\n");
	printf("aaaa\n");
	printf("1234563\r722\n");
	printf("123456\r789\n");
}