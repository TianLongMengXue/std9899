/*
	求两个数 m 和 n 的最大公约数
	最大公约数，即能够被 m 和 n 整除的最大值
*/
#include <stdio.h>
int main(void){
	int m = 9, n = 25, i = 0, num = 0, min = 0;
	min = (m > n ? n : m);
	for(i = 1; i < min; ++i){
		if((0 == (m % i)) && (0 == (n % i))) num = i;
	}
	printf("%d和%d的最大公约数为%d\n", m, n, num);
	return 0;
}