#include <iostream>
#include "library_book.h"


int main()
{
	int size = 10;
	Book* library = new Book[size]{
			{"Iron Flame","Rebecca Yarros","Entangled: Red Tower Books","Fantasy"},
			{"The Ever King","LJ Andrews","Victorious","Fantasy"},
			{"Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Chamber of Secrets","J.K. rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Prisoner of Azkaban","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Order of the Phoenix","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Half-Blood Prince","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Crown of Blood and Ruin","LJ Andrews","Victorious","Dark Fantasy Horror"},
			{"battlefield Reclaimer","David North","High Peak Publishing","Fiction"},
			{"Swords of Empire","Robert Ryan","Trotting Fox Press","Fantasy"},
	};

	printBooks(library, size);

	//Book book;
	//editBook(book);
	//printBook(book);

	//push(library, size, book);
	//printBooks(library, size);
	/*int index = -1;
	while((index = findByAuthor(library, size, "J.K. Rowling", index + 1)) != -1)
		printBook(library[index], "Index " + to_string(index + 1));*/
	cout << "\n\nSorted :: " << endl;
	sortByTitle(library, size);
	printBooks(library, size);
}
