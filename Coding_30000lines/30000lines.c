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

//�ж�һ�����Ƿ��ܱ�������
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
//		printf("δ����\n");
//	else if (age <= 26)
//		printf("����\n");
//	else  (age <= 40)
//		printf("׳��\n");
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
//		printf("%dΪż��\n",num);
//	else
//		printf("%dΪ����\n",num);
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
//�򵥷���
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break; 
//	case 4:
//		printf("������\n");
//			break; 
//	case 5:
//		printf("������\n");
//				break; 
//	case 6:
//		printf("������\n");
//					break;
//	case 7:
//		printf("������\n");
//						break;
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");
//	int temp = 0;
//	while ((temp=getchar() )!= '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ���\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ�ܣ�\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//		for (; j < 3; j++)
//			printf("hello world\n");
//	//return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("hello world\n");
//		i++;
//	} while (i < 10);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int num = 1;
//	scanf("%d",&n);
//	num = n;
//	do
//	{
//		n--;
//		num *= n;
//	}while(n>1);
//	printf("%d ", num);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &i);
//	for (i; i > 0; i--)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//}
//#include<stdio.h>
//int main() 
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	int sum = 0;
//	printf("������Ҫ����ǰһ�����Ľ׳˺�\n");
//	scanf("%d", &m);
//	for (n = 1; n <= m; n++)
//	{
//		num = 1;//����n�Ľ׳�֮ǰ����num����Ϊ1
//		for (i = 1; i <= n; i++)
//		{
//			num *= i;
//		}
//		sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	int sum = 0;
//	printf("������Ҫ����һ�����Ľ׳˺�");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		num *= i;
//		sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;//Ҫ���ҵ�����
//    //��arr�������������в���k��7����ֵ
//    int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("�ҵ��ˣ��±���%d", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("�Ҳ�����\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to c world!!!!!!!!";
//	char arr2[] = "##########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	left++;
//	right--;
//	}
//	return 0;
//}
#include<stdio.h>
#include<windows.h>//����windows.h�е�sleep����
#include<string.h>//����strlen()����
int main()
{
	char arr1[] = "welcome to c world!!!!!!!!";
	char arr2[] = "##########################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}