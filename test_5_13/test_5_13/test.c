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
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
void test()
{
	static int a = 1;//static���ξֲ�������ʱ��,�ֲ���������������,������
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