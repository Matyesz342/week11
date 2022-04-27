#include <stdio.h>
#include <string.h>
#include "prog1.h"

void kiir_matrix(int sor, int oszlop, string matrix[][oszlop])
{
    for (int i = 0; i < sor; i++)
    {
        for (int j = 0; j < oszlop; j++)
        {
            printf("%s\t\t", matrix[i][j]);
        }
        puts("\n");
    }
    
}

int main()
{
    string szavak[2][3] = {
        {"bab", "kiwi", "narancs"},
        {"alma", "eper", "malna"}
    };
    int sor = 2;
    int oszlop = 3;
    kiir_matrix(sor, oszlop, szavak);

    puts("END");
    return 0;
}