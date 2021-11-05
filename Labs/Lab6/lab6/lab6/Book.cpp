#include "Book.h"

void change(Book* book)
{
	int n;
	string genre, author, title;
	int year, price;

	cout << "Enter the number of the line you want to change: ";
	cin >> n;
	cout << endl;

	cin.ignore();
	cout << "Enter a genre: ";
	getline(cin, genre);

	cin.ignore();
	cout << "Enter an author: ";
	getline(cin, author);

	cin.ignore();
	cout << "Enter a title: ";
	getline(cin, title);

	cin.ignore();
	cout << "Enter a year: ";
	cin >> year;
	cout << endl;

	cout << "Enter a price: ";
	cin >> price;
	book[n-1].add(genre, author, title, year, price);

}
void Book::add(string genre, string author, string title, unsigned int year, unsigned int price)
{
	m_genre = genre;
	m_author = author;
	m_title = title;
	m_year = year;
	m_price = price;

}
void print(Book* book, int size)
{

	shapka();
	for (int i = 0; i < size; i++) {
		cout << "|" << setw(12) << book[i].getGenre() << "  |  ";
		cout << setw(18) << book[i].getAuthor() << "  |  ";
		cout << setw(20) << book[i].getTitle() << "  |  ";
		cout << setw(5) << book[i].getYear() << "  |  ";
		cout << setw(5) << book[i].getPrice() << "  |  ";
		cout << endl;
		
	}
	cout << "------------------------------------------------------------------------------------\n";
}

void sort(Book* book, int size)
{
	for (int i = size - 1; i > 0; i--) {
		for (int i = 0; i < size - 1; i++) {
			if (book[i].getGenre() > book[i + 1].getGenre()) {
				swap(book[i], book[i + 1]);
			}
		}
	}

}

void shapka()
{
	cout << "____________________________________________________________________________________\n";
	cout << "|                                     Book                                         |\n";
	cout << "|----------------------------------------------------------------------------------|\n";
	cout << "|     Genre    |        Author        |          Title         |   Year  |  Price  |\n";
	cout << "|----------------------------------------------------------------------------------|\n";
	
}
