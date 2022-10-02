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

// //////////////////////////////////////////////////////////////////////////////////////
//    Easy To Medium Challenges
// //////////////////////////////////////////////////////////////////////////////////////
//int main() {
//// //   Problem #1 => Is increasing Array
//// //   Read an integer N, then read N(<= 200) integers, Print Yes if the array is increasing
//// //   An array is increasing if every element is >= the previous one
//// // Input 4 1 2 2 5, Output => Yes, Input 5 1 0 7 8 9, OutPut => No
//
////    int n, arr[200];
////    cin >> n;
////
////    bool is_increasing = true;
////    for (int i = 0; i < n; i++) {
////        cin >> arr[i];
////        if (i > 0 && arr[i - 1] > arr[i]) {
////            is_increasing = false;
////        }
////    }
////
////    if (is_increasing == 1) {
////        cout << "Yes";
////    } else {
////        cout << "No";
////    }
//
/////////////////////////////////////////////////////////////////////////
//// // Problem #2 => Replace MinMax
//// // Read an integer N(<= 200), then read N integers, Assume all values [0, 2000], Print the array after doing the following
//// // Find the minimum number in these numbers.
//// // Find the maximum number in these numbers.
//// // Replace each minimum number with maximum number and vise versa
//// // Input 7 4 1 3 10 8 10 10, Output => 4 10 3 1 8 1 1
//
////    int n, arr[200];
////    cin >> n;
////    int min = 2000, max = 0;
////    for (int i = 0; i < n; i++) {
////        cin >> arr[i];
////        if (arr[i] > max) {
////            max = arr[i];
////        }
////        if (arr[i] < min) {
////            min = arr[i];
////        }
////    }
////    for (int i = 0; i < n; i++) {
////        if (arr[i] == max) {
////            arr[i] = min;
////        } else if (arr[i] == min) {
////            arr[i] = max;
////        }
////        cout << arr[i] << " ";
////    }
//
/////////////////////////////////////////////////////////////////////////
//// // Problem #3 => Unique numbers of ordered list
//// // Read N(< 1000), followed by reading N integers(0 <= value <= 500), the N numbers are ordered from small to large
//// // Print the unique list of the numbers, but preserve the given order
//// // input => 12 1 1 2 2 2 5 6 6 7 8 9 9
//// // output => 1 2 5 6 7 8 9
//// // Don't use nested loops and, use only 1 single array or, do it without arrays
////    int n, arr[1000];
////    cin >> n;
////    for (int i = 0; i < n; i++) {
////        cin >> arr[i];
////        if (i == 0) {
////            cout << arr[i] << " ";
////        } else if (arr[i] != arr[i - 1]) {
////            cout << arr[i] << " ";
////        }
////    }
//
//// //////////// Solving The problem without Array
////    int n;
////    cin >> n;
////    int last_value = -1;
////    for (int i = 0; i < n; i++) {
////        int tmp;
////        cin >> tmp;
////        if (i == 0) {
////            cout << tmp << " ";
////            last_value = tmp;
////        } else if (tmp != last_value) {
////            cout << tmp << " ";
////            last_value = tmp;
////        }
////    }
//
/////////////////////////////////////////////////////////////////////////
//// // Problem #4 => Is Palindrome
//// // Read integer N(< 1000), then read n integers of any array, determine if the array is palindrome or not
//// // An array called palindrome if it reads the same backwards and forward
////    int n, arr[1000];
////    cin >> n;
////    for (int i = 0; i < n; i++) {
////        cin >> arr[i];
////    }
////
////    bool is_palindrome = true;
////    for (int i = 0; i < n / 2; i++) {
////        int last = n - (i + 1);
////        if (arr[i] != arr[last]) {
////            is_palindrome = false;
////        }
////    }
////    if (is_palindrome) {
////        cout << "Yes";
////    } else {
////        cout << "No";
////    }
//
//    return 0;
//}

// //////////////////////////////////////////////////////////////////////////////////////
// //    Medium Challenges
// //////////////////////////////////////////////////////////////////////////////////////

