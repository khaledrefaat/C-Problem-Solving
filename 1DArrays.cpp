#include <iostream>

using namespace std;

// // Practice 1 #1 => Find the first and 2nd maximum value
//int main() {
//// // This was the easiest way I could think of to solve that problem
////    int n, arr[200];
////    cin >> n;
////    for (int i = 0; i < n; i++) {
////        cin >> arr[i];
////    }
////
////    int max_value = 0, second_max = 0;
////
////    for (int i = 0; i < n; i++) {
////        if (arr[i] > max_value) max_value = arr[i];
////    }
////    for (int i = 0; i < n; i++) {
////        if (arr[i] > second_max && arr[i] < max_value) second_max = arr[i];
////    }
////    cout << "Max Value = " << max_value << endl;
////    cout << "Second Max Value = " << second_max;
//
////    /////////////////////////////////////////////////////////////////////////////////
//
//// // Doctor Mostafa Way of solving that problem
//    int n, arr[200];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    int max_value, second_max;
//    if (arr[0] > arr[1]) {
//        max_value = arr[0];
//        second_max = arr[1];
//    } else {
//        max_value = arr[1];
//        second_max = arr[0];
//    }
//
//    for (int i = 2; i < n; i++) {
//        if (arr[i] > max_value) {
//            max_value = arr[i];
////  //          in that case we already know that max_value > than arr[i] so if arr[i] > second_max let's assign it to second_max
//        } else if (arr[i] > second_max) {
//            second_max = arr[i];
//        }
//    }
//    cout << "Max Value = " << max_value << endl;
//    cout << "Second Max Value = " << second_max;
//
//
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////
// // The Practice #2 was so easy that it's not even worth to write


//int main() {
////  // Practice 2 #2 => Reverse in place
////    int n, arr[200];
////    cin >> n;
////    for (int i = 0; i < n; i++) {
////        cin >> arr[i];
////    }
////
////    for (int i = 0; i < n / 2; i++) {
////        int last = n - i - 1;
////        int temp = arr[i];
////        arr[i] = arr[last];
////        arr[last] = temp;
////    }
////
////    for (int i = 0; i < n; i++) {
////        cout << arr[i] << ' ';
////    }
//
//////////////////////////////////////////////////////////////////////////////
//// Practice 2 #2 => Find most frequent number
//    int n, arr[200], freq[150]{0};
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        freq[arr[i]]++;
//    }
//
//    int max_index = -1;
//    for (int i = 0; i < 150; i++) {
//        if (max_index == -1 || freq[max_index] < freq[i]) {
//            max_index = i;
//        }
//    }
//    cout << max_index << " Repeated " << freq[max_index] << " Times : The Largest";
//    return 0;
//}


//    Easy To Medium Challenges
int main() {
// //   Problem #1 => Is increasing Array
// //   Read an integer N, then read N(<= 200) integers, Print Yes if the array is increasing
// //   An array is increasing if every element is >= the previous one
// // Input 4 1 2 2 5, Output => Yes, Input 5 1 0 7 8 9, OutPut => No

//    int n, arr[200];
//    cin >> n;
//
//    bool is_increasing = true;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        if (i > 0 && arr[i - 1] > arr[i]) {
//            is_increasing = false;
//        }
//    }
//
//    if (is_increasing == 1) {
//        cout << "Yes";
//    } else {
//        cout << "No";
//    }

///////////////////////////////////////////////////////////////////////
// // Problem #2 => Replace MinMax
// // Read an integer N(<= 200), then read N integers, Assume all values [0, 2000], Print the array after doing the following
// // Find the minimum number in these numbers.
// // Find the maximum number in these numbers.
// // Replace each minimum number with maximum number and vise versa
// // Input 7 4 1 3 10 8 10 10, Output => 4 10 3 1 8 1 1

//    int n, arr[200];
//    cin >> n;
//    int min = 2000, max = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == max) {
//            arr[i] = min;
//        } else if (arr[i] == min) {
//            arr[i] = max;
//        }
//        cout << arr[i] << " ";
//    }

///////////////////////////////////////////////////////////////////////
// // Problem #3 => Unique numbers of ordered list
// // Read N(< 1000), followed by reading N integers(0 <= value <= 500), the N numbers are ordered from small to large
// // Print the unique list of the numbers, but preserve the given order
// // input => 12 1 1 2 2 2 5 6 6 7 8 9 9
// // output => 1 2 5 6 7 8 9
// // Don't use nested loops and, use only 1 single array or, do it without arrays
//    int n, arr[1000];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        if (i == 0) {
//            cout << arr[i] << " ";
//        } else if (arr[i] != arr[i - 1]) {
//            cout << arr[i] << " ";
//        }
//    }

// //////////// Solving The problem without Array
//    int n;
//    cin >> n;
//    int last_value = -1;
//    for (int i = 0; i < n; i++) {
//        int tmp;
//        cin >> tmp;
//        if (i == 0) {
//            cout << tmp << " ";
//            last_value = tmp;
//        } else if (tmp != last_value) {
//            cout << tmp << " ";
//            last_value = tmp;
//        }
//    }

///////////////////////////////////////////////////////////////////////
// // Problem #4 => Is Palindrome
// // Read integer N(< 1000), then read n integers of any array, determine if the array is palindrome or not
// // An array called palindrome if it reads the same backwards and forward
//    int n, arr[1000];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    bool is_palindrome = true;
//    for (int i = 0; i < n / 2; i++) {
//        int last = n - (i + 1);
//        if (arr[i] != arr[last]) {
//            is_palindrome = false;
//        }
//    }
//    if (is_palindrome) {
//        cout << "Yes";
//    } else {
//        cout << "No";
//    }

    return 0;
}
