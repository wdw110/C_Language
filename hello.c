#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	/* �ҵĵ�һ��C���� */
	int i, j, k;
	printf("Hello World!\n");
	printf("int �洢��С: %lu \n", sizeof(int));
	printf("float �洢����ֽ�����%lu\n", sizeof(float));
	printf("float ��Сֵ��%E\n", FLT_MIN);
	printf("float ���ֵ��%E\n", FLT_MAX);
	printf("����ֵ��%d\n", FLT_DIG);
	printf("Hello\tWorld\n\n");

	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - c��ֵ�� %d\n", c);
	c = a - b;
	printf("Line 2 - c��ֵ�� %d\n", c);
	c = a / b;
	printf("Line 3 - c��ֵ�� %d\n", c);
	c = a % b;
	printf("Line 4 - c��ֵ�� %d\n", c);
	c = a * b;
	printf("Line 5 - c��ֵ�� %d\n", c);
	c = a++;
	printf("Line 6 - c��ֵ�� %d\n", c);
	c = a--;
	printf("Line 7 - c��ֵ�� %d\n", c);

	return 0;
}

