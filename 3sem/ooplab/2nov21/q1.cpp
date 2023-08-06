#include<iostream>
#include<string.h>
using namespace std;

class String{
    public:
    char str[50];
    void operator+(String s1);
    void operator==(String s1);
    void operator=(String s1);
    void length();

    String(){
        strcpy(str, " ");
    }
    String(char s[]){
        strcpy(str, s);
    }
};

void String::operator+(String s1){
    if(strlen(str)+strlen(s1.str) < 50){
        strcat(str, s1.str);
        cout<<"Concatenation of S1 and s2 is : "<<str<<endl;
    }else{
        cout<<"Memory overflow"<<endl;
    }
}

void String::operator==(String s1){
    if(strcmp(str, s1.str) == 0)
        cout<<"Equality"<<endl;
    else
        cout<<"Not equal"<<endl;
}

void String::operator=(String s1){
    strcpy(str, s1.str);
    cout<<"String updated as : "<<str<<endl;
}

void String::length(){
    int res = strlen(str);
    cout<<"Length is : "<<res<<endl;
}

int main(){
    String s1, s2;
    cout<<"Enter the string s1 : ";
    cin>>s1.str;
    cout<<"Enter the string s2 : ";
    cin>>s2.str;
    s1.length();
    s1+s2;
    s1==s2;
    s1=s2;
    s2.length();

    return 0;
}
