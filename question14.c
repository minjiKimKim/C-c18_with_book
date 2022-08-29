//문제14. 화씨온도(F)를 입력받아 섭씨온도(C)로 출력하는 프로그램 작성

#include <stdio.h>
int main(void) {
	float C, F;
	printf("화씨온도를 입력하세요: \n");
	scanf("%f", &F );

	C = (F - 32) * 5 / 9;
	printf("%.2f = %.2f\n",F, C);
	return 0;
}