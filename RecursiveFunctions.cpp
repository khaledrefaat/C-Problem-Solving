#include <iostream>
#include <cmath>

using namespace std;

// //////////////////////////////////////////////////////////////
// // Easy to medium challenges

// // Problem #1: Length of 3n+1
// // Implement 3n+1 function to compute the length of the sequence
// // int length3nPlus1(int n): length3nPlus1(60) => 9

//int length3nPlus1(int n) {
//    if (n == 1) return 1;
//
//    if (n % 2 == 0) return 1 + length3nPlus1(n / 2);
//    else return 1 + length3nPlus1(3 * n + 1);
//}

//int main() {
//    cout << length3nPlus1(6);
//
//}

// /////////////////////////////
// // Problem #2: Power function
// // int myPow(int value, int p = 2)
// // return value * value .....*values p times
// // myPow(7, 3) = 7 * 7 * 7 => 343
// // Note: if p = 0, answer is always 1

//int myPow(int value, int p = 2) {
//    if (p == 0) return 1;
//
//    return value *= myPow(value, p - 1);
//}
//
//int main() {
//    cout << myPow(7, 3);
//}



// /////////////////////////////
// // Problem #3: Array maximum
// // int arrMax(int arr[], int len)
// // write a function that computes array maximum
// // input 1, 8, 2, 10, 3 => 10

// // My Solution
//int arrMax(int arr[], int len, int max = 0) {
//    if (len == -1) return max;
//
//    if (arr[len] > max) max = arr[len - 1];
//    return arrMax(arr, len - 1, max);
//}

// // Doctor mostafa's solution
//int arrMax(int arr[], int len) {
//    if (len == 1) return arr[0];
//
////    // Doctor mostafa uses the max function here to figure out the largest value
//    int subResult = arrMax(arr, len - 1);
//    return max(subResult, arr[len - 1]);
//}
//
//int main() {
//    int arr[] = {1, 8, 2, 10, 3};
//    cout << arrMax(arr, 5);
//}

// /////////////////////////////
// // Problem #4: Array sum
// // int sum(int arr[], int len)
// // write a function that computes array sum
// // input 1, 8, 2, 10, 3 => 24

// // My Solution
//int sum(int arr[], int len) {
//    if (len == -1) return 0;
//
//    return arr[len] += sum(arr, len - 1);
//}

// // Doctor mostafa's solution
//int sum(int arr[], int len) {
//    if (len == 1) return arr[0];
//
//    int subResult = sum(arr, len - 1);
//    return subResult + arr[len - 1];
//}
//
//int main() {
////    // related to my solution
////    int arr[] = {1, 8, 2, 10, 3};
////    cout << sum(arr, 4);
//
//// // doctor mostafa's solution
//    int arr[] = {1, 8, 2, 10, 3};
//    cout << sum(arr, 5);
//}


// /////////////////////////////
// // Problem #5: Array average
// // double average(int arr[], int len)
// // write a function that computes array average
// // don't divide by length in the main
// // input 1, 8, 2, 10, 3 => 4.8

// I just cant understand this solution -_-
// I would just take 2 arguments for the len or sum it in a function and divided it in the main or in other function
//double averageArr(int arr[], int len) {
//    if (len == 1) return arr[0];
//
//    double subResult = averageArr(arr, len - 1);
//    subResult = subResult * (len - 1);
//    return (subResult + arr[len - 1]) / len;
//}
//
//int main() {
//    int arr[] = {1, 8, 2, 10, 3};
//    cout << averageArr(arr, 5);
//}

// /////////////////////////////
// // Problem #6: Array Increment

//void arrayIncrement(int arr[], int len) {
//    if (len == 0) {
//        return;
//    }
//    arrayIncrement(arr, len - 1);
//    arr[len - 1] += len - 1;
//}
//
//
//int main() {
//    int arr[] = {1, 8, 2, 10, 3};
//
//    arrayIncrement(arr, 5);
//    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
//
//    return 0;
//}

// /////////////////////////////
// // Problem #7: Array Accumulation

//void accumulateArr(int arr[], int len) {
//    if (len == 1) return;
//
//    accumulateArr(arr, len - 1);
//    arr[len - 1] += arr[len - 2];
//}
//
//int main() {
//    int arr[] = {1, 8, 2, 10, 3};
//
//    accumulateArr(arr, 5);
//
//    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
//
//    return 0;
//}

// /////////////////////////////
// // Problem #8: Left Max

