#include <iostream>

using namespace std;

// /////////////////////////////////////////////////////////////////////
// // Easy Challenges

// // Problem #1: Smaller Row?
// // Read Integers row, columns, then read matrix row*columns. then read query.
// // each query is 2 integers: first and second row indices (1based) compare the 2 rows and print yes if the first row smaller than the second row

//int main() {
//    // My Solution
//    int rows, columns, query;
//    cin >> rows >> columns;
//    int matrix[rows][columns];
//
//    for (int i = 0; i < rows; i++) {
//        int input;
//        for (int j = 0; j < columns; j++) {
//            cin >> input;
//            matrix[rows][columns] = input;
//        }
//    }
//
//    cin >> query;
//
//    int first_row_values, second_row_values;
//    for (int i = 0; i < query; i++) {
//        int choice1, choice2;
//        cin >> choice1 >> choice2;
//
//        first_row_values = 0, second_row_values = 0;
//        for (int j = 0; j < columns; j++) first_row_values += matrix[choice1 - 1][j];
//
//        for (int j = 0; j < columns; j++) second_row_values += matrix[choice2 - 1][j];
//
//        if (first_row_values < second_row_values) cout << "YES" << endl;
//        else cout << "NO" << endl;
//    }

// // Doctor Mostafa's solution
//    int arr[100][100], rows, columns, query;
//    cin >> rows >> columns;
//    for (int i = 0; i < rows; i++) for (int j = 0; j < columns; j++) cin >> arr[i][j];
//
//    cin >> query;
//    while (query--) {
//        int choice1, choice2;
//        cin >> choice1 >> choice2;
//        choice1--;
//        choice2--;
//
//        bool is_smaller = true;
//        for (int j = 0; j < columns; j++)
//            if (arr[choice1][j] >= arr[choice2][j]) {
//                is_smaller = false;
//                break;
//            }
//
//        if (is_smaller) cout << "YES" << endl;
//        else cout << "NO" << endl;
//    }
//
//    return 0;
//}
// /////////////////////////////////////////////////////////////////////
// // Problem #2: Triangular matrix
// // Read integer N, then read square matrix NxN. then print 2values. the sum of upper triangle matrix and the lower triangle.

//int main() {
////    // My Solution
////    int n;
////    cin >> n;
////    int matrix[n][n];
////    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> matrix[i][j];
////
////    int lower_triangle = 0, upper_triangle = 0;
////
////    int lower_counter, upper_counter, limit = n;
////    for (int i = 0; i < n; i++) {
////        lower_counter = i;
////        upper_counter = i;
////        for (int j = 0; j < n; j++) {
////            if (j < limit) lower_triangle += matrix[lower_counter][j];
////            if (lower_counter < limit) lower_counter++;
////
////            if (j < limit) upper_triangle += matrix[j][upper_counter];
////            if (upper_counter < n - 1) upper_counter++;
////        }
////        limit--;
////    }
////    cout << endl << lower_triangle << endl << upper_triangle;
//
//
//    // // Doctor Mostafa did a very neat trick her he didn't save a matrix but calculated every thing on the fly
//
//    int n, upper = 0, lower = 0, val;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> val;
//            if (i <= j) lower += val;
//            if (i >= j) upper += val;
////            // to understand this very neat trick just compare the value of the i and j while looking to the example below
////            8 16 9
////            3 15 27
////            14 25 29
//        }
//    }
//
//    cout << endl << lower << endl << upper;
//
//    return 0;
//}

// /////////////////////////////////////////////////////////////////////
// // Problem #3: Transpose
// // Read integers N, M, then read matrix RowsXColumns. compute another array, the transpose
// //       4*5 Matrix     5*4 matrix
// //   1  2  3  4  5     1 6 11 16
// //   6  7  8  9  10 => 2 7 12 17
// //   11 12 13 14 15 => 3 8 13 18
// //   16 17 18 19 20    4 9 14 19
// //                     5 10 15 20

// // To be honest this is 90% doctor mostafa's solution
//int main() {
//    int arr[100][100], n, m;
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++) {
//            cin >> arr[j][i];
//        }
//    cout << endl;
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}