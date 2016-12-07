#include <stdio.h>

//预处理器运算符
#define message_for(a, b) \
	printf(#a " and " #b ": We love you!\n")

#define tokenpaster(n) printf ("token" #n " = %d", token##n)

#if !defined (MESSAGE)
#define MESSAGE "You wish!"
#endif

#define MAX(x,y) ((x)>(y) ? (x):(y))

int main()
{
	FILE *fp;
	char buff[255];
	int token34 = 40;

	fp = fopen("test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);

	fp = fopen("test.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1 : %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("2 : %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("3 : %s\n", buff);
	fclose(fp);


	//C语言预处理器
	printf("File : %s\n", __FILE__);
	printf("Date : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);
	printf("Line : %d\n", __LINE__);
	printf("ANSI : %d\n", __STDC__);


	message_for(wdw110, Debra);
	tokenpaster(34);

	printf("\nHere is the message: %s\n", MESSAGE);

	printf("Max between 20 and 10 is %d\n", MAX(10, 20));

	return 0;
}