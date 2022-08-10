#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//vs2013
//	//>  1
//	//==  0
//	//<  -1
//
//	//linux-gcc
//	//> >0
//	//== 0
//	//< <0
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//
//	//int ret = strcmp(p1, p2);//比较字符串，逐字符比较
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//	//printf("%d", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//strcpy不限制字符
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2,4);
//	printf("%s\n", arr1);//strncpy限制字符
//	return 0;
//}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);//追加字符，strncat限制字符
	return 0;
}