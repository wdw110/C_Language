#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
struct
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct
{
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;

struct
{
	unsigned int age : 3;
} Age;


int main()
{
	printf("Memory size occupied by status1 : %lu\n", sizeof(status1));
	printf("Memory size occupied by status2 : %lu\n", sizeof(status2));

	Age.age = 4;
	printf("Sizeof(Age) : %lu\n", sizeof(Age));
	printf("Age.age : %d\n", Age.age);

	Age.age = 7;
	printf("Age.age : %d\n", Age.age);

	Age.age = 8;
	printf("Age.age : %d\n", Age.age);

	return 0;
}

