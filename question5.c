/*
1부터 20까지 10진수, 8진수, 16진상수를 출력하는 프로그램 만들기
단, 반복문 불가, printf여러개로, 8진수는 0, 16진수는 0x로 시작하게 하고, 
각 진수별 출력은 오른쪽 정렬부터.
*/

#include <stdio.h>
int main(void) {
	printf("%d %#o %#x\n", 1, 1, 1);
	printf("%5d %#o %#x\n", 2, 2, 2);
	printf("%5d %#5o %#5x\n", 3, 3, 3);
	printf("%d %#o %#x\n", 4, 4, 4);
	printf("%d %#o %#x\n", 5, 5, 5);
	printf("%d %#o %#x\n", 6, 6, 6);
	printf("%d %#o %#x\n", 7, 7, 7);
	printf("%d %#o %#x\n", 8, 8, 8);
	printf("%d %#o %#x\n", 9, 9, 9);
	printf("%d %#o %#x\n", 10, 10, 10);
	printf("%d %#o %#x\n", 11, 11, 11);
	printf("%d %#o %#x\n", 12, 12, 12);
	printf("%d %#o %#x\n", 13, 13, 13);
	printf("%d %#o %#x\n", 14, 14, 14);
	printf("%d %#o %#x\n", 15, 15, 15);
	printf("%d %#o %#x\n", 16, 16, 16);
	printf("%d %#o %#x\n", 17, 17, 17);
	printf("%d %#o %#x\n", 18, 18, 18);
	printf("%d %#o %#x\n", 19, 19, 19);
	printf("%d %#o %#x\n", 20, 20, 20);

	return 0;
}