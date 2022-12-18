#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
	///*int a = -5;
	//int b = a << 1;
	//printf("%d\n", b);
	//int c = b >> 1;
	//printf("%d\n", c);*/

	//	/*int a = 10;
	//	char c = 'r';
	//	char*p = &c;
	//	int arr[10] = { 0 };
	//	printf("%d\n", sizeof(a));
	//	printf("%d\n", sizeof(c));
	//	printf("%d\n", sizeof(p));
	//	printf("%d\n", sizeof(arr));
	//*/
	//int a = 0;
	//int b = 0;
	//int max = 0;
	//scanf_s("%d %d", &a,&b);
	//max = (a > b ? a : b);
	//printf("%d\n", max);
	
	//struct Stu s1 = { "王家睦", 20, "2020205244" };
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);
	//struct Stu*ps = & s1;
	//printf("%s\n", (*ps).name);
	//printf("%d\n", ps->age);
	/*char a = 3; char b = 7;
	char c = a + b;
	printf("%d\n", c);*/
	//int a = 0;
	//int*pa = &a;
	///*char*pc = &a;*/
	//printf("%p\n", pa);
	//printf("%p\n", pc);
	/*printf("%p\n", pa+1);*/
	//printf("%p\n", pc+1);
	//int arr[10] = { 0 };
	//printf("%p\n", arr); 
	//printf("%p\n", arr+1);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[0]+1);
	//printf("%p\n", &arr);
	//printf("%p\n", &arr+1);
	//虽然大小一样，但是这个表示的是整个数组的大小
//	return 0;
//
//打印乘法表
//void Print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	Print(n);
//	return 0;
//}
//交换数组
int my_strlen(char*arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
void reverse_move(char arr[])
{
	int left = 0;
	int right = my_strlen(arr)-1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;

	}
}
int main()
{
	char arr[] = "abcdefg";
	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
	reverse_move(arr);
	printf("%s\n", arr);
	return 0;
}