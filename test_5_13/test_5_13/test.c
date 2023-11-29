#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num = 10;
//	uint num1 = 20;
//	return 0;
//}
//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
void test()
{
	static int a = 1;//static修饰局部变量的时候,局部变量出了作用域,不销毁
	a++;
	printf("%d\n",a);
}
int main()
{
	int i = 0;
	while (i<10)
	{
		test();
		i++;
	}
	return 0;
}