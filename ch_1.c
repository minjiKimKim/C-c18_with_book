/*
3.1 > 변수 선언 예제
*/
/*#include <stdio.h>
int main(void) {
	int height = 175, int_tmp;
	float weight = 70.0, bmi, float_tmp;
	double bmi_double;

	int_tmp = height * height;
	float_tmp = int_tmp * 0.0001;
	bmi = weight / float_tmp;
	printf("bmi : %.2f\n", bmi);

	return 0;
}*/

//아래는 printf 형태 궁금증
#include <stdio.h>
int main(void) {
	int a = 2, b = 3;
	printf("%d %d %d\n", a, b); //정보를 주지 않으면, 쓰레기값 출력!
	return 0;
}