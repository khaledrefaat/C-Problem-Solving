//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int MAX = 100;
//
//
//struct Book {
//    int id{};
//    string name;
//    int quantity{};
//    int borrowersIds[MAX]{};
//    int borrowersIdsCount = 0;
//
//    void borrow(int userId) {
//        for (int i = 0; i < borrowersIdsCount; i++) {
//            if (borrowersIds[i] == userId) {
//                cout << "User already borrowed this book.\n";
//                return;
//            }
//        }
//        quantity--;
//        borrowersIds[borrowersIdsCount++] = userId;
//    }
//
//    void returnBook(int userId) {
//        for (int i = 0; i < borrowersIdsCount; i++) {
//            if (borrowersIds[i] == userId) {
//                borrowersIds[i] = -1;
//                quantity++;
//            }
//        }
//    }
//
//    int totalBooks() {
//        int counter = 0;
//        for (int i = 0; i < borrowersIdsCount; i++) {
//            if (borrowersIds[i] != -1) counter++;
//        }
//        return counter + quantity;
//    }
//};
//
//struct User {
//    int id{};
//    string name;
//    int booksIds[MAX]{};
//    int booksIdsIndex = 0;
//
//    void borrowBook(int bookId) {
//        booksIds[booksIdsIndex++] = bookId;
//    }
//
//    void returnBook(int bookId) {
//        for (int i = 0; i < booksIdsIndex; i++) if (booksIds[i] == bookId) booksIds[i] = -1;
//    }
//};
//
//struct Library {
//    Book books[MAX];
//    User users[MAX];
//    int booksCount = 0;
//    int usersCount = 0;
//
//    int findUserIndexById(int id) {
//        //        User Found and return UserIndex
//        for (int i = 0; i < usersCount; i++) if (users[i].id == id) return i;
//        //        User NotFound and return -1
//        return -1;
//    }
//
//    int findBookIndexById(int id) {
//        //        Book Found and return bookIndex
//        for (int i = 0; i < booksCount; i++) if (books[i].id == id) return i;
//        //        Book NotFound and return -1
//        return -1;
//    }
//
//    int findBookByName(const string &name) {
//        for (int i = 0; i < booksCount; i++) if (books[i].name == name) return i;
//        return -1;
//    }
//
//    static bool compareNames(Book &book1, Book &book2) {
//        return book1.name[0] < book2.name[0];
//    }
//
//    static bool compareIds(Book &book1, Book &book2) {
//        return book1.id < book2.id;
//    }
//
//    void addBook() {
//        cout << "Please enter a book id, name, quantity: ";
//        int id, quantity;
//        string name;
//        cin >> id >> name >> quantity;
//
//        if (quantity < 1) {
//            cout << "Quantity should be 1 or more.\n";
//            return;
//        }
//
//        bool bookExists = false;
//        for (int i = 0; i < booksCount; i++) {
//            Book book = books[i];
//            if (book.id == id && book.name != name) {
//                bookExists = true;
//                cout << "There is a book already with this id, please use another id.\n";
//            } else if (book.id != id && book.name == name) {
//                bookExists = true;
//                cout << "There is a book already with this name, please use another name.\n";
//            } else if (books[i].id == id && books[i].name == name) {
//                books[i].quantity += quantity;
//                bookExists = true;
//            }
//        }
//
//        if (!bookExists) {
//            books[booksCount++] = {id, name, quantity};
//            booksCount++;
//        }
//    };
//
//    void searchForBooks() {
//        cout << "Enter a book name prefix: ";
//        string keyword;
//        cin >> keyword;
//
//        for (int i = 0; i < booksCount; i++) {
//            bool found = true;
//            for (int j = 0; j < keyword.size(); j++) {
//                if (books[i].name[j] != keyword[j]) found = false;
//            }
//            if (found) {
//                cout << books[i].name;
//                return;
//            }
//        }
//        cout << "No books starts with this prefix";
//    };
//
//    void printWhoBorrowedBookByName() {
//        cout << "Enter a book name: ";
//        string bookName;
//        cin >> bookName;
//
//
//        int bookIndex = findBookByName(bookName);
//        if (bookIndex == -1) {
//            cout << "Invalid book name.\n";
//            return;
//        }
//        Book book = books[bookIndex];
//
//        if (book.borrowersIdsCount <= 0) {
//            cout << book.quantity << "\n";
//            cout << "No one borrowed this book.\n";
//            return;
//        }
//        User usersList[book.borrowersIdsCount];
//        int index = 0;
//        for (int i = 0; i < book.borrowersIdsCount; i++) {
//            for (int j = 0; j < usersCount; j++) {
//                if (users[j].id == book.borrowersIds[i]) {
//                    usersList[index++] = users[j];
//                }
//            }
//        }
//        for (int i = 0; i < index; i++) cout << usersList[i].name << "\n";
//    };
//
//    void printLibraryById() {
//        sort(books, books + booksCount, compareIds);
//        for (int i = 0; i < booksCount; i++) {
//            Book book = books[i];
//            if (book.id != 0) {
//                cout << "id = " << book.id << " name = " << book.name << " totalQuantity = "
//                     << book.totalBooks() << " totalBorrowed = " << book.borrowersIdsCount << "\n";
//            }
//        }
//    };
//
//    void printLibraryByName() {
//        sort(books, books + booksCount, compareNames);
//        for (int i = 0; i < booksCount; i++) {
//            Book book = books[i];
//            if (book.id != 0) {
//                cout << "id = " << book.id << " name = " << book.name << " totalQuantity = "
//                     << book.totalBooks() << " totalBorrowed = " << book.borrowersIdsCount << "\n";
//            }
//        }
//    };
//
//    void addUser() {
//        cout << "Enter user id, name: ";
//        int id;
//        string name;
//        cin >> id >> name;
//
//        bool found = false;
//        for (int i = 0; i < usersCount; i++) {
//            if (users[i].name == name || users[i].id == id) {
//                cout << "User already exists.\n";
//                found = true;
//            }
//        }
//
//        if (!found) users[usersCount++] = {id, name};
//    };
//
//    void borrowBook() {
//        cout << "Enter userId and BookId: ";
//        int userId, bookId;
//        cin >> userId >> bookId;
//
//        int userIndex = findUserIndexById(userId);
//        int bookIndex = findBookIndexById(bookId);
//
//        if (userIndex == -1) {
//            cout << "There is no user with this id.\n";
//            return;
//        }
//
//        if (bookIndex == -1) {
//            cout << "There is no book with this id.\n";
//            return;
//        }
//
//        books[bookIndex].borrow(userId);
//        users[userIndex].borrowBook(bookId);
//    };
//
//    void returnBook() {
//        cout << "Enter userId, BookId: ";
//        int userId, bookId;
//        cin >> userId >> bookId;
//
//        int userIndex = findUserIndexById(userId);
//        int bookIndex = findBookIndexById(bookId);
//
//        if (userIndex == -1) {
//            cout << "This user doesn't exist.\n";
//            return;
//        }
//        if (bookIndex == -1) {
//            cout << "This book doesn't exist.\n";
//            return;
//        }
//
//        users[userIndex].returnBook(bookId);
//        books[bookIndex].returnBook(userId);
//    };
//
//    void printUsers() {
//        for (int i = 0; i < usersCount; i++) cout << users[i].id << " " << users[i].name << "\n";
//    };
//
//    int menu() {
//        int choice;
//
//        cout << "Library Menu: \n";
//        cout << "1 - add a book\n";
//        cout << "2 - search for books by prefix\n";
//        cout << "3 - print who borrowed the book by name\n";
//        cout << "4 - print library by id\n";
//        cout << "5 - print library by name\n";
//        cout << "6 - add user\n";
//        cout << "7 - user borrow book\n";
//        cout << "8 - user return book\n";
//        cout << "9 - print users\n";
//        cout << "10 - exit\n";
//        cout << "\nEnter your menu choice [1 - 10]: ";
//
//        cin >> choice;
//        return choice;
//    }
//
//    void run() {
//        bool showMenu = true;
//        while (true) {
//            int choice;
//            if (showMenu) choice = menu();
//            else {
//                cout << "\nEnter your menu choice [1 - 10]: ";
//                cin >> choice;
//            }
//            if (choice == 1) addBook();
//            else if (choice == 2) searchForBooks();
//            else if (choice == 3) printWhoBorrowedBookByName();
//            else if (choice == 4) printLibraryById();
//            else if (choice == 5) printLibraryByName();
//            else if (choice == 6) addUser();
//            else if (choice == 7) borrowBook();
//            else if (choice == 8) returnBook();
//            else if (choice == 9) printUsers();
//            else if (choice == 10) break;
//            else cout << "Invalid Choice.";
//
//            showMenu = false;
//        }
//    }
//};
//
//int main() {
//    Library newLibrary = Library();
//    newLibrary.run();
//}