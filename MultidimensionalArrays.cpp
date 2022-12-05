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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// // Medium to hard challenges



// // I didn't understand this problem and what should I do, so I skip it
/////////////////////////////////////////////////////
// // Problem #1: How many primes
// // Read 2 integers N & M, then read matrix NxM.
// // Then read integer Q, for queries. For each query read 4 integers: i j r c
// //                                                                   . represents a grid (sub matrix): top left (i, j) for(#rows, #cols)
// // For each query, print how many prime numbers in the requested grid.
// // each query should be answered using nested loops maximum not more
// // in the future: with smart pre computation it can be done without loops
// // it's called image integral in computer vision field.
//int main() {
//    int N, M;
//    cin >> N >> M;
//    int arr[N][M];
//    for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) cin >> arr[i][j];
//
//    int Q;
//    cin >> Q;
//
//    for (int count = 0; count < Q; count++) {
//        int i, j, r, c;
//        cin >> i >> j >> r >> c;
//    }
//
//
//    return 0;
//}

/////////////////////////////////////////////////////
// // Problem #2: Find mountains
// // Read integer N & M, then read matrix NxM. print all positions that are mountain. Position is mountain if value > 8 neighbours values
// // Code smartly
// // Input : 3 3
// //        8 6 1
// //        3 2 9
// //        1 6 4
// // Output: 0 0
////          1 2

// // This was Doctor mostafa's solution
//int main() {
//    int N, M;
//    cin >> N >> M;
//    int matrix[N][M];
//    for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) cin >> matrix[i][j];
//
//    int di[8] = {1, 0, -1, 0, -1, 1, -1, 1};
//    int dj[8] = {0, 1, 0, -1, -1, 1, 1, -1};
//
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < M; j++) {
//            bool isValidMountain = true;
//            for (int d = 0; d < 8; d++) {
//                int ni = di[d] + i;
//                int nj = dj[d] + j;
//
//                if (ni < 0 || ni >= N || nj < 0 || nj >= M) continue;
//
//                if (matrix[ni][nj] >= matrix[i][j]) {
//                    isValidMountain = false;
//                    break;
//                }
//            }
//
//            if (isValidMountain) cout << i << " " << j << endl;
//        }
//
//
//    return 0;
//}


/////////////////////////////////////////////////////
// // Problem #3: Active Robot
// // Read integer n, m represents a matrix. a robot start at cell (0, 0)
// // Read integer K, then K commands each command is 2 values
// //   Direction from 1 to 4: up right down left
// //   Steps: a number to number steps to take in the direction. steps [1, 100000000]
// //   if the robot hits the wall during the move, it circulates in the matrix
// // For every command, print where the robot is
// // Inputs:
// //           3 4     4    2 1     3 2       42       13
// // 21 means to right 1 step - 3 2 means down 2 steps

// // This is my solution
//int main() {
//    int N, M;
//    cin >> N >> M;

//    int K;
//    cin >> K;
//
//    int row = 0, column = 0;
//    for (int i = 0; i < K; i++) {
//        int direction, steps;
//        cin >> direction >> steps;
//
////        if (direction == 1) {
////            row = row - steps;
////            if (row < 0) row = N - 1;
////        }
////        if (direction == 2) column = (column + steps) % M;
////        if (direction == 3) row = (row + steps) % N;
////        if (direction == 4) {
////            column = column - steps;
////            if (column < 0) column = M - 1;
////        }
//        switch (direction) {
//            case 1:
//                row = row - steps;
//                if (row < 0) row = N - 1;
//                break;
//            case 2:
//                column = (column + steps) % M;
//                break;
//            case 3:
//                row = (row + steps) % N;
//                break;
//            case 4:
//                column = column - steps;
//                if (column < 0) column = M - 1;
//                break;
//            default:
//                break;
//        }
//        cout << "(" << row << "," << column << ")" << endl;
//    }
//    return 0;
//}
// // Doctor Mostafa's solution Very smart way as always
//int main() {
//    int n, m, k, r = 0, c = 0;
//    cin >> n >> m >> k;
//
////    // Doctor mostafa here gives 0 to the value of right and left, because rows(rd) don't have right and left
////    //  The same for column(cd) it has no up and down so first and third position have 0
//    int rd[4] = {-1, 0, 1, 0};
//    int cd[4] = {0, 1, 0, -1};
//
//    while (k--) {
//        int dir, steps;
//        cin >> dir >> steps;
//        --dir;
//
//        r = (r + rd[dir] * steps) % n;
//        c = (c + cd[dir] * steps) % m;
//
//
//        if (r < 0) r += n;
//        if (c < 0) c += m;
//
//        cout << "(" << r << "," << c << ")" << endl;
//    }
//}


// I didn't understand this problem so i skipped it for now
/////////////////////////////////////////////////////
// // Problem #4: Flatten 3D Array
// // read 3 numbers: depth, rows, columns, cols the dimensions of 3d array
// // then read integer either 1 (convert 3D to 1D) or 2 (1D to 3D)
// // if input was 1, then read 3 integers d, r, c then convert to position in 1D array
// // if input was 2, then read 1 integer position, then convert to 3D array position
// // to generalize if we have e.g. 6D array
// // input  => outputs
// // 3 4 5       1       100 => 20
// // 3 4 5       2       20 => 1 0 0
// // 3 4 5       1       1 1 1 => 26
// // 3 4 5       1       2 3 2 => 57
// // 3 4 5       1       2 0 0 => 40
// // 3 4 5       2       59 => 2 3 4
