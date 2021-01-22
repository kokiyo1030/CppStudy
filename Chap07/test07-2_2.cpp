#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class Book {
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* title, const char* isbn, int price) : price(price) {
		this->title = new char[strlen(title) + 1];
		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}
	~Book() {
		delete[] title;
		delete[] isbn;
	}
	void ShowBookInfo() {
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
};

class EBook : public Book {
private:
	char* DRMkey;
public:
	EBook(const char* title, const char* isbn, int price, const char* DRMkey) : Book(title, isbn, price) {
		this->DRMkey = new char[strlen(DRMkey) + 1];
		strcpy(this->DRMkey, DRMkey);
	}
	~EBook() {
		delete[] DRMkey;
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "인증키: " << DRMkey << endl;
	}
};

int main() {
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}