#include <iostream>
using namespace std;
#define MAT_SIZE 5

int row, col;

void Transpose_Mat(int A[][MAT_SIZE], int B[][MAT_SIZE]) {
    for (row = 0; row < MAT_SIZE; row++) {
        for (col = 0; col < MAT_SIZE; col++) {
            B[row][col] = A[col][row];
        }
    }
}
void Print_MAT(int arr[][MAT_SIZE]) {
    for (row = 0; row < MAT_SIZE; row++) {
        for (col = 0; col < MAT_SIZE; col++)
            printf("%d\t", arr[row][col]);
        printf("\n");
    }
}

int main() {
    int A[MAT_SIZE][MAT_SIZE] = { {3,2,6,4,5}, {8,3,5,9,1}, {0,3,2,7,9},{2,1,5,2,4},{5,0,8,2,3} };
    int B[MAT_SIZE][MAT_SIZE] = {};

    Transpose_Mat(A, B);
    Print_MAT(B);
}