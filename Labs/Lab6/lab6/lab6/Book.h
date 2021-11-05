#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Book {
private:
	string m_genre, m_author, m_title;
	unsigned int m_year, m_price;
public:
    Book()
        : m_genre(" "), m_author(" "), m_title(" "), m_year(0), m_price(0)
    {
    }
    string getGenre() { return m_genre; }
    string getAuthor() { return m_author; }
    string getTitle() { return m_title; }
    unsigned int getYear() { return m_year; }
    unsigned int getPrice() { return m_price; }

    void setGenre(string genre) {  m_genre = genre; }
    void setAuthor(string author) { m_author = author; }
    void setTitle(string title) { m_title = title; }
    void setYear(unsigned int year) { m_year = year; }
    void setPrice(unsigned int price) {  m_price = price; }
    void add(string genre, string author, string title, unsigned int year, unsigned int price);

};
void change(Book* book);
void print(Book* book,  int size);
void sort(Book* book, int size);
void shapka();