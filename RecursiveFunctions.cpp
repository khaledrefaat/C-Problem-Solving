#include <iostream>

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