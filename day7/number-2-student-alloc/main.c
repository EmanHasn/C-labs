#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int studentNo;
    float grade;
};

int main()
{
    struct student *s;
    int n=3;
    /*Allocate memory dynamically*/
    s=(struct student*)malloc( n *sizeof(struct student));

    if(s == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("memory allocated malloc\n");
        for(int i=0; i<n; i++)
        {
            printf("\nstudentNo number: %d\n", i + 1);
            printf("Enter name: ");
            scanf("%s", s[i].name);
            printf("\nEnter grade number: ");
            scanf("%d",&s[i].grade);
            system("cls");
        }
        for(int i=0; i<n; i++)
        {
            printf("\nstudentNo number: %d\n", i + 1);
            printf("name: ");
            puts(s[i].name);
            printf("grade: %.1f", s[i].grade);
            printf("\n");
        }
        printf("\n");
        printf("malloc memory done\n");
    }


    printf("\n\nre-allocated");
    n = 5;
    s=(struct student*)realloc( s, n *sizeof(struct student));
       if(s == NULL )
    {
        printf("\n Memory not allocated");
        exit(0);
    }
    else
    {
        printf("\n Memory re-allocated done\n");
        for(int i=0; i<n; i++)
        {
            printf("\nstudentNo number: %d\n", i + 1);
            printf("Enter name: ");
            scanf("%s", s[i].name);
            printf("\nEnter grade number: ");
            scanf("%d",&s[i].grade);
             system("cls");
        }
        for(int i=0; i<n; i++)
        {
            printf("\nstudentNo number: %d\n", i + 1);
            printf("name: ");
            puts(s[i].name);
            printf("grade: %.1f", s[i].grade);
            printf("\n");
        }
        printf("\n");

        free(s);

        printf("\nMemory free done\n\n\n");

    }


    return 0;
}
