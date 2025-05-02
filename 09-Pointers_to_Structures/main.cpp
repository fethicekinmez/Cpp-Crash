#include <iostream>
#include <cstring> // for strcpy
using namespace std;

struct Book{
    int bookID;
    char title[50];
    char author[50];
   
};

void printBook(Book *book){
    cout << "Book ID: " << book->bookID << endl;
    cout << "Title: " << book->title << endl;
    cout << "Author: " << book->author << endl;
}

int main(){

    Book book1;
    Book book2;

    // Assigning values to book1
    strcpy(book1.title, "The Great Gatsby"); 
    strcpy(book1.author, "F. Scott Fitzgerald");
    book1.bookID = 1;

    // Assigning values to book2
    strcpy(book2.title, "To Kill a Mockingbird");
    strcpy(book2.author, "Harper Lee");
    book2.bookID = 2;

    // Printing book details
    printBook(&book1);
    printBook(&book2);

    return 0;
}

/*
Book ID: 1
Title: The Great Gatsby
Author: F. Scott Fitzgerald
Book ID: 2
Title: To Kill a Mockingbird
Author: Harper Lee
*/