#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
} *head;
void create ();
void find ();
int main ()
	  {
	  create (); 
	  find (); 
	  return 0;
	  
	  }
void create ()
{
  int k, n;
  struct Node *p;
  printf ("Enter number of nodes: ");
  scanf ("%d", &n);
  for (k = 0; k < n; k++)
    {
      if (k == 0)
	{
	  head = (struct Node *) malloc (sizeof (struct Node));
	  p = head;
	}
      else
	{
	  p->next = (struct Node *) malloc (sizeof (struct Node));
	  p = p->next;
	}
      printf ("Enter data: ");
      scanf ("%d", &p->data);
    }
  p->next = NULL;
}

void find ()
{
  int l = head->data, s = head->data;
  if (head == NULL)
    {
      printf ("Empty List\n");
      return;
    }
  else
   { 
   while (head != NULL)
      {
	if (l < head->data)
	l = head->data;
        if (s > head->data) 
      	s = head->data;
        head = head->next;
      }
	printf ("\nMax data= %d", l);
        printf("\nMin data= %d",s);
 }
 }
