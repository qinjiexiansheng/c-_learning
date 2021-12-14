#include <stdio.h>

//碰见const 声明是在符号表中放入常亮
void test01()
{
	const int c = 0;
	int* p = (int*)&c;

	printf("Begin ....\n");

	*p = 5;

	printf("c=%d \n", c);
	printf("End ...\n");
}

//指向变量是会分配内存
void test02()
{
	int a =1;
	const int c = a;

	int* p = (int*)&c;

	printf("Begin ....\n");

	*p = 5;

	printf("c=%d \n", c);
	printf("End ...\n");
}

int main()
{
	test02();

	return 0;

}