//int main() {
// // Problem #2 : Search for a number, Read an integer N <= 200 integers [0 <= A[i] <= 500]
// // We will search in this array for numbers
// // Then read integer Q (for a number of queries), then read integer Q, then read Q integers
// // For each integer, find the last occurance in the array, print its index.
//    int n, arr[200], q;
//    cin >> n;
//    for (int i = 0; i < n; i++) cin >> arr[i];
//
//    cin >> q;
//
//    for (int i = 0; i < q; i++) {
//        int Q;
//        cin >> Q;
//        int position = 0;
//        for (int j = 0; j < n; j++) {
//            if (arr[j] == Q) {
//                position = j;
//            }
//        }
//
//        if (position == 0) {
//            cout << '\n' << -1;
//        } else {
//            cout << '\n' << position;
//        }
//    }

// Dr Mostafa's solution for the non nested loops

//    const int N = 500 + 1;
//    int n, q, x, arr[N];
//
//    for (int i = 0; i < N; i++) arr[i] = -1;
//
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        arr[x] = i;
//    }
//
//    cin >> q;
//    int num;
//    while (q--) {
//        cin >> num;
//        cout << arr[num] << endl;
//    }
//

//  return 0;
//}



// /////////////////////////////////////////////////////////////////////////
// // Problem #3: Read an integer N <= 200, then read N <= integers. Find the value that repeated the most number of times. Each integer is -500 <= value >= 270
// // For Example for array: 7 -1 2 -1 3 -1 5 5 => -1 (repeated 3 times)
// // Don't use nested loops

// // This is Doctor mostafa's solution to the problem
//int main() {
//    int n;
//    cin >> n;
//    const int MAX = 500 + 270 + 1;
//    int frequency[MAX] = {0};
//
//    for (int i = 0; i < n; i++) {
//        int value;
//        cin >> value;
//
//        value += 500;
//        frequency[value]++;
//    }
//
//    int mx_pos = 0;
//    for (int i = 0; i < MAX; i++) {
//        if (frequency[i] > frequency[mx_pos]) {
//            cout << (frequency[i]) << endl;
//            mx_pos = i;
//        }
//    }
//
//    cout << mx_pos - 500 << " Has Repeated " << frequency[mx_pos] << " Times";
//
//    return 0;
//}


// /////////////////////////////////////////////////////////////////////////
// // Problem Number #4: Digits frequency
// // Read an integer N, then read N <= 200 integers. for all the digits from 0 to 9, we want to know how many times appeared
// // input 2 78 307 => output: 0 1, 1 0, 2 0 , 3 1, 4 0, 5 0, 6 0, 7 2, 8 1, 9 0
//int main() {
// /////////////////////////////////////////////////////////
// // Again it's doctor mostafa's solution -_-
//    int n, occurrence[10] = {0}, x;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        if (x == 0) {
//            occurrence[0]++;
//        } else {
//            while (x > 0) {
//                int digit = x % 10;
//                occurrence[digit]++;
//                x /= 10;
//            }
//        }
//    }
//    for (int i = 0; i < 10; i++) {
//        cout << i << " " << occurrence[i] << endl;
//    }
//    return 0;
//}

// /////////////////////////////////////////////////////////////////////////
// // Problem Number #5: Unique numbers of unordered list
// // Read an integer N <= 900, followed by reading N integers (0 <= value >= 500). Print the unique list of the numbers, but preserve the given order.
// // input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7 => output: 1 5 2 7 3

//int main() {
//    // // And Again it's doctor mostafa's solution -_-
//    int n;
//    cin >> n;
//    const int MAX = 500 + 1;
//    int is_visited[MAX] = {0};
//
//    for (int i = 0; i < n; i++) {
//        int value;
//        cin >> value;
//
//        if (is_visited[value] == 0) {
//            cout << value << " ";
//            is_visited[value] = 1;
//        }
//    }
//
//    return 0;
//}


