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
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 30000)
	{
		printf("д����:%d\n",line);
		line++;
	}
	if (line == 30000)
	{
		printf("good offer\n");
	}
	return 0;
}

