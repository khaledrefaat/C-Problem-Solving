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