// /////////////////////////////////////////////////////////////////////////
// // Problem Number #6: Print sorted list of numbers. Read an integer N <= 900, followed by reading N integers(0 <= value <= 500)
// // input : 13 1 5 5 2 5 7 2 3 3 3 5 2 7 => output: 1 2 2 2 3 3 3 5 5 5 7 7

//int main() {
////    // Finally My Solution ^_^
//    int n;
//    cin >> n;
//    const int MAX = 500 + 1;
//    int frequency[MAX] = {0};
//
//    for (int i = 0; i < n; i++) {
//        int value;
//        cin >> value;
//        frequency[value]++;
//    }
//
////    // The only difference between my code and doctor mostafa's code
///////////////////////////////////////////////////
//
//// // this is mine
////    for (int i = 0; i < MAX; i++) {
////        if (frequency[i] > 0) {
////            while (frequency[i]--) {
////                cout << i << " ";
////            }
////        }
////    }
//
//// // This is doctor mostafa's
//    for (int i = 0; i < MAX; i++) {
//        while (frequency[i]) {
//            frequency[i]--;
//            cout << i << " ";
//        }
//    }
//
//    return 0;
//}


// //////////////////////////////////////////////////////////////////////////////////////
// //    Hard Challenges
// //////////////////////////////////////////////////////////////////////////////////////



// /////////////////////////////////////////////////////////////////////////
// // Problem Number #1: Recaman's sequence. Read an integer N <= 900, followed by reading N integers(0 <= value <= 500)
// i didn't understand this problem, so I skipped it

// /////////////////////////////////////////////////////////////////////////
// // Problem Number #2: Fixed sliding window
// // Read integers K and N, (where K <= N). then read N < 200 integers
// // Find sub-array(consecutive numbers) of K elements that has maximum sum
//int main() {

//  // This was my solution with nested loops
//    int K, N;
//    cin >> K >> N;
//    int tmp = K, arr[N], Max = 0;
//
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    for (int i = 0; i < N; i++) {
//        int acc = 0;
//        for (int j = K - tmp; j < K; j++) {
//            acc += arr[j];
//            cout << arr[j] << " ";
//        }
//        cout << "=> sum = " << acc << endl;
//        K++;
//        if (Max < acc) Max = acc;
//        if (K > N) break;
//    }
//
//    cout << "Max sum = " << Max;

// /////////////////////////////
// // This is doctor mostafa's solution

//    const int N = 200;
//    int k, n, arr[N];
//    cin >> k >> n;
//
//    for (int i = 0; i < n; i++) cin >> arr[i];
//
//    int max_sum = 0;
//    for (int i = 0; i < k; i++) max_sum += arr[i];
//
//    int sum = max_sum, min_index = 0;
//    for (int i = k; i < n; i++) {
//        sum = sum - arr[i - k] + arr[i];
//
//        if (max_sum < sum) {
//            max_sum = sum;
//            min_index = i - k - 1;
//        }
//    }
//
//    cout << min_index << " " << min_index + k - 1 << " " << max_sum;
//
//    return 0;
//}


// /////////////////////////////////////////////////////////////////////////
// // Problem Number #3: Count increasing sub arrays.
// //  Read an integer N, then read N integers < 200
// // output: Count how many sub arrays are increasing in the array
// // if input is 1 2 3 4
// // 1 => [1] [2] [3] [4]
// // 2 => [1 ,2] [2, 3], [3, 4]
// // 3 => [1 , 2, 3] [2, 3, 4]

//int main() {
//        // Here is how doctor mostafa solved the problem with nested loops solution
// /////////////////////////////////////////////////////////////////////////
//    int arr[199];
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) cin >> arr[i];
//
//    int result = 0;
//
//    for (int i = 0; i < n; i++) {
//        result++;
//
//        for (int j = i + 1; j < n; j++) {
//            if (arr[j] >= arr[j - 1]) result++;
//            else break;
//        }
//    }
//    cout << result << endl;
//}


// /////////////////////////////////////////////////////////////////////////
// // Problem Number #4: Josephus problem
// // Read integers N(<200) and K (<= 1000000). Code for small K first
// // Find the game winner for the following game:
// There is a group of N people in circle numbered 1, 2, ... N. Someone is the master of the game. He starts from Person #1. Count K. Then Remove this person from the circle. He Keeps Doing till only 1 person remains

