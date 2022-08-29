//1. 개행문자 없이 printf
/*
#include <stdio.h>

int main(void) {
	printf("hello ");
	printf("world");
}
*/
//2. 개행문자와 같이 printf

#include <stdio.h>
int main(void) {
	printf("hello\n");
	printf("world");
}