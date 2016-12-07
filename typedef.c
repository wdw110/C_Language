#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

int main()
{
	Book book;

	strcpy(book.title, "C Programming");
	strcpy(book.author, "Nuha Ali");
	strcpy(book.subject, "C Programming Tutorial");
	book.book_id = 6495407;

	printf("Book title : %s\n", book.title);
	printf("Book author :%s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);

	//#define的简单用法
	printf("Value of TRUE : %d\n", TRUE);
	printf("Value of FALSE : %d\n", FALSE);

	return 0;
}