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