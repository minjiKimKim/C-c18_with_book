//문제15
//앞서 본 정수형 최대/최소 >>  <limits.h>
//그렇다면 실수형 최대,최소, 정밀도 >>  <float.h>

#include <stdio.h>
#include <float.h>
int main(void) {
	printf("FLT_MIN : %g, FLT_MAX:%g ,FLT_DIG :%d\n", FLT_MIN, FLT_MAX, FLT_DIG);
	printf("DBL_MIN: %g, DBL_MAX:%g, DBL_DIG:%d\n", DBL_MIN, DBL_MAX, DBL_DIG);
	printf("LDBL_MIN: %g,LDBL_MAX: %g, LDBL_DIG: %d\n", LDBL_MIN, LDBL_MAX, LDBL_DIG);
	//아래부터는 변환명세 대소문자 궁금증[상관없긴 함]
	//printf("%f %F\n", 3.14, 3.14);
	//printf("%lf %Lf\n", 3.24, 3.24);

}