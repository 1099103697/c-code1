#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<assert.h>



////������Ϣ
//int main()
//{
//	////0-  No error
//	////1-  Operation not permitted
//	////2-  ����
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE*pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("�ɹ�\n");
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	//char ch = 'w';
//	//int ret=islower(ch);//islower�ж�Сд�ַ���Сд���������
//	//char ch = '2';
//	//int ret = isdigit(ch);//isdigit�ж����֣��������������
//	//printf("%d\n", ret);
//
//	//char ch = tolower('Q');//tolower��дתСд��Сд����
//	//char ch = toupper('q');//toupperСдת��д����д����
//	//putchar(ch);
//
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n",arr);
//	return 0;
//}

struct S
{
	char name[20];
	int age;
};


//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));//�м���void* ͨ��ָ������-������ָ��,���ܽ��н����ò���
//
//	struct S arr3[] = { { "����", 20 }, { "����", 30 } };
//	struct S arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	//strcpy(arr2,arr1);//strcpy����char��������
//
//	return 0;
//}

void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}


//int main()
//{
//	struct S arr3[] = { { "����", 20 }, { "����", 30 } };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}


//c���Ա�׼
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;

	memmove(arr + 2, arr, 20);//�����ڴ��ص������
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);

	}
	return 0;

}