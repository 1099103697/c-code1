#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<assert.h>



////错误信息
//int main()
//{
//	////0-  No error
//	////1-  Operation not permitted
//	////2-  ……
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE*pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("成功\n");
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	//char ch = 'w';
//	//int ret=islower(ch);//islower判断小写字符，小写输出非零数
//	//char ch = '2';
//	//int ret = isdigit(ch);//isdigit判断数字，数字输出非零数
//	//printf("%d\n", ret);
//
//	//char ch = tolower('Q');//tolower大写转小写，小写不动
//	//char ch = toupper('q');//toupper小写转大写，大写不动
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
//	memcpy(arr2, arr1, sizeof(arr1));//中间是void* 通用指针类型-无类型指针,不能进行解引用操作
//
//	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct S arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	//strcpy(arr2,arr1);//strcpy中是char不是整型
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
//	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}


//c语言标准
//memcpy 只要处理 不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;

	memmove(arr + 2, arr, 20);//处理内存重叠的情况
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);

	}
	return 0;

}