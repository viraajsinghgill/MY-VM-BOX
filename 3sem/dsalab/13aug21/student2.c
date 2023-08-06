#include<stdio.h>
struct student
{
  int roll;
  char name[20];
  char gender[1];
  int marks;
  };
int main()
{
  int n,i;
  printf("enter number of students details you want to enter =");
  scanf("%d",&n);
  struct student a[n];
  for(i=0;i<n;i++)
  { 
  printf("student details :%d\n",i);
    printf("enter name =");
    scanf("%s",a[i].name);
    printf("enter roll number =");
    scanf("%d",&a[i].roll);
    printf("enter gender m/f =");
    scanf("%s",a[i].gender);
    printf("enter marks =");
    scanf("%d",&a[i].marks);
          
  }
  for(i=0;i<n;i++)
  {
  printf("\nstudent %d",i);
    printf("\nname =%s",a[i].name);
     printf("\ngender =%s",a[i].gender);
      printf("\nroll number =%d",a[i].roll);
       printf("\nmarks =%d",a[i].marks);
  }

return 0;



}
