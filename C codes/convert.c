/* pound.c --定义一个带一个参数的函数 */
#include <stdio.h>
void pount(int n);//ANSI函数原型声明
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
