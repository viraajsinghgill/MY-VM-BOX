#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    char branch;
    float marks;
};

int main()
{
    
   // printf("Enter the value of n : ");
    //scanf("%d", &n);
    struct student st[10];
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d student \n", i + 1);
        printf("\nRoll no : ");
        scanf("%d", &st[i].rollno);

        printf("Name : ");
        //scanf("%c", &temp);
        scanf("%c\n", st[i].name);

        printf("Branch : ");
       // scanf("%c", &temp);
        scanf("%c", &st[i].branch);

        printf("Enter the Marks  : ");
        scanf("%f", &st[i].marks);
        printf("\n");
    }
    char br;
    printf("Enter the branch of the student : ");
        scanf("%c", &br);
    printf("\n\nDetails of the Students of branch %c: ", br);
    for (int i = 0; i < 4; i++)
    {
        if (st[i].branch == br)
        {
            printf("Roll No. : %d", st[i].rollno);
            printf("\nName : %s", st[i].name);
            printf("\nMarks : %.2f", st[i].marks);
        }
        printf("\n\n");
    }
    return 0;
}
