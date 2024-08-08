#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[50];
    int studentNo;
    float grade;
};

int main()
{
    //C program to read and print the N student
     struct student s [2];
     int i;

    // read
    for (i = 0; i < 2; ++i) {
        s[i].studentNo = i + 1;
        printf("\nstudent number%d,\n", s[i].studentNo);
        printf("name: ");
        scanf("%s", s[i].name);
        printf("grade: ");
        scanf("%f", &s[i].grade);
        system("cls");
    }
    printf("\n \nList of students:\n\n");

    // print
    for (i = 0; i < 2; ++i) {
        printf("\nstudentNo number: %d\n", i + 1);
        printf("name: ");
        puts(s[i].name);
        printf("grade: %.1f", s[i].grade);
        printf("\n");
    }
    return 0;
}
