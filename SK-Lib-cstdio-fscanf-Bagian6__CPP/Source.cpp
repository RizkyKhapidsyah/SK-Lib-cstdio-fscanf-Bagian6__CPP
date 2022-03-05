#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char name[80];
    int age, salary;

    FILE* pFile = fopen("employees.txt", "r");

    while (fscanf(pFile, "%s %i %i", name, &age, &salary) != EOF) {
        printf("%s is %i years old and earns %i dollars.\n", name, age, salary);
    }

    fclose(pFile);

    _getch();
    return 0;
}