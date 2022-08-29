/*
문제4. min(x,y)는 삼항연산자로 가능
(x>y)? y:x;
이와 같이 다음 수학연산을 표현해보자
*/

#include <stdio.h>
int main(void) {
	int x, y, z;
	int result;
	printf(" x:");
	scanf("%d", &x);
	printf("y:");
	scanf("%d", &y);
	printf("z :");
	scanf("%d", &z);

	//min(x,y,z) : 세가지 수 중, 최소값 출력
	result = (y > z) ? z : (x > y) ? y : x;
	printf("최소값은 %d\n", result);

}