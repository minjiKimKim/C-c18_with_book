//문제5. 연산자 우선순위 파악문제 
//마지막 수식이 에러가 나는 이유가 뭔지, 그 에러가 컴파일할 때 나는지, 실행할 때 나는지?

#include<stdio.h>
int main(void) {
	int a = 2, b = -3, c = 5, d = -7, e = 11;
	printf("1번 : %d\n", a / b / c); //1번
	printf("2번 : %d\n", 7 + c * --d / e); //2번
	printf("3번 : %d\n", 2 * a % -b + c + 1); //3번
	printf("4번 : %d\n", 39 / -++e - +29 % c);//4번
	printf("5번 : %d\n", a += b += c += 1 + 2); //5번

	//에러이유 마지막문제
	//printf("6번 : %d\n", 7 - +++ a%(3+b)); //6번
	return 0;
}