//void leftMax(int arr[], int len) {
//    if (len == 1) return;
//
//    leftMax(arr, len - 1);
//
//    if (arr[len - 1] < arr[len - 2]) arr[len - 1] = arr[len - 2];
//}
//
//int main() {
//    int arr[] = {1, 3, 5, 7, 4, 2};
//
//    leftMax(arr, 6);
//
//    for (int i = 0; i < 6; i++) cout << arr[i] << " ";
//}


// //////////////////////////////////////////////////////////////
// // Medium To Hard Challenges

// /////////////////////////////
// // Problem #9: Right Max

//void rightMax(int arr[], int len, int startPosition = 0) {
//    if (startPosition + 1 == len) return;
//
//    rightMax(arr, len, startPosition + 1);
//
//    if (arr[startPosition] < arr[startPosition + 1]) arr[startPosition] = arr[startPosition + 1];
//}
//

// // Doctor Mostafa's solution
//void rightMaxV1(int arr[], int len, int start = 0) {
//    if (start == len - 1) return;
//
//    rightMaxV1(arr, len, start + 1);
//    arr[start] = max(arr[start], arr[start + 1]);
//}
//
//// without start index
//void rightMaxV2(int arr[], int len) {
//    if (len == 1) return;
//
////    // it's as if we shifted the first element of the array so we have now to compare the new 0 and 1 index of the array
//    rightMaxV1(arr + 1, len - 1);
//    arr[0] = max(arr[0], arr[1]);
//}
//
//int main() {
//    int arr[] = {1, 3, 5, 7, 4, 2};
//
////    rightMaxV1(arr, 6);
//    rightMaxV2(arr, 6);
//
//    for (int i = 0; i < 6; i++) cout << arr[i] << " ";
//}

// /////////////////////////////
// // Problem #10: Suffix Sum

//int suffixSum(int arr[], int len, int count) {
//    if (count == 1) return arr[len - count];
//
//    return arr[len - count] + suffixSum(arr, len, count - 1);
//}
//
//int main() {
//    int arr[] = {1, 3, 4, 6, 7};
//
//    cout << suffixSum(arr, 5, 3);
//}

// /////////////////////////////
// // Problem #11: Prefix Sum

//int prefixSum(int arr[], int count) {
//    if (count == 0) return 0;
//
//    return arr[count - 1] + prefixSum(arr, count - 1);
//}
//
//int main() {
//    int arr[] = {1, 3, 4, 6, 7};
//
//    cout << prefixSum(arr, 3);
//}

// /////////////////////////////
// // Problem #12: Is Palindrome


//bool isPalindrome(int arr[], int len, int start = 0) {
//    if (start >= floor((len - 1) / 2)) return true;
//
//    if (arr[start] != arr[(len - 1) - start]) return false;
//
//    isPalindrome(arr, len, start + 1);
//}

// // The following next 2 functions are doctor mostafa's solution
//bool isPalindromeV1(int arr[], int end, int start = 0) {
//    if (start >= end) return true;
//
//    if (arr[start] != arr[end]) return false;
//
//    isPalindromeV1(arr, end - 1, start + 1);
//}
//
//bool isPalindromeV2(int arr[], int end) {
//    if (end <= 0) return true;
//
//    if (arr[0] != arr[end]) return false;
//
//    isPalindromeV2(arr + 1, end - 2);
//}


//int main() {
//    int arr[] = {1, 3, 4, 6, 7};
//    int arr2[] = {1, 2, 4, 2, 1};
//
////    cout << isPalindromeV1(arr, 4) << " " << isPalindromeV1(arr2, 4);
//    cout << isPalindromeV2(arr, 4) << " " << isPalindromeV2(arr2, 4);
//}

// /////////////////////////////
// // Problem #13: Is Prefix

//bool isPrefix(string str1, string str2, int index = 0) {
//    if (index == str2.size()) return true;
//
//    if (str1[index] != str2[index]) return false;
//
//    return isPrefix(str1, str2, index + 1);
//}
//
//int main() {
//    string str1 = "abcdefg", str2 = "abc", str3 = "asd";
//    cout << isPrefix(str1, str2) << " " << isSuffix(str1, str3);
//}

// /////////////////////////////
// // Problem #17: Fibonacci


// // My Solution
//int fibonacci(int n, int arr[], int counter = 2) {
//    if (n == 1) return 1;
//    if (n == 2) return 2;
//
//    if (counter == n + 1) return arr[n];
//
//    arr[counter] = arr[counter - 1] + arr[counter - 2];
//    return fibonacci(n, arr, counter + 1);
//}
//
//int fibonacci(int n) {
//    if (n <= 1) return 1;
//
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//    int arr[7] = {1, 1};
//    cout << fibonacci(6, arr);
//}