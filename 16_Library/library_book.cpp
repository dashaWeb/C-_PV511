#include "library_book.h"

void printBook(const Book& book, const string& text)
{
	if (!text.empty())
		cout << "\n======================= " << text << " ========================" << endl;
	cout << "\t\t Title     :: " << book.name << endl;
	cout << "\t\t Author    :: " << book.author << endl;
	cout << "\t\t Publisher :: " << book.publisher << endl;
	cout << "\t\t Genre     :: " << book.genre << endl;
}

void printBooks(const Book* library, const int& size)
{
	for (size_t i = 0; i < size; i++)
	{
		printBook(library[i], "Book #" + to_string(i + 1));
	}
}

void editBook(Book& book)
{
	cout << "\t\t Enter title     :: "; cin.getline(book.name, SIZE);
	cout << "\t\t Enter author    :: "; cin.getline(book.author, SIZE);
	cout << "\t\t Enter publisher :: "; cin.getline(book.publisher, SIZE);
	cout << "\t\t Enter genre     :: "; cin.getline(book.genre, SIZE);
}

int findByAuthor(const Book* library, const int& size, const char* author, const int& start)
{

	for (size_t i = start; i < size; i++)
	{
		if (strcmp(toLowerCase(library[i].author), toLowerCase(author)) == 0)
		{
			return i;
		}

	}
	return -1;
}

char* toLowerCase(const char* line)
{
	char* tmp = new char[strlen(line) + 1];
	for (size_t i = 0; i < strlen(line); i++)
	{
		tmp[i] = tolower(line[i]);
	}
	tmp[strlen(line)] = '\0';
	return tmp;
}

void sortByTitle(Book* library, const int& size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (strcmp(toLowerCase(library[j].name), toLowerCase(library[j + 1].name)) > 0)
				swap(library[j], library[j + 1]);
		}
	}
}

void push(Book*& library, int& size, Book book)
{
	auto tmp = new Book[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = library[i];
	}
	tmp[size++] = book;

	delete[] library;
	library = tmp;
}

void remove(Book*& library, int& size, const int& index)
{
	auto tmp = new Book[--size];
	for (size_t i = 0; i < size; i++)
	{
		if (i < index)
			tmp[i] = library[i];
		else
			tmp[i] = library[i + 1];
	}
	delete[] library;
	library = tmp;
}
