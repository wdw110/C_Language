#include <stdio.h>

int count;
//extern void write_extern();

/* 函数声明 */
int Max(int num1, int num2);
void swap(int x, int y);
void swap2(int *x, int *y);

int main()
{
	count = 5;
	//write_extern();
	int a = 100;
	int b = 200;
	int ret;

	ret = Max(a, b);

	printf("Max value is : %d\n", ret);

	printf("交换前，a的值：%d\n", a);
	printf("交换前，b的值：%d\n", b);

	/* 调用函数来交换值 */
	swap(a, b);

	printf("传值交换后，a的值：%d\n", a);
	printf("传值交换后，b的值：%d\n", b);

	swap2(&a, &b);

	printf("引用交换后，a的值：%d\n", a);
	printf("引用交换后，b的值：%d\n", b);

	return 0;
}

int Max(int num1, int num2)
{
	/* 局部变量声明 */
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}

/*函数参数调用的两种方法*/
/* 传值方式调用函数 */

/* 函数定义 */
void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;

	return;
}

/* 引用方式调用函数 */
void swap2(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	return;
}






