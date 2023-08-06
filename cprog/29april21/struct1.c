#include<stdio.h>
struct address
{
 char phone[15];
 char city[25];
 int pin;
};

 struct emp
 {
  char name[25];
  struct address adr;
  
 };

int main()
{
 struct emp e={"jeru","531046","nagpur",10};
 printf("\nname=%s phone=%s",e.name,e.adr.phone);
 printf("\ncity=%s pin=%d ",e.adr.city,e.adr.pin);
 return(0);
}