//int main() {
//    int n, k;
//
//    cin >> n >> k;
//
//    // Let's mark them in 0-based array
//    bool is_removed[199] = { 0 };
//
//    int last_pos = 0;	// The first position to simulate from it
//
//    // We will just simulate the running.
//    // Start from last killed position
//    // Count K times, but skip these killed positions already
//    for (int t = 0; t < n; ++t) {
//        int remaining_alive = n - t;
//
//        int current_k = k;
//        // Ignore this if/else condition for now. See bottom of code. It is for handling very large K
//        if (k % remaining_alive == 0)
//            current_k = remaining_alive;
//        else
//            current_k = k % remaining_alive;
//
//
//        int step = 0;
//        int last_person = -1;
//        while (step < current_k) {
//            if (is_removed[last_pos] == 0)	// not removed. consider it and increment the step
//                last_person = last_pos, step++;
//            last_pos = (last_pos + 1) % n;	// loop back to the array if needed
//        }
//        is_removed[last_person] = 1;
//        cout << last_person + 1 << "\n";
//    }
//    /*
//     * About the if else. We want to handle when k is so big
//     * Let's say remaining_alive = 4 and k = 6
//     * 		This is the same as if k = 2   (6%4 = 2)
//     *
//     * 	Similarly
//     * 	Let's say remaining_alive = 4 and k = 10
//     * 		This is the same as if k = 2   (10%4 = 2)
//     *
//     * 	This is the same as the useless cycles in the clock
//     * 		4 is same as any 4 + k*12
//     *
//     * 	So in general, we don't need to iterate k times
//     * 		we only need: k % remaining_alive
//     *
//     * 	But we need 1 special case handling to k % remaining_alive == 0
//     * 		In this case we iterate remaining_alive steps
//     */
//
//    return 0;
//}


// /////////////////////////////////////////////////////////////////////////
// // Problem Number #5: Longest Sub array
// // Read integer N(< 1000) Then N read numbers each is either 0 or 1.
// // Find the longest sub array with number of zeros = numbers of ones
// // inputs: 7 1 0 0 0 1 1 1 => 6
// // input: 19 1 0 0 0 0 0 1 0 1 1 0 1 0 0 0 0 0 0 1 => 8

//int main() {
//
//    int n;
//    int a[1000];	// actually 999
//    int difference[1000*2+1];	// maximum 2000 values with shift 1000
//
//    // mark the difference as never appeared
//    for (int i = 0; i < 2001; ++i)
//        difference[i] = 999999;
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//
//    int maxSubarrayLength1 = 0;
//    int maxSubarrayStartIndex1 = -1;
//    int maxSubarrayEndIndex1 = -1;
//
//    int added = 0;
//
//    difference[0+1000] = -1;	// difference 0 appears before the array (-1)
//
//    for (int i = 0; i < n; i++)
//    {
//        if(a[i] == 1)
//            added += 1;
//        else
//            added -= 1;
//
//        int shift = added + 1000;	// shift to make sure positive
//
//        if(difference[shift] == 999999)
//            difference[shift] = i;	// first time for such accumulated difference to appear
//        else {
//            int subarrayLength = i - difference[shift];
//
//            if (subarrayLength > maxSubarrayLength1) {
//                maxSubarrayLength1 = subarrayLength;
//                maxSubarrayStartIndex1 = difference[shift]+1;
//                maxSubarrayEndIndex1 = i;
//            }
//        }
//    }
//
//    if (maxSubarrayLength1 == 0)
//        cout << "NOT FOUND" << endl;
//    else {
//        cout << maxSubarrayLength1 << endl;
//        for (int i = maxSubarrayStartIndex1; i <= maxSubarrayEndIndex1; i++)
//            cout << a[i] << " ";
//        cout << endl;
//    }
//    // By adding 0 as -1 values, each group of equal ones and zeros
//    // is actually sub-array of sum zero
//
//
//    return 0;
//}
