#include <stdio.h>
#include <stdarg.h>

double factorial(unsigned int i)
{
	if (i <= 1)
	{
		return 1;
	}
	return i * factorial(i - 1);
}

int fibonaci(int i)
{
	if (i == 0)
	{
		return 0;
	}
	if (i == 1)
	{
		return 1;
	}
	return fibonaci(i - 1) + fibonaci(i - 2);
}

//C语言中的可变参数
double average(int num, ...)
{
	va_list valist;
	double sum = 0.0;
	int ii;

	/* 为num个参数初始化valist */
	va_start(valist, num);

	/* 访问所有赋给valist的参数 */
	for (ii = 0; ii < num; ii++)
	{
		sum += va_arg(valist, int);
	}
	/* 清理为valist保留的内存 */
	va_end(valist);

	return sum / num;
}

int main()
{
	int i = 10;
	printf("%d的阶乘为 %f\n", i, factorial(i));

	int j;
	for (j = 0; j < 12; j++)
	{
		printf("%d\t\n", fibonaci(j));
	}

	printf("Average of 2,3,4,5 = %f\n", average(4, 2, 3, 4, 5));
	printf("Average of 25,15,5 = %f\n", average(3, 25, 25, 10));

	return 0;
}