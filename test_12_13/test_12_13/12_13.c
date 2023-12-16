#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf_s("%d", &x);
//	if (x < 0)
//		y = 1;
//	else
//		if (x == 0)
//			y = 0;
//		else
//			y = -1;
//	printf("%d",y);
//	return 0;
//}

//操作符

int main()
{
	int a = 7 / 2;
	int b = 7 % 2;
	//取模操作符只能是整数
	printf("%d\n", a);
	printf("%d\n",b);
	//除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数除法
	float  c = 7 / 2.0;
	printf("%.1f\n", c);//.1结果几位数

	return 0;
}

 

