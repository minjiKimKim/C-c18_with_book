//1. sizeof연산자
/*
#include <stdio.h>
int main(void) {
	printf("**기본 자료형의 크기**\n");
	printf("char : %d byte\n", sizeof(char));
	printf("short : %d bytes\n", sizeof(short));
	printf("int : %d bytes\n", sizeof(int));
	printf("long : %d bytes\n", sizeof(long));
	printf("long long : %d bytes\n", sizeof(long long));
	printf("unsigned : %d bytes\n", sizeof(unsigned int));

	return 0;
}*/

//2. 캐스트연산자[강제형변환]
//주의) 강제형변환 주의점 : 캐스트연산자는 "변수 자료형 자체"가 아닌, "변수에 저장된 값"의
//                       자료형을 변환시킨다!

#include <stdio.h>
int main(void) {
	float f;
	f = 10 / 4;
	printf("10/4 : %.2f\n", f);
	//보다 정확한 나눗셈을 위해
	f = 10.0 / 4;
	printf("10.0 / 4 : %.2f\n", f);
	f = (float)10 / 4;
	printf("(float)10/4 : %.2f\n", f);

	return 0;
}