#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
};

int main() {
    Book books[100];
    int count = 0;
    int choice;

    do {
        cout << "\n1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "3. Search Book\n";
        
cout << "Book added successfully! Total books now: " << count << endl;
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        //Add a book
        if (choice == 1) {
            cout << "Enter book title: ";
            cin >> books[count].title;
            cout << "Enter author name: ";
            cin >> books[count].author;
            count++;
        }

        // Book display
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                cout << "\nTitle: " << books[i].title;
                cout << "\nAuthor: " << books[i].author << endl;
            }
        }

        // Searching for a book
        else if (choice == 3) {
            string searchTitle;
            bool found =false;
            cout << "Enter book title to search: ";
            cin >> searchTitle;

            for (int i = 0; i < count; i++) {
                if (books[i].title == searchTitle) {
                    cout << "Book Found!\n";
                    cout << "Title: " << books[i].title << endl;
                    cout << "Author: " << books[i].author << endl;
                    found = true;
                }
           }
       if (!found) { cout << "Book not found!\n";
        }

    } while (choice != 4);

    return 0;
}
