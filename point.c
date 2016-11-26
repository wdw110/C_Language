#include <stdio.h>

const int MAX = 3;

int main()
{
	int var = 20;   /* 实际变量的声明 */
	int *ip;        /* 指针变量的声明 */
	int *pt = NULL;/* 定义空指针 */

	ip = &var;      /* 在指针变量中存储var的地址 */

	printf("Address of var variable: %x\n", &var);

	/* 在指针变量中存储的地址 */
	printf("Address stored in ip variable: %x\n", ip);

	/* 使用指针访问值 */
	printf("Value of *ip variable: %d\n", *ip);

	int var1;
	char var2[10];

	printf("var1 变量的地址：%x\n", &var1);
	printf("var2 变量的地址：%x\n", &var2);
	printf("pt 的值是 %x\n", pt);

	/* 递增一个指针 */
	int vv[] = {10, 100, 200};
	int i, *ptr;

	/* 指针中的数组地址 */
	ptr = vv;
	for (i = 0; i < MAX; i++)
	{
		printf("Address of vv[%d] = %x\n", i, ptr);
		printf("Value of vv[%d] = %d\n", i, *ptr);

		/* 移动到下一个位置 */
		ptr++;
	}

	/* 指针中的第一个元素的地址 */
	ptr = vv;
	i = 0;
	while (ptr <= &vv[MAX - 1])
	{
		printf("Address of vv[%d] = %x\n", i, ptr);
		printf("Value of vv[%d] = %d\n", i, *ptr);

		/* 指向上一个位置 */
		ptr++;
		i++;
	}

	return 0;
}