/* pound.c --����һ����һ�������ĺ��� */
#include <stdio.h>
void pount(int n);//ANSI����ԭ������
int main(void){
	int times = 5;
	char ch= '!';
	float f = 6.0f;
	
	pound(times);
	pound(ch);
	pound((int)f);
	
	return;
} 

void pound(int n){
	while(n-->0)
		printf("#");
	printf("\n");
}
