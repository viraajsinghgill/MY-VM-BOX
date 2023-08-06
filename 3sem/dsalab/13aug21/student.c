#include<stdio.h>
struct student
{
   char gender[1];
   char name[30];
   int roll;
   int marks;
};
 int main()
 {
   int n,i;
  
   
   printf("enter how many number of students detail you want to enter :");
   scanf("%d",&n);
   struct student a[n];
   for(i=0;i<n;i++)
   {
      printf("student details :%d\n",i);
      printf("enter name : ");
      scanf(" %s",a[i].name);
            printf("enter gender male(m)/female(f) :");
            scanf(" %s",a[i].gender);
      printf("enter roll number :");
      scanf("%d",&a[i].roll);
      printf("enter marks of 5 subject :");
      scanf("%d",&a[i].marks);
      
   }
   for(i=0;i<n;i++)
   {
     printf("\nstudent %d",i);
     puts(a[i].name);
     printf("\nroll number :%d",a[i].roll);
     printf("\ngender : %s",a[i].gender);
     printf("\nmarks :%d",a[i].marks);
   
   }
   return 0;
 
 
 }
 
