/*
	有三个数a,b,c,要求按大小顺序把它们输出
*/
#include <stdio.h>
int main(void){
	int a = 5, b = 10, c = 10;
	if(a > b){
		if(a > c){
			if(b > c) printf("a=%d>b=%d>c=%d\n", a, b, c);
			else if(b == c) printf("a=%d>b=%d=c=%d\n", a, b, c);
			else printf("a=%d>c=%d>b=%d\n", a, c, b);
		}
		else if(a == c) printf("a=%d=c=%d>b=%d\n", a, c, b);
		else printf("c=%d>a=%d>b=%d\n", c, a, b);
	}
	else if(a == b){
		if(a > c) printf("a=%d=b=%d>c=%d\n", a, b, c);
		else if(a == c) printf("a=%d=b=%d=c=%d\n", a, b, c);
		else printf("c=%d>a=%d=b=%d\n", c, a, b);
	}
	else {
		if(b > c){
			if(a > c) printf("b=%d>a=%d>c=%d\n", b, a, c);
			else if(a == c) printf("b=%d>a=%b=c=%d\n", b, a, c);
			else printf("b=%d>=%d>a=%d\n", b, c, a);
		}
		else if(b == c) printf("b=%d=c=%d>a=%d\n", b, c, a);
		else printf("c=%>b=%d>a=%d\n", c, b, a);
	}
}