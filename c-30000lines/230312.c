#define _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>//Ҫʹ��printf����������Ҫ����<stdio.h>ͷ�ļ�
int main()//�������ͣ�����������
{
	printf("hello world");//printf()�����ǿ⺯���������Ǵ�ӡ��Ϣ����Ļ�ϡ�
	return 0;//����0
}
*/
//дһ�����������������ĺ�
/*#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d", &a, &b);
	////////sum = a + b;
	////////	printf("sum=%d\n", sum);
		return 0;
}
*/
////int main()
//{
//	int coding = 0;
//	printf("???");
//		scanf("%d", &coding);
//		if (coding == 0)
//		{
//			printf("you can\n");
//		}
//		else
//		{
//			printf("go to maihongshu\n");
//		}
//		return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("good offer\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//	{
//		int z = 0;
//		z = x + y;
//		return z;
//	}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d %d", &num1,&num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", (int)sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//#define ADD(X,Y) ((X)+(Y))
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%pר��������ӡ��ַ��
//	int*pa = &a;//pa��������ŵ�ַ�ģ���c������pa����ָ�������//*˵��pa��ָ����� int˵��paִ�еĶ�����int���͵�
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}
//#include <stdio.h>
////ָ������Ĵ�Сȡ���ڵ�ַ�Ĵ�С
////32λƽ̨�µ�ַ��32��bitλ����4���ֽڣ�
////64λƽ̨�µ�ַ��64��bitλ����8���ֽڣ�
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "����",20,100.0};
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", ps->name, ps->age, ps->score);
//	printf("3:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	printf("%d", a > b ? a: b);
//	return 0;
//}