#include<stdio.h>
struct employe{
char name[50];
char gender[1];
char des[50];
char debt[50];
int basic;

};
int main()
{
  int n,i;
  float hra ,da;
  printf("enter number of employee : ");
  scanf("%d",&n);
  float gross[n];
  struct employe a[n];
  for(i=0;i<n;i++)
  {
   printf("employee details :%d\n",i);
      printf("enter name : ");
      scanf("%s",a[i].name);
      printf("enter gender male(m)/female(f) :");
      scanf("%s",a[i].gender);
      printf("enter desigination: ");
      scanf("%s",a[i].des);
      printf("enter department: ");
      scanf("%s",a[i].debt);
      printf("enter basic salary: ");
      scanf("%d",&a[i].basic);
      hra=a[i].basic*0.25;
      da=a[i].basic*0.75;
      gross[n]=a[i].basic+hra+da;          
   
     }
     for(i=0;i<n;i++)
  {
  printf("\nname: %s",a[i].name);
  printf("\ngender: %s",a[i].gender);
  printf("\ndesignation: %s",a[i].des);
  printf("\ndepartment: %s",a[i].debt);
  printf("\nbasic salary :%d",a[i].basic);
  printf("\ngross salary: %f",gross[i]);
  
}
return 0;
}
