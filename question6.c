//문제6. 매크로 익히기
//<limits.h>헤더파일 : 정수형의 최대/최소에 관한 매크로를 정의하고 있음
//변환명세 주의할 것!
#include <stdio.h>
#include <limits.h>
int main(void) {
	printf("CHAR_MIN : %d, CHAR_MAX : %d\n", CHAR_MIN, CHAR_MAX);
	printf("SCHAR_MIN : %d, SCHAR_MAX : %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("UCHAR_MAX : %d\n", UCHAR_MAX);
	printf("SHRT_MIN : %d ,SHAR_MAX: %d\n", SHRT_MIN, SHRT_MAX);
	printf("INT_MIX : %d,INT_MAX:%d \n", INT_MIN, INT_MAX);
	printf("UINT_MAX : %u\n", UINT_MAX);
	printf("LONG_MIN %ld:,LONG_MAX:%ld\n ", LONG_MIN, LONG_MAX);
	printf("LLONG_MIN: %lld,LLONG_MAX: %lld\n", LLONG_MIN, LLONG_MAX);
	printf("ULLONG_MAX:%llu\n", ULLONG_MAX);

	return 0;


}