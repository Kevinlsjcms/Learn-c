#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(short));
//	return 0;
//}

//int b = 20;//全局变量
//int main()
//{
//	int a = 10;//局部变量，局部优先
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int num3 = num1 + num2;
//	printf("%d", num3);
//	return 0;
//}

//字符串
////int main()
////{
////	//char 字符类型
////	//C语言没有字符串类型
////	//字符串结束标准\0
////	char arr[] = "asdfg";
////	char arr2[] = { 'a','s','d','f','g','\0'};
////	int len = strlen(arr);//求字符串长度strlen()
////	printf("%d\n", strlen(arr2));
////	printf("%d\n", len);
////	printf("%s\n", arr);
////	printf("%s", arr2);
////	return 0;
////}

//转义字符
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%s\n", "\\0");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a\a\n");
//	printf("%s\n", "\130");
//	printf("%s\n", "\x63");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}

//选择语句if else

//int main()
//{
//	int input = 0;
//	printf("好好学习(1或者0)");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("good");
//	}
//	else {
//		printf("bad");
//	}
//	return 0;
//}

//while循环语句
//int main()
//{
//	int line = 0;
//	while (line <100)//表达式
//	{
//		printf("继续学习%d\n", line);
//		line++;//line= line + 1
//	}
//	printf("good");
//	return 0;
// }

//函数

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a,b);
//	printf("%d\n", c);
//	return 0;
//}

//数组

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8};
	int n = 0;
	while (n<8)
	{
		printf("%d\n", arr[n]);
		n++;
	}
	return 0;
}