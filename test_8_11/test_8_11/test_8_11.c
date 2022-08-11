#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>


////查找字符串
//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字符串不存在\n");
//
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = p1;
//	char *s2 = p2;
//	char *cur =(char*) p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 !='\0')&&(*s2 !='\0')&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到了
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}
//int main()
//{
//	char* p1 = "abcdefas";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字符串不存在\n");
//
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "123@168.2.13";
//	char* p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//	return 0;
//}
//
int main()
{
	return 0;
}