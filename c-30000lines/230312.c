#define _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>//要使用printf（）函数，要包含<stdio.h>头文件
int main()//返回整型，输入主函数
{
	printf("hello world");//printf()函数是库函数，作用是打印信息到屏幕上。
	return 0;//返回0
}
*/
//写一个代码求两个整数的和
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
//		printf("写代码:%d\n",line);
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
//	printf("%p\n", &a);//%p专门用来打印地址的
//	int*pa = &a;//pa是用来存放地址的，在c语言中pa叫做指针变量，//*说明pa是指针变量 int说明pa执行的对象是int类型的
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
////指针变量的大小取决于地址的大小
////32位平台下地址是32个bit位（即4个字节）
////64位平台下地址是64个bit位（即8个字节）
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
//	struct Stu s = { "张三",20,100.0};
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

//判断一个数是否能被五整除
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	if (age >= 18)
//		printf("chengnian\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 28;
//	if (age <= 18)
//		printf("未成年\n");
//	else if (age <= 26)
//		printf("青年\n");
//	else  (age <= 40)
//		printf("壮年\n");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 3;
//	if (num = 5)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int num = 3;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (0==num % 2)
//		printf("%d为偶数\n",num);
//	else
//		printf("%d为奇数\n",num);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//}
//简单方法
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break; 
//	case 4:
//		printf("星期四\n");
//			break; 
//	case 5:
//		printf("星期五\n");
//				break; 
//	case 6:
//		printf("星期六\n");
//					break;
//	case 7:
//		printf("星期日\n");
//						break;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误\n");
	}
	return 0;
}