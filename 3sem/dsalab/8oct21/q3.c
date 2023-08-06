#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char str[MAX];
int top = -1;
void pushChar(char item) {
if(top != MAX) {
top=top+1;
str[top]=item;
}
}
char popChar() {
int item;
if(top != -1) {
item = str[top];
top=top-1;
return item;
}
}
int main() {
char str[MAX];
int i;
printf("Input a string: ");
scanf("%[^\n]", str);

for(i=0; i<strlen(str); i++) 
pushChar(str[i]);
for(i=0; i<strlen(str); i++) 
str[i]=popChar();
str[i] = '\0';
printf("Reversed String is: %s\n", str);

return 0;
}


