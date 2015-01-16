#include <stdio.h>

static void fun2(void)
{
	printf("%s\t", __func__);
	printf("%s\n", __func__);
}

int main(void)
{
	printf("hello world\n");

	getchar();

	fun2();
	
	getchar();
	getchar();
	getchar();

	return 0;
}
