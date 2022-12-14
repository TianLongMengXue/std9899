#include <stdio.h>
int main () {
	char a = 60;
	char b = -13;
	/*
		a  = 0011 1100
			 0011 1100 （二进制补码）
		~a = 1100 0011 （二进制补码）
			 1011 1101 = -61
	*/
	printf("~a = %d\n", ~a); // -61
	/*
		|b| = 0000 1101
		      1111 0010
			  1111 0011 (二进制补码)
		~b  = 0000 1100 (二进制补码) = 12
	*/
	printf("~b = %d\n", ~b); // 12
	return 0;
}
