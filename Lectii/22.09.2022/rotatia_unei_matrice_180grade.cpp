// C++ program to rotate a matrix by 180 degrees
#include <bits/stdc++.h>
#define N 3

// Function to Rotate the matrix by 180 degree
void rotateMatrix(int mat[][N])
{
    // Simply print from last cell to first cell.
    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--)
            std::cout << mat[i][j] << ' ';

        std::cout << '\n';
    }
}

// Driven code
int main()
{
    int mat[N][N] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    rotateMatrix(mat);
}
