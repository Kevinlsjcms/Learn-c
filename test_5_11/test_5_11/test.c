#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//选择语句if else

//int main() 
//{
//	int input = NULL;
//	printf("加入比特\n");
//	printf("要好好学习吗1/0\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("现在是幻想时间");
//	}
//	else
//	{
//		printf("回家捡牛粪");
//	}
//	return 0;
//
//}
//循环语句while虽然
//int main()
//{
//	int line = 0;
//	while (line < 2000)
//	{
//		printf("写代码%d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//	{
//		printf("现在是幻想时间");
//	}
//	else 
//	{
//		printf("回家捡牛粪");
//
//	}
//	return 0;
//}
int Add(int x,int y)
{
	int z = 0;
	z = x + y;
	return z;
	//return x+y;

}
int Acc(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
	//return x*y;
}
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = Add(num1,num2);//调用Add帮你计算？
//	//输出
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Acc(a, b);//Acc是乘法函数
//	printf("%d\n", c);
//	return 0;
//}
//数组

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//创建数组
//	int i = 0;//定义整形i
//	while (i < 10)//循环
//	{
//		printf("%d\n", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}
int main()
{
	//printf("     **\n");
	//printf("************\n");
	//printf("************\n");
	//printf("    *  *\n");
	//printf("    *  *\n");
	//return 0;
	//printf("Name    Age    Gender\n");
	//printf("---------------------\n");
	//printf("Jack    18     man");
	//printf("I lost my cellphone!\n");
	/*int a = 40;
	int c = 212;
	int r = (-8 + 22) * a - 10 + c / 2;
	printf("%d\n", r);*/
	char arr[] = { 'b','i','t','\0'};
	printf("%d\n", strlen(arr));
	return 0;
}
