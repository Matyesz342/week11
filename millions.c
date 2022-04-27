#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"
#define MAX_LENGTH 256


void gyorsrendez(int tomb[], int min, int max) 
{
   double vezer = tomb[(min+max)/2]; /* vezérelem: középső */
   int i = min, j = max;
   while (i <= j) {                  /* piros/kék válogatás */
      while (tomb[i] < vezer) ++i;
      while (tomb[j] > vezer) --j;
      if (i <= j) {
         double tmp = tomb[i];
         tomb[i] = tomb[j];
         tomb[j] = tmp;
         ++i;
         --j;
      }
   }
 
   if (min < j) gyorsrendez(tomb, min, j); /* rekurzió */
   if (i < max) gyorsrendez(tomb, i, max);
}

void gyorsrendez_indit(int tomb[], int meret) 
{
   gyorsrendez(tomb, 0, meret-1);
}


void tomb_kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", tomb[i]);
    }
    
}

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        puts("Hiba! Nem adott meg egy szoveges allomanyt!\n");
        exit(1);
    }
    char *filename = argv[1];
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Nem sikerult megnyitni a %s nevu fajlt!\n", filename);
        return 1;
    }
    char buffer[MAX_LENGTH];
    int i = 0;
    int *szamok = NULL;
    while (fgets(buffer, MAX_LENGTH, fp))
    {
        szamok = realloc(szamok, (i+1) * sizeof(int));
        szamok[i]= atoi(buffer);
        i++;
        
    }
    fclose(fp);
    gyorsrendez_indit(szamok,i);
    //tomb_kiir(i,szamok);
    tomb_kiir(i,szamok);
    free(szamok);
    return 0;
}