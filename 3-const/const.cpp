#include <stdio.h>

//����const �������ڷ��ű��з��볣��
void test01()
{
	const int c = 0;
	int* p = (int*)&c;

	printf("Begin ....\n");

	*p = 5;

	printf("c=%d \n", c);
	printf("End ...\n");
}

//ָ������ǻ�����ڴ�
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