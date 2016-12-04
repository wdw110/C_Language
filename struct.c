#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books book);

/* 指向结构的指针 */
void printBookpoint(struct Books *book);

int main()
{
	struct Books Book1;   /* 声明Book1，类型为Book */
	struct Books Book2;   /* 声明Book2，类型为Book */

	/* Book1详述 */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* Book1详述 */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	/* 输出Book1信息 */
	printf("Book 1 title : %s\n", Book1.title);
	printf("Book 1 author : %s\n", Book1.author);
	printf("Book 1 subject : %s\n", Book1.subject);
	printf("Book 1 book_id : %d\n", Book1.book_id);

	/* 输出Book1信息 */
	printf("Book 2 title : %s\n", Book2.title);
	printf("Book 2 author : %s\n", Book2.author);
	printf("Book 2 subject : %s\n", Book2.subject);
	printf("Book 2 book_id : %d\n", Book2.book_id);

	printf("结构作为函数参数的例子\n");
	printBook(Book1);
	printBook(Book2);

	printf("指向结构的指针的例子\n");
	printBookpoint(&Book1);
	printBookpoint(&Book2);

	/* 位域介绍 */
	struct bs {
		unsigned a: 1;
		unsigned b: 3;
		unsigned c: 4;
	} bit, *pbit;
	bit.a = 1;   /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
	bit.b = 7;   /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
	bit.c = 15;  /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
	printf("%d,%d,%d\n", bit.a, bit.b, bit.c); /* 以整型量格式输出三个域的内容*/
	pbit = &bit; /* 把位域变量bit的地址送给指针变量pbit */
	pbit->a = 0; /* 用指针方式给位域a重新赋值，赋为 0 */
	pbit->b &= 3; /* 使用了复合的位运算符“&=”，相当于：pbit->b=pbit->b&3，位域b中原有值为7，与3做按位与运算的结果为3（111&011=011，十进制值为3） */
	pbit->c |= 1; /* 使用了复合位运算符“|=”，相当于：pbit->c=pbit->c|1,其结果为15 */
	printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c); /* 用指针方式输出了这三个域的值 */

	return 0;
}


//结构作为函数参数
void printBook(struct Books book)
{
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);
}

void printBookpoint(struct Books *book)
{
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book book_id : %d\n", book->book_id);
}