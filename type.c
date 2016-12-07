#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main()
{
	int sum = 17, count = 5;
	double mean;
	int i = 17;
	char c = 'c'; /* ascii值是99 */
	float summ;

	mean = (double) sum / count;
	printf("Value of mean : %f\n", mean);

	summ = i + c;
	printf("Value of summ : %f\n", summ);

	//C语言错误处理
	FILE *pf;
	int errnum;
	pf = fopen("unexist.txt", "rb");
	if (pf == NULL)
	{
		errnum = errno;
		fprintf(stderr, "错误号：%d\n", errno);
		perror("通过perror输出错误");
		fprintf(stderr, "打开文件错误：%s\n", strerror(errnum));
	}
	else
	{
		fclose(pf);
	}
	//被零除的错误
	int dividend = 20;
	int divisor = 4;
	int quotient;

	if (divisor == 0) {
		fprintf(stderr, "除数为零退出运行...\n");
		exit(EXIT_FAILURE);
	}
	quotient = dividend / divisor;
	fprintf(stderr, "quotient变量的值为：%d\n", quotient);
	exit(EXIT_SUCCESS);

	return 0;
}