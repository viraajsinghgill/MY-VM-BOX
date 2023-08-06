#include <stdio.h>
#include <string.h>
int main() {
    char name[100],temp[1000],out[1000];
    int k=5,count=0; //k=last digit of your roll
    printf("Enter Name: ");
    scanf("%s", name);
    for (int i = 0, j=0; name[i]!='\0'; ++i,j+=6) {
        char ch=name[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;
        temp[j]=ch;
        if(name[i+1]!=ch)
        for(int l=1;l<=k;l++){
            temp[j+l]='\0';
            
        }
    }
    for(int i=0;temp[i]!='\0';i++)
        if(temp[i]==' ')
            out[i]="5"; //first letter of your name
        else
            out[i]=temp[i];
    printf("No. of vowels : %d\n",count);
    printf("Output : %s",out);
    return 0;
}
