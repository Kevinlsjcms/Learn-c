#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//int a = 10;
//	//int * p = &a;
//	//*p = 20;//*p¾ÍÊÇa
//	//printf("%d\n", a);
//	char a = 'l';
//	char * v = &a;
//	* v = 'm';
//	printf("%c\n", a);
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
struct Stu {
	char name[20];
	int age;
	char sex[10];
	char tele[15];
};
//int main()
//{
//	struct Stu s = {"Leomessi",21,"man","13360287016"};
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	struct Stu* leo = &s;
//	printf("%s %d %s %s\n", leo->name, leo->age, leo->sex, leo->tele);
//	//printf("%s %%d %s %s\n", ((*leo).name, (*leo).age, (*leo).sex, (*leo).tele);
//	return 0;
//}
int Add(int x, int y) {
	return x / y;
}
int Acc(int x, int y) {
	return x % y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//int c = Add(a, b);
	//int d = Acc(a, b);
	//printf("%d %d",c,d);
	printf("%d %d", a / b, a % b);

	return 0;
}