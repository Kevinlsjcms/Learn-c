#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////int main() {
////	/*printf("Hello,Word\n");
////	printf("鹏哥66.6");*/
////	//printf("%zu\n", sizeof(char));//表示每种类型的大小
////	//printf("%zu\n", sizeof(short));//表示每种类型的大小
////	//printf("%zu\n", sizeof(int));//表示每种类型的大小
////	//printf("%zu\n", sizeof(long));//表示每种类型的大小
////	//printf("%zu\n", sizeof(long long));//表示每种类型的大小
////	//printf("%zu\n", sizeof(float));//表示每种类型的大小
////	//printf("%zu\n", sizeof(double));//表示每种类型的大小
////	double price = 67;
////	int age = 66;
////	printf("a=%zu", age);
////
////	
////	return 0;
////}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入2个整数
//	scanf("%d %d",&num1,&num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//		return 0;
//
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 2;
//	//输入函数
//	scanf("%d %d",&num1,&num2);
//	//求和
//	int sum = num1 + num2;
//	//输出函数
//	printf("%d",sum);
//	return 0;
//}
//
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入函数
//	scanf("%d %d",&num1,&num2);
//	//求和
//	int a = num1 + num2;
//	//输出函数
//	printf("%d",a);
//	return 0;
//
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	//输入函数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出函数
//	printf("%d\n", sum);
//	return 0;
//}
//char
//short
//int
//long
//long long
//float
//double

//int a = 12;//全局变量
//int main() 
//{
//	//int a = 1;
//	{
//		//int a = 10;
//		printf("a=%d", a);
//	}
//	//int a = 90;
//	printf("a=%d", a);
//	return 0;
//}
int a = 10;
void test()
{
	printf("test==>%d\n", a);
}
int main()
{
	test();
	{
		printf("a=%d\n",a);
	}
	printf("a=%d\n", a);
	return 0;
}
