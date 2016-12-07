#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100];
	char *description;

	strcpy(name, "Zara Ali");

	/* 动态分配内存 */
	description = malloc(30 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcpy(description, "Zara ali a DPS student.");
	}
	/* 假设你想要存储更大的描述信息 */
	description = realloc(description, 100 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "Error - unalbe to allocate required memory\n");
	}
	else
	{
		strcat(description, "She is in class 10th");
	}

	printf("Name = %s\n", name);
	printf("Description: %s\n", description);

	/* 使用free()函数释放内存 */
	free(description);
}