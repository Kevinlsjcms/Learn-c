#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//int main() {
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	int r = Max(a,b);
//	printf("%d\n", r);
//	/*if(a<b)
//	{ 
//		printf("%d\n",b);
//	}
//	else
//	{
//		printf("%d\n", a);
//	}*/
//	return 0;
//}
int Big(int x,int y)
{
	if (x > 0)
		return y = -1;
	else
		if (x == 0)
			return y = 0;
		else
			if (x < 0)
				return y = 1;
}
//int main() {
//	int x = 0;
//	int y = 0;
//
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else if (x < 0)
//		y = 1;
//	/*int a = Big(x,y);*/
//	printf("%d\n", y);
//	return 0;
//
//
//}
int main()
{
	/*float a = 7.0 / 2;*/
	//int  a = 0;
	//a = 20;
	//printf("%d", a);
	//int a = 10;
	//int b = a++;//后置++，先使用，后加加
	//int b = ++a;//前置++，先加加，后使用
	//printf("%d\n", a);//a=11
	//printf("%d\n", b);//b=10
	//printf("%d\n", b);//c=11
	/*int a = 3.14;
	printf("%d\n", a);*/
	int a = 10;
	int b = 20;
	int c = a > b ? a : b;
	printf("%d\n", c);
	return 0;
}
