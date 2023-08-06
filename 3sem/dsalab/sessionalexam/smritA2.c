#include<stdio.h>
#include<string.h>
void concat(char[], char[]);
int main() {
	char s1[50], s2[30];
	printf("\nEnter String 1 :");
	gets(s1);
	printf("\nEnter String 2 :");
	gets(s2);
	concat(s1, s2);
	printf("\nConcated string is :%s", s1);
	return (0);
}
void concat(char s1[], char s2[]) {
	int i, j;
	i = strlen(s1);
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
}
#include <stdio.h>
int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
   char string[20],temp;
   int i,length;
   printf("Enter String : ");
   scanf("%s",string);
   length=strlen(string)-1;
   for(i=0;i<strlen(string)/2;i++){
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
   }
   printf("\nReverse string :%s",string);
   getch();
}
4)#include <stdio.h>
 
void main()
{
    char string[50];
    int i, length = 0;
 
    printf("Enter a string \n");
    gets(string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of a string is the number of characters in it \n");
    printf("So, the length of %s = %d\n", string, length);
}
