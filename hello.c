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

	return 0;
}

