#include<stdio.h>
#include<string.h>
struct player
{
char name[20];

};
char* f1(struct player *p)
{
  strcpy(p->name,"abc");
  return p->name;
}

int main()
{
  struct player p;
  strcpy(p.name,"xyz");
  printf("%s%s",p.name,f1(&p));

return(0);
}
