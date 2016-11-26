#include <stdio.h>

/* 全局变量声明 */
int a = 20;
int f;

int main()
{
	/* 局部变量声明 */
	int a, b;
	int c = 0;
	//int g = 10;
	int sum(int, int);

	/* 实际初始化 */
	a = 10;
	b = 20;
	//c = a + b;
	//g = a + b;

	printf("全局变量f的默认值%d\n", f);
	printf("value of a = %d, b = %d, c = %d\n", a, b, c);
	printf("value of a in main() = %d\n", a);
	c = sum(a, b);
	printf("value of c in main() = %d\n", c);

	/* C语言数组操作 */
	int n[10];
	int i, j;

	/* 初始化数组元素 */
	for (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	for (j = 0; j < 10; j++)
	{
		printf("Element[%d]=%d\n", j, n[j]);
	}

	/* 一个带有5行2列的数组 */
	int aa[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
	int ii, jj;

	/* 输出数组中每个元素的值 */
	for (ii = 0; ii < 5; ii++)
	{
		for (int jj = 0; jj < 2; ++jj)
		{
			printf("aa[%d][%d] = %d\n", ii, jj, aa[ii][jj]);
		}
	}

	return 0;
}

int sum(int a, int b)
{
	printf("value of a in sum() = %d\n", a);
	printf("value of b in sum() = %d\n", b);

	return a + b;
}