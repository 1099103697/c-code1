#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//struct
//{
//	int a;
//	char c;
//} sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}//匿名结构体内容不能相同


//结构体自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	return 0;
//}
//

//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c', 100, 3.14, "hello" };
//	//printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//	struct S s = { 'c', {55.6,30} ,100, 3.14, "hello" };
//	printf("%lf\n",s.st.weight);
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	
	return 0;

}