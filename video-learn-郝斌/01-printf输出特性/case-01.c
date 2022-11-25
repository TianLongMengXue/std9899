#include <stdio.h>
#include <stdlib.h>
int main(){

	int i = 8;
	int j = 8;
	int k = 8;
	int temp = 0;
	// printf("++i=%d\n--i=%d\ni++=%d\ni--=%d\n-i++=%d\n-i--=%d\n",++i,--i,i++,i--,-i++,-i--);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",++i,--i,i++,i--,-i++,-i--);
	// 8
	// 8
	// 7
	// 8
	// -7
	// -8
	
	printf("-j--=%d\n",-j--);//-8
	printf("%d\n", j);
	printf("-j++=%d\n",-j++);//-7
	printf("%d\n", j);
	printf("j--=%d\n",j--);//8
	printf("%d\n", j);
	printf("j++=%d\n",j++);//7
	printf("%d\n", j);
	printf("--j=%d\n",--j);//7
	printf("%d\n", j);
	printf("++j=%d\n",++j);//8
	printf("%d\n", j);
	
	//temp = ++k;
	//printf("++k=%d\n",temp);//9
	//temp = --k;
    //printf("--k=%d\n",temp);//8
	//temp = k++;
    //printf("k++=%d\n",temp);//8
	//temp = k--;
    //printf("k--=%d\n",temp);//9
	//temp = -k++;
    //printf("-k++=%d\n",temp);//-8
	//temp = -k--;
    //printf("-k--=%d\n",temp);//-9
	
	return 0;

}

/*
	由于编译系统对于printf函数的实现方式不同,因此输出参数入、出栈堆的顺序不同
	1. 输出参数分为由左到右、由右到左两种顺序
	2. 输出参数边计算边入栈堆、全部计算完成后一次性入栈堆两种计算方式
	在不同的编译系统中,上述代码的输出结果不一定相同
*/
