#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int my_strlen(const char* str)//const��֤�ַ�������
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len =my_strlen("abcdef");
//	//����ʾ��
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen�޷�����
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++)
//	{
//		;
//
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}


char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//�ҵ�Ŀ���ַ�����\0��
	while (*dest != '\0')
	{
		dest++;
	}
	//׷���ַ�
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[30] = "hello";//[]����׷�Ӻ�������С
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}