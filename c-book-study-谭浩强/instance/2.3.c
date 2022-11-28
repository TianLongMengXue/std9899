/*
	判断2000-2500年中哪一个年是闰年,并输出结果
	闰年的规则:能被4但不能被100整除的年份,或者能够被400整除的年份为闰年 
*/
#include <stdio.h>
int main(void){
	int i = 2000;
	for(i = 2000; i < 2500; ++i)
		if((0 == (i % 4) && 0 != (i % 100)) || (0 == (i % 400)))
			printf("%d是闰年\n", i);
	return 0;
} 
