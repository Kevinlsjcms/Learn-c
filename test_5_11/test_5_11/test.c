#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//ѡ�����if else

//int main() 
//{
//	int input = NULL;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��1/0\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�����ǻ���ʱ��");
//	}
//	else
//	{
//		printf("�ؼҼ�ţ��");
//	}
//	return 0;
//
//}
//ѭ�����while��Ȼ
//int main()
//{
//	int line = 0;
//	while (line < 2000)
//	{
//		printf("д����%d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//	{
//		printf("�����ǻ���ʱ��");
//	}
//	else 
//	{
//		printf("�ؼҼ�ţ��");
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
//	//����
//	scanf("%d %d", &num1, &num2);
//	//���
//	int sum = Add(num1,num2);//����Add������㣿
//	//���
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Acc(a, b);//Acc�ǳ˷�����
//	printf("%d\n", c);
//	return 0;
//}
//����

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//��������
//	int i = 0;//��������i
//	while (i < 10)//ѭ��
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
