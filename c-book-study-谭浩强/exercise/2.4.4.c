/*
	求1+2+3+...+100
*/
#include <stdio.h>
int main(void){
	int i = 0, sum = 1;
	for(i = 2; i <= 100; ++i) sum += i;
	printf("1+2+3+...+100=%d\n", sum);
	return 0;
}