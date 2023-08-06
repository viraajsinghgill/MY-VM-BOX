#include <stdio.h>

struct people
{
    char name[100];
    int age;
    char sex;
    int DOB;
};
int main()
{
    struct people p1[10];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the NAME of people%d:- ", i + 1);
        scanf("%s", p1[i].name);

        printf("Enter the AGE of people%d:- ", i + 1);
        scanf("%d", &p1[i].age);

        printf("Enter the SEX of people%d(in F/M):- ", i + 1);
        scanf("%s", &p1[i].sex);

        printf("Enter the DOB of people%d:- ", i + 1);
        scanf("%d", &p1[i].DOB);
    }
    printf("\nHere is the list of female:- \n");
    for (int i = 0; i < 2; i++)
    {
        if (p1[i].sex == 'F'||p1[i].sex == 'f')
        {
           printf("%s ", p1[i].name);
        printf("%d ", p1[i].age);
        printf("%c ", p1[i].sex);
        printf("%d\n", p1[i].DOB);
        }
        
        
    }

    return 0;
}
