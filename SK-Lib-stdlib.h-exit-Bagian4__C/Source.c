#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp = fopen("data.txt", "r");
    
    if (fp == NULL) {
        fprintf(stderr, "error opening file data.txt in function main()\n");
        exit(EXIT_FAILURE);
    }
    
    fclose(fp);
    
    printf("Normal Return\n");
    
    _getch();
    return EXIT_SUCCESS;
}