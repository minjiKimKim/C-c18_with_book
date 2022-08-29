//낙제 과목 수 출력
//|| 단축평가, && 단축평가

#include <stdio.h>
int main(void) {
	int math = 0, english = 0, fail = 0;//수학, 영어, 낙제

	printf("수학 점수 :");
	scanf("%d", &math);

	printf("영어 점수 :");
	scanf("%d", &english);

	// ||단축평가
	math >= 60 || fail++; //math가 60 미만일때만, fail++ 실행[낙제]
	english >= 60 || fail++;

	// &&단축평가
	// fail이 1 이상일 때만 printf 실행
	fail&& printf("낙제 과목 수는 %d개입니다\n", fail);
	
	return 0;
}