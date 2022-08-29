//실수 출력 예제 프로그램
//2가지 방법을 배워 
//1) 칸 맞추기-정수 출력과 동일
//2) 소수점 아래 숫자 조정
#include <stdio.h>
int main(void) {
	float num = 1004.8282;
	
	printf("12345678901234567890\n");

	printf("===%f===\n", num);
	printf("===%10.2f===\n", num);
	printf("===%010.2f===\n", num);
	printf("===%-10.2f===\n", num);
	
	printf("===%2f===\n", num);
	printf("===%.2f===\n", num);

	return 0;
}