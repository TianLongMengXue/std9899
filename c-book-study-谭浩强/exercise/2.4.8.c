/*
	求方程 ax² + bx + c = 0 的根。分别考虑：
	（1）有两个不等的实根
	（2）有两个相等的实根
	二元一次方程的根的判别公式: 
		b² - 4ac > 0 两个实根
		b² - 4ac = 0 两个相同的实根
		b² - 4ac < 0 两个共轭复根
	二元一次方程的根的求解：
		实根：(-b±√(b² - 4ac)) / (2a)
*/
#include <stdio.h>
#include <math.h>
int main(void){
	int a = 0, b = 0, c = 0;
	double root = 0;
	scanf("%d %d %d", &a, &b, &c);
	root = pow(b, 2) - (4 * a * c);
	printf("root=%f\n", root);
	if (root > 0){
		double temp1 = 0, temp2 = 0;
		temp1 = ((double)(-b) + sqrt(root)) / (2 * a);
		temp2 = ((double)(-b) - sqrt(root)) / (2 * a);
		printf("方程%dx²+%dx+%d=0的根：%f和%f\n", a, b, c, temp1, temp2);
	}
	else if(0 == root){
		double temp = 0;
		temp = ((double)(-b)/(2.0*a));
		printf("方程%dx²+%dx+%d=0的根：%f\n", a, b, c, temp);
	}
	return 0;
}