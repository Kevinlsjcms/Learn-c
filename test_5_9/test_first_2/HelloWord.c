#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////int main() {
////	/*printf("Hello,Word\n");
////	printf("����66.6");*/
////	//printf("%zu\n", sizeof(char));//��ʾÿ�����͵Ĵ�С
////	//printf("%zu\n", sizeof(short));//��ʾÿ�����͵Ĵ�С
////	//printf("%zu\n", sizeof(int));//��ʾÿ�����͵Ĵ�С
////	//printf("%zu\n", sizeof(long));//��ʾÿ�����͵Ĵ�С
////	//printf("%zu\n", sizeof(long long));//��ʾÿ�����͵Ĵ�С
////	//printf("%zu\n", sizeof(float));//��ʾÿ�����͵Ĵ�С
////	//printf("%zu\n", sizeof(double));//��ʾÿ�����͵Ĵ�С
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
//	//����2������
//	scanf("%d %d",&num1,&num2);
//	//���
//	int sum = num1 + num2;
//	//���
//	printf("%d\n", sum);
//		return 0;
//
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 2;
//	//���뺯��
//	scanf("%d %d",&num1,&num2);
//	//���
//	int sum = num1 + num2;
//	//�������
//	printf("%d",sum);
//	return 0;
//}
//
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	//���뺯��
//	scanf("%d %d",&num1,&num2);
//	//���
//	int a = num1 + num2;
//	//�������
//	printf("%d",a);
//	return 0;
//
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	//���뺯��
//	scanf("%d %d", &num1, &num2);
//	//���
//	int sum = num1 + num2;
//	//�������
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

//int a = 12;//ȫ�ֱ���
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
