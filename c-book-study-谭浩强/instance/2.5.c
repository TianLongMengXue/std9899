/*
	����һ�����ڻ��ߵ���3��������,�ж����ǲ���һ������
	������ֻ�ܱ�1�ͱ����������� 
*/
#include <stdio.h>
int main(void){
	int num = 0, i = 0, leap = 0;
	scanf("%d", &num);
	if(num >= 3){
		for(i = 2; i < num; ++i)
			if(0 == num%i){
				leap = 1;
				break;
			}
		if(leap) printf("%d����һ������\n", num);
		else printf("%d��һ������\n", num);
	}
	else printf("�������ж�����!!!"); 
} 
