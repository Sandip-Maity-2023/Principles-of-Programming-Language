#include <iostream>
#include <string>

using namespace std;

#define MAX_BOOKS 100 // Maximum number of books that can be stored in the library

// Book class
class Book {
private:
    int bookID;
    string title;
    string author;
    bool isIssued;

public:
    Book() : bookID(0), title(""), author(""), isIssued(false) {} // Default constructor

    Book(int id, string bookTitle, string bookAuthor)
        : bookID(id), title(bookTitle), author(bookAuthor), isIssued(false) {}

    int getBookID() const { return bookID; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool getIssuedStatus() const { return isIssued; }

    void issueBook() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book issued successfully!" << endl;
        } else {
            cout << "Book is already issued!" << endl;
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book returned successfully!" << endl;
        } else {
            cout << "Book was not issued!" << endl;
        }
    }

    void displayBookInfo() const {
        cout << "Book ID: " << bookID << ", Title: " << title << ", Author: " << author
             << ", Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

// Library class
class Library {
private:
    Book books[MAX_BOOKS]; // Static array to store books
    int bookCount;

public:
    Library() : bookCount(0) {}

    void addBook() {
        if (bookCount >= MAX_BOOKS) {
            cout << "Library is full! Cannot add more books." << endl;
            return;
        }

        int id;
        string title, author;
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore(); // Ignore the newline left in the input buffer
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);

        books[bookCount++] = Book(id, title, author); // Add new book to the array
        cout << "Book added successfully!" << endl;
    }

    void displayBooks() const {
        if (bookCount == 0) {
            cout << "No books in the library!" << endl;
            return;
        }

        for (int i = 0; i < bookCount; i++) {
            books[i].displayBookInfo();
        }
    }

    void searchBook() const {
        string searchTitle;
        cin.ignore(); // Ignore the newline left in the input buffer
        cout << "Enter Book Title to Search: ";
        getline(cin, searchTitle);

        for (int i = 0; i < bookCount; i++) {
            if (books[i].getTitle() == searchTitle) {
                books[i].displayBookInfo();
                return;
            }
        }

        cout << "Book not found!" << endl;
    }

    void issueBook() {
        int id;
        cout << "Enter Book ID to Issue: ";
        cin >> id;

        for (int i = 0; i < bookCount; i++) {
            if (books[i].getBookID() == id) {
                books[i].issueBook();
                return;
            }
        }

        cout << "Book not found!" << endl;
    }

    void returnBook() {
        int id;
        cout << "Enter Book ID to Return: ";
        cin >> id;

        for (int i = 0; i < bookCount; i++) {
            if (books[i].getBookID() == id) {
                books[i].returnBook();
                return;
            }
        }

        cout << "Book not found!" << endl;
    }
};

// Main function
int main() {
    Library library;
    int choice;

    do {
        cout << "\n=== Library Management System ===" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.displayBooks();
                break;
            case 3:
                library.searchBook();
                break;
            case 4:
                library.issueBook();
                break;
            case 5:
                library.returnBook();
                break;
            case 6:
                cout << "Exiting system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
