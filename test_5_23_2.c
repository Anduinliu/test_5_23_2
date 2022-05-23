 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	1000 0000 0000 0000 0000 0000 0001 0100 - 原码
//	1111 1111 1111 1111 1111 1111 1110 1011 - 反码
//	1111 1111 1111 1111 1111 1111 1110 1110 - 补码
//
//	0000 0000 0000 0000 0000 0000 0000 1010 - 补码
//	1111 1111 1111 1111 1111 1111 1111 0110 - i+j - 原码
//	1000 0000 0000 0000 0000 0000 0000 1001 - 反码
//	1000 0000 0000 0000 0000 0000 0000 1010 - 原码
//	-10
//
//	return 0;
//}

//int main()
//{
//	unsigned int i = 0;
//	//死循环
//	//unsigned int i -> 读取出来的时候 条件恒成立
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	unsigned int b = 10u;
//
//	return 0;
//}
void fun()
{

}
//int main()
//{
//	//int flag = 2;
//	//if (1 == flag)
//	//{
//	//	printf("hello bit\n");
//	//}
//	//else if (2 == flag)
//	//{
//	//	if (1)
//	//	{
//	//		printf("***************\n");
//	//	}
//	//	printf("hello world\n");
//	//}
//	//else
//	//{
//	//	printf("hello anduin\n");
//	//}
//	//if(0){}注释
//}

//int main()
//{
//	int flag = 1;
//	//1.先执行（）中的表达式or函数，得到真假结果(ture，false,逻辑结果）
//	//2.条件 判断
//	//3.进行 分支功能
//
//	if (flag == 1)
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}
//int IsEmpty()
//{
//	printf("某种数据是否为空\n");
//
//	return 1;
//}
//int main()
//{
//	
//	if (IsEmpty())
//	{
//		printf("yes\n");
//	}
//
//	return 0;
//}
#include<stdbool.h>
//int main()
//{
//	bool x = true;
//	x = false;
//	printf("%d\n", sizeof(x));
//
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	if (flag == 0)
//	{
//		//可能会误以为整数比较
//		//不推荐
//		printf("1\n");
//	}
//	if (flag == false)
//	{
//		//1.c99
//		//不推荐
//		printf("2\n");
//	}
//	if (flag)
//	{
//		//1.先执行（）中的表达式or函数，得到真假结果(ture，false,逻辑结果）
//		//2.条件 判断
//		//3.进行 分支功能
//		//直观的反映出来了，flag是"bool"
//		//推荐
//		printf("3\n");
//	}
//
//	return 0;
//}

//浮点数在进行比较的时候，绝对不能直接用==来比较
//浮点数本身有精度损失，进而导致各种结果可能有细微的差别

