#include <stdio.h>

int matrix_osszeg(const int sorok,const int oszlopok,const int matrix[sorok][oszlopok])
{
    int osszeg = 0;
    for (int i = 0; i < sorok; i++)
    {
        for (int j = 0; j < oszlopok; j++)
        {
            osszeg += matrix[i][j];
        }
    }
    return osszeg;
}

int main()
{
    int tomb[] = {7, 4, 6, 5};
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {11, 12, 13, 14, 15},
        {56, 74, 32, 64, 128},
        {43, 44, 45, 46, 23},
        {9, 8, 7, 6, 5}
    };
    int sorok = 5;
    int oszlop = 5;

    int osszeg = matrix_osszeg(sorok, oszlop, matrix);

    printf("%d\n",osszeg);
    return 0;
}