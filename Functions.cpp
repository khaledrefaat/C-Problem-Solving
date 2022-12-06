#include <iostream>

using namespace std;


// // Function Practice
///////////////////////////////////////////////////////////////////////////////
//const int MAX = 10000;
//
//string names[MAX];
//int ages[MAX];
//double salaries[MAX];
//char genders[MAX];
//int added = 0;
//
//int menu() {
//    int choice = -1;
//    while (choice == -1) {
//        cout << "\nEnter your choice:\n";
//        cout << "1 - Add new employee\n";
//        cout << "2 - Print all employees\n";
//        cout << "3 - Delete by age\n";
//        cout << "4 - Update salary by name\n";
//        cout << "5 - Exit\n";
//
//        cin >> choice;
//
//        if (choice < 1 || choice > 5) {
//            cout << "Invalid choice. Try again\n";
//            choice = -1;
//        }
//    }
//    return choice;
//}
//
//void readEmployee() {
//    cout << "\nEnter name: ";
//    cin >> names[added];
//    cout << "\nEnter Age: ";
//    cin >> ages[added];
//    cout << "\nEnter Salary: ";
//    cin >> salaries[added];
//    cout << "\nEnter Gender (M/F): ";
//    cin >> genders[added];
//    added++;
//}
//
//void printEmployees() {
//    cout << "\n***************************************\n";
//    for (int i = 0; i < added; i++) {
//        if (ages[i] != -1) {
//            cout << "Name: " << names[i] << " Age: " << ages[i] << " Salary: " << salaries[i] << " Gender: "
//                 << genders[i] << endl;
//        }
//    }
//}
//
//void deleteByAge() {
//    cout << "Enter start and end age: ";
//    int startAge, endAge;
//    cin >> startAge >> endAge;
//
//    for (int i = 0; i < added; i++) {
//        if (ages[i] >= startAge && ages[i] <= endAge) ages[i] = -1;
//    }
//}
//
//void updateSalaryByName() {
//    cout << "Please enter the name and salary: ";
//    string employeeName;
//    int employeeSalary;
//    cin >> employeeName >> employeeSalary;
//
//    bool isFound = false;
//    for (int i = 0; i < added; i++) {
//        if (names[i] == employeeName) {
//            salaries[i] = employeeSalary;
//            isFound = true;
//        }
//    }
//    if (!isFound) cout << "No Employee with this name was found!";
//}
//
//void employeeSystem() {
//    while (true) {
//        int choice = menu();
//
//        if (choice == 1) readEmployee();
//        else if (choice == 2) printEmployees();
//        else if (choice == 3) deleteByAge();
//        else if (choice == 4) updateSalaryByName();
//        else break;
//    }
//}
//
//
//int main() {
//    employeeSystem();
//}


// // Functions challenges
///////////////////////////////////////////////////////////////////////////////
// // Homework #1: Max of 6 numbers;
// // Write a function that reads 6 numbers and compute their maximum. Create the following functions
//// max(int a, int b, int c), max(int a, int b, int c, int d)
// // max(int a, int b, int c, int d, int e), max(int a, int b, int c, int d, int e, int f)

// // the max way here was doctor mostafa's idea I solve it the same way but with if statements
//int max(int a, int b, int c) {
//    return max(a, max(b, c));
//}
//
//int max(int a, int b, int c, int d) {
//    return (a, max(b, c, d));
//}
//
//int max(int a, int b, int c, int d, int e) {
//    return max(a, max(b, c, d, e));
//}
//
//int max(int a, int b, int c, int d, int e, int f) {
//    return max(a, max(b, c, d, e, f));
//}
//
//int main() {
//    cout << max(1, 9, 10) << endl << max(8, 5, 15, 9) << endl;
//    cout << max(55, 67, 52, 78, 66) << endl << max(88, 65, 77, 52, 95, 156);
//}
//

///////////////////////////////////////////////////////////////////////////////
// // Homework #2: Reverse a string
// // Develop a function that do reverse for the string. Function is:
// // stringReverseStr(const &str);
// // Don't try to change str content, or you will get compilation error

// // This is my Solution
// string reverseStr(const string &str) {
//    string reversedStr;
//    for (int i = 0; i < str.length(); i++) {
//        reversedStr += str[str.length() - (i + 1)];
//    }
//    return reversedStr;
//}

// // This is doctor mostafa's solution it has better performance as it goes only to half of the string
//string reverseStr(const string &str) {
//    string reversedStr = str;
//    int start = 0, end = (int) reversedStr.size() - 1;
//
//    while (start < end) {
//        char tmp = reversedStr[end];
//        reversedStr[end] = reversedStr[start];
//        reversedStr[start] = tmp;
//
//        start++;
//        end--;
//    }
//    return reversedStr;
//}

//int main() {
//    cout << reverseStr("abc");
//}


///////////////////////////////////////////////////////////////////////////////
// // Homework #3: Reverse a string