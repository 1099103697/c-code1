#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t count)
{
	char* ret = dest;
	assert(dest !=  NULL);
	assert(src !=  NULL);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

void* my_memmove(void*dest, const void*src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest<src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
		
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return dest;
}

int main()
{
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[10] = { 0 };
	//my_memcpy(arr2, arr1, sizeof(arr1));

	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//my_memcpy(arr3 + 2, arr3, 20);//memcpy²»ÄÜÖØ¸´¿½±´
	my_memmove(arr3 + 2, arr3, 20);
	return 0;
}