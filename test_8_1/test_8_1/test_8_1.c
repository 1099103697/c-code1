#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//写代码告诉当前机器字节序
//	int a = 1;
//	char *p = (char *)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//函数表示
//check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
////指针类型的意义
////指针类型决定了指针解引用操作符访问几个字节，char *p访问1个字节，int *p访问4个字节
//int main()
//{
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int *p = &a;
//	//*p = 0;
//	char *p = &a;
//	*p = 0;
//	return 0;
//}


////输出什么
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//
//	return 0;
//}

