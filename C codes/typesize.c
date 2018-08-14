//* typesize.c --打印类型大小*// 
#include <stdio.h>
int main(void){
	printf("int %u bytes.\n",sizeof(int));
	printf("char %u bytes\n",sizeof(char));
	printf("long %u bytes\n",sizeof(long));
	printf("long long %u bytes\n",sizeof(long long));
	printf("double %u bytes\n",sizeof(double));
	printf("long double %u bytes\n",sizeof(long double));
	return;
}
