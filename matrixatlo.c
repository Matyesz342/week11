#include <stdio.h>

void kiir_matrix(int n, int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", matrix[i][i]);
    }
    
}

int main()
{
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {11, 12, 13, 14, 15},
        {56, 74, 32, 64, 128},
        {43, 44, 45, 46, 23},
        {9, 8, 7, 6, 5}
    };
    int n = 5;
    kiir_matrix(n, matrix);

    puts("END");
    return 0;
}