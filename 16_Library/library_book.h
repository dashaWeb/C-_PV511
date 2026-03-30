#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::swap;
using std::to_string;

const short SIZE = 50;

struct Book
{
	char name[SIZE];
	char author[SIZE];
	char publisher[SIZE];
	char genre[SIZE];
};

void printBook(const Book& book, const string& text = "");
void printBooks(const Book* library, const int& size);
void editBook(Book& book);

int findByAuthor(const Book* library, const int& size, const char* author, const int& start = 0);
char* toLowerCase(const char* line);

void sortByTitle(Book* library, const int& size);

void push(Book*& library, int& size, Book book);
void remove(Book*& library, int& size, const int & index);

