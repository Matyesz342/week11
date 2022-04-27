#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main()
{
    char sor[] = "aa,;,bbb,,,;cc;,,d";
    char *ptr;

    ptr = strtok(sor, ",;");

    while (ptr != NULL) {
        puts(ptr);
        ptr = strtok(NULL, ",;");
    }

    return 0;
}