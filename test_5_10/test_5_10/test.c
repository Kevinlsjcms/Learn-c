#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//1.字面常量
//int main()
//{
//
//	30;
//	3.14;
//	"s";
//	"asd";
//	return 0;
//}

//2.const
//int main()
//{
//	const int a = 10;//在C语言中,const修饰的a,本质是变量,但是不能被修改,有常量的属性
//	printf("a=%d",a);
//	return 0;
//}
//3.define
//#define MAX  100
//#define STR "leo"
//int main() 
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}
//4.枚举常量 
//enum color{RED,GREEN,BLUE};
//enum sex {MALE,FEMALE,SECRET};
//int main() {
//	enum color c = BLUE;
//	printf("%d", c);
//	return 0;
//}

//char字符类型
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//字符串有\0结束标语，字符没有
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	/*printf("arr1=%s\n",arr1);
//	printf("arr2=%s\n", arr2);*/
//	return 0;
//}
#include <string.h>
//int main()
//{
//	printf("%c\n", '\130');
//	printf("%d\n",strlen("c:\test\628\test.c"));
//	return 0;
//}
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("要好好学习吗1/0\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("现在是幻想时间");
	}
	else
	{
		printf("回家捡牛粪");
	}
	return 0;

}

