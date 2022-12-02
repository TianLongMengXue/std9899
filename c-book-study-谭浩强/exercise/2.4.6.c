/*
	将100~200之间的素数输出
	素数，即除了值本身和1外，均不能被整除
*/
#include <stdio.h>
int main(void){
	int i = 0, num = 0, leap = 1;
	for(num = 100; num <= 200; ++num){
		leap = 1;
		for(i = 2; i < num; ++i){
			if(0 == (num % i)){
				leap = 0;
				break;
			}
		}
		if(leap) printf("%d是一个素数\n", num);
		// else printf("%d不是一个素数\n", num);
	}
}