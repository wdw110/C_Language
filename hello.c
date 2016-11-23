#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <locale.h>

int main() {
	/* 我的第一个C程序 */
	int i, j, k;
	printf("Hello World!\n");
	printf("int 存储大小: %lu \n", sizeof(int));
	printf("float 存储最大字节数：%lu\n", sizeof(float));
	printf("float 最小值：%E\n", FLT_MIN);
	printf("float 最大值：%E\n", FLT_MAX);
	printf("精度值：%d\n", FLT_DIG);
	printf("Hello\tWorld\n\n");

	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - c的值是 %d\n", c);
	c = a - b;
	printf("Line 2 - c的值是 %d\n", c);
	c = a / b;
	printf("Line 3 - c的值是 %d\n", c);
	c = a % b;
	printf("Line 4 - c的值是 %d\n", c);
	c = a * b;
	printf("Line 5 - c的值是 %d\n", c);
	c = a++;
	printf("Line 6 - c的值是 %d\n", c);
	c = a--;
	printf("Line 7 - c的值是 %d\n", c);

	unsigned int aa = 60;	/* 60 = 0011 1100 */
	unsigned int bb = 13;	/* 13 = 0000 1101 */
	int cc = 0;

	cc = aa & bb;	/* 12 = 0000 1100 */
	printf("Line 1 - cc 的值是 %d\n", cc );

	cc = aa | bb;	/* 61 = 0011 1101 */
	printf("Line 2 - cc 的值是 %d\n", cc );

	cc = aa ^ bb;	/* 49 = 0011 0001 */
	printf("Line 3 - cc 的值是 %d\n", cc );

	cc = ~aa;	/*-61 = 1100 0011 */
	printf("Line 4 - cc 的值是 %d\n", cc );

	cc = aa << 2;	/* 240 = 1111 0000 */
	printf("Line 5 - cc 的值是 %d\n", cc );

	cc = aa >> 2;	/* 15 = 0000 1111 */
	printf("Line 6 - cc 的值是 %d\n", cc );

	int a1 = 4;
	short b1;
	double c1;
	int* ptr;

	/* sizeof 运算符实例 */
	printf("Line 1 - 变量 a1 的大小 = %lu\n", sizeof(a1));
	printf("Line 2 - 变量 b1 的大小 = %lu\n", sizeof(b1));
	printf("Line 3 - 变量 c1 的大小 = %lu\n", sizeof(c1));

	/* & 和 * 运算实例 */
	ptr = &a1;   /* 'ptr' 现在包含‘a’的地址 */
	printf("a1 的值是 %d\n", a1);
	printf("*ptr 是 %d\n", *ptr);

	/* 三元运算符实例 */
	a1 = 10;
	b1 = (a1 == 1) ? 20 : 30;
	printf("b1 的值是 %d\n", b1);

	b1 = (a1 == 10) ? 20 : 30;
	printf("b1 的值是 %d\n", b1);

	return 0;
}

