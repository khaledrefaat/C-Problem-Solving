#include <iostream>

using namespace std;


// //////////////////////////////////////////////////////////////
// // Easy to medium challenges

//int main() {
// ////////////////////////////////////////////
//    // // Problem #1: is Prefix?
//    // // Read 2 strings input str. print yes if the given str is a prefix for the string otherwise, print no
//    string str, prefix;
//    cin >> str >> prefix;
//
//    if (str.size() < prefix.size()) {
//        cout << "NO";
//        return 0;
//    }
//    bool is_prefix = true;
//    for (int i = 0; i < str.size(); i++) {
//        if (i < prefix.size() && str[i] != prefix[i]) is_prefix = false;
//    }
//
//    if (is_prefix) cout << "YES";
//    else cout << "NO";
//    return 0;
//}



// ////////////////////////////////////////////
// // Problem #2: Is Suffix
// // Read 2 strings input and str. Print yes if the given str is suffix for the string. otherwise print no

//int main() {
//    string input, str;
//    cin >> input >> str;
//
//    if (input.size() < str.size()) {
//        cout << "NO";
//        return 0;
//    }
//
//    for (int i = 0; i < str.size(); i++) {
//        if (str[i] != input[input.size() - str.size() + i]) {
//            cout << "NO";
//            return 0;
//        }
//    }
//    cout << "YES";
//}

// ////////////////////////////////////////////
// // Problem #3: Is Substring
// // Read 2 strings input and str. Print yes if the given str is substring for the string. otherwise print no

//int main() {
//    string input, str;
//    cin >> input >> str;
//
//    if (input.size() < str.size()) {
//        cout << "NO";
//        return 0;
//    }
//
//    bool is_substring = false;
//    for (int i = 0; i < input.size(); i++) {
//        bool is_match = true;
//        if (input[i] != str[0]) {
//            is_match = false;
//        }
//
//        for (int j = 0; j < str.size() && is_match; j++) {
//            if (str[j] == input[j + i]) is_substring = true;
//            else {
//                is_substring = false;
//                break;
//            }
//        }
//    }
//
//    if (is_substring) cout << "YES";
//    else cout << "NO";
//    return 0;
//}

// ////////////////////////////////////////////
// // Problem #4: Is Subsequence
// // Read 2 strings input and str. Print yes if the given str is subsequence for the string. otherwise print no
//int main() {
//    string input, str;
//    cin >> input >> str;
//
//    int next_str_index = 0;
//    for (int i = 0; i < input.size(); i++) {
//        if (input[i] == str[next_str_index]) {
//            next_str_index++;
//            if (next_str_index == (int) str.size()) {
//                cout << "YES";
//                return 0;
//            }
//        }
//    }
//
//    cout << "NO";
//
//    return 0;
//}

// ////////////////////////////////////////////
// // Problem #5: Grouping
// // Read a string, then divide it to consecutive groups of same letter. Print each group

//int main() {
//    string str;
//    cin >> str;
//
//    cout << str[0];
//    for (int i = 1; i < str.size(); i++) {
//        if (str[i] != str[i - 1]) {
//            cout << " " << str[i];
//        } else {
//            cout << str[i];
//        }
//    }
//
//    return 0;
//}


// /////////////////////////////////////////////////////////////////////////////////////////////
// // medium challenges


// ////////////////////////////////////////////
// // Problem #1: Compressing
//int main() {
//    string str;
//    cin >> str;
//
//    int counter = 1;
//    for (int i = 1; i < str.size(); i++) {
//
//        if (str[i] != str[i - 1]) {
//            cout << str[i - 1] << counter << "_";
//            counter = 1;
//        } else if (i == str.size() - 1) cout << str[i] << counter + 1;
//        else counter++;
//    }
//}
//


// ////////////////////////////////////////////
// // Problem #2: Compare strings
// // Read 2 strings, then output Yes if the first string smaller than or equal to second string. otherwise, output No
// // Don't use < operator to compare strings. use loops
//int main() {
//    string str1, str2;
//    cin >> str1 >> str2;
//
//    bool is_str2_smaller = true;
//    for (int i = 0; i < str2.size(); i++) {
//        if (!str1[i]) is_str2_smaller = false;
//    }
//
//    if (is_str2_smaller) cout << "YES";
//    else cout << "NO";
//
//    return 0;
//}


// ////////////////////////////////////////////
// // Problem #3: Add 5555
//int main() {
//    string num;
//
//    // Guarantee input: must be 6 digits or more
//    cin >> num;
//
//    int sz = num.size();
//
//    int carry = 0;
//    for (int i = 0; i < sz; ++i) {
//        int digit = num[sz - 1 - i] - '0';
//
//        if (i < 4)
//            digit += 5;			// add 5 in first 4 times
//        digit += carry;		// add any carry
//
//        if (digit >= 10)
//            digit -= 10, carry = 1;
//        else
//            carry = 0;
//
//        num[sz - 1 - i] = digit + '0';
//    }
//    if(carry)
//        cout<<1;
//    cout << num;
//
//    return 0;
//}


int main() {
    int const MAX = 10000;
    string name[MAX], gender[MAX];
    int salary[MAX], age[MAX], employee_number = 0;

    while (true) {
        int choice;
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Wrong Choice Please Select A Choice Between 1 & 4";
            cin >> choice;
        }

        if (choice == 1) {
            cout << "Please enter Employee Name, Age, Salary, Gender";
            cin >> name[employee_number] >> age[employee_number] >> salary[employee_number] >> gender[employee_number];
            employee_number++;
        }

        if (choice == 2) {
            for (int i = 0; i <= employee_number; i++) {
                if (age[i] != 0) {
                    cout << "Name: " << name[i] << " Age: " << age[i] << " Salary: " << salary[i] << " Gender: "
                         << gender[i] << endl;
                }
            }
        }

        if (choice == 3) {
            int start_age, end_age;
            cout << "Please Enter Start Age: ";
            cin >> start_age;
            cout << "Please Enter End Age: ";
            cin >> end_age;

            for (int i = 0; i <= employee_number; i++) {
                if (start_age <= age[i] && age[i] <= end_age) {
                    age[i] = 0;
                    salary[i] = 0;
                }
            }
        }

        if (choice == 4) {
            string employee_name;
            int new_salary;
            cout << "Please enter the name of the employee that you want to update his salary";
            cin >> employee_name;

            bool found_employee = false;
            for (int i = 0; i <= employee_number; i++) {
                if (employee_name == name[i]) {
                    cout << "Please enter the new salary";
                    cin >> new_salary;

                    salary[i] = new_salary;
                    found_employee = true;
                    cout << "Name: " << name[i] << " Age: " << age[i] << " Salary: " << salary[i] << " Gender: "
                         << gender[i];
                }
            }
            if (!found_employee) cout << "Employee Not Found!";
        }
    }
    return 0;
}