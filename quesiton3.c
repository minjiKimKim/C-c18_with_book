//문제3 : 아래 프로그램의 실행결과를 설명해라
//증감연산자에서 후위연산자 VS 전위연산자

#include <stdio.h>
int main(void) {
	int a, b = 0, c = 0;
	a = ++b + ++c; //a:2
	printf("a : %d, b:%d, c:%d\n", a, b, c);//2,1,1

	a = b++ + c++; //a:2
	printf("a : %d, b:%d, c:%d\n",a,b,c);//2,2,2

	a = ++b + c++; //a:5
	printf("a : %d, b:%d, c:%d\n",a,b,c);//5,3,3

	a = b-- + --c;//a:5
	printf("a:%d, b:%d, c:%d\n", a, b, c);//5,2,2
	return 0;


}