#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//1.���泣��
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
//	const int a = 10;//��C������,const���ε�a,�����Ǳ���,���ǲ��ܱ��޸�,�г���������
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
//4.ö�ٳ��� 
//enum color{RED,GREEN,BLUE};
//enum sex {MALE,FEMALE,SECRET};
//int main() {
//	enum color c = BLUE;
//	printf("%d", c);
//	return 0;
//}

//char�ַ�����
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//�ַ�����\0��������ַ�û��
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
	printf("�������\n");
	printf("Ҫ�ú�ѧϰ��1/0\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("�����ǻ���ʱ��");
	}
	else
	{
		printf("�ؼҼ�ţ��");
	}
	return 0;

}

