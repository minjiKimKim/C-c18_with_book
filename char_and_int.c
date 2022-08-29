/*1. 대/소문자 변환 >1) 대소문자 아스키값의 일정한 차이를 이용한 경우
//예제 : char형은 1)문자, 2)작은 정수 를 저장할 수 있는 변수이다
#include <stdio.h>
int main(void) {
	char ch = 71;
	int in = 'h'; 
	//****문자상수는 int형이다.
	//char형에는 문자, 작은 정수가 저장이 가능하다.

	ch++;
	in = in - ('a' - 'A');
	printf("ch : %c or %d\n", ch, ch);
	printf("in : %d or %c\n", in, in);
	return 0;
	*/
//2. 대소문자 변환 > ctype.h 헤더파일 이용
#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch = 71;
	int in = 'h';

	ch++;
	in = toupper(in);
	printf("ch : %c or %d\n", ch, ch);
	printf("in : %d or %c\n", in, in);

	return 0;

}