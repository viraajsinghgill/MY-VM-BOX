#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    char branch[2];
    float marks;
};

int main()
{
    int n;
    char temp;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    struct student st[n];
    printf("Enter the details of 5 students : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d student \n", i + 1);
        printf("\nRoll no : ");
        scanf("%d", &st[i].rollno);

        printf("Name : ");
      //  scanf("%c", &temp);
        scanf("%c", st[i].name);

        printf("Branch : ");
        //scanf("%c", &temp);
        scanf("%c", st[i].branch);

        printf("Enter the Marks  : ");
        scanf("%f", &st[i].marks);
        printf("\n");
    }
    char br;
    printf("Enter the branch of the student : ");
    scanf("%c", &temp);
    scanf("%c", &br);
    printf("\n\nDetails of the Students of branch %c: ", br);
    for (int i = 0; i < n; i++)
    {
        if (st[i].branch == "it")
        {
            printf("Roll No. : %d", st[i].rollno);
            printf("\nName : %s", st[i].name);
            printf("\nMarks : %.2f", st[i].marks);
        }
        else
         printf("not present");
    }
    return 0;
}
