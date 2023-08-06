#include<stdio.h>
struct employ
{
  char name[20],des[50],dep[50],gender[1];
  int basic;

};
int main()
{
  int n,i;
  float hra ,da;
  printf("enetr number of employe :");
  scanf("%d",&n);
  float gross[n];
  struct employ a[n];
  for(i=0;i<n;i++)
  { printf("employee =%d",i);
    printf("\nenter name=");
    scanf("%s",a[i].name);
     printf("enter gender male(m)/female(f) :");
      scanf("%s",a[i].gender);
      printf("enter desigination: ");
      scanf("%s",a[i].des);
      printf("enter department: ");
      scanf("%s",a[i].dep);
    printf("enter basic slary");
    scanf("%d",&a[i].basic);
    hra=a[i].basic*0.25;
    da=a[i].basic*0.75;
    gross[i]=hra+da+a[i].basic;
    
  }
  for(i=0;i<n;i++)
  { printf("\nemployee =%d",i);
    printf("\nname=%s",a[i].name);
    printf("\ngender: %s",a[i].gender);
  printf("\ndesignation: %s",a[i].des);
  printf("\ndepartment: %s",a[i].dep);
  printf("\nbasic salary :%d",a[i].basic);
    printf("\ngross salary=%f",gross[i]);
    
  }
  return 0;
  
}
