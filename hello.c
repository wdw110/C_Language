#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	/* �ҵĵ�һ��C���� */
	printf("Hello World!\n");
	printf("int �洢��С: %lu \n", sizeof(int));
	printf("float �洢����ֽ�����%lu\n", sizeof(float));
	printf("float ��Сֵ��%E\n", FLT_MIN);
	printf("float ���ֵ��%E\n", FLT_MAX);
	printf("����ֵ��%d\n", FLT_DIG);

	return 0;
}

