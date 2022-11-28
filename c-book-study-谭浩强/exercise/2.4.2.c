/*
	依次将10个数输入，要求输出其中最大的数
*/
#include <stdio.h>
int main(void){
	int num[10], i = 0, max = 0;
	for(i = 0; i < 10; ++i) scanf("%d", &num[i]);
	for(i = 0; i < 10; ++i) if(max < num[i]) max = num[i];
	printf("max = %d\n", max);
	return 0;
}
