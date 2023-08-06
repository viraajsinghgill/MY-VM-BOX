//#include <bits/stdc++.h>
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class replace_String
{
    string original;
    string find;
    string replace;

public:
    replace_String()
    {
        string original = "String is empty";
        string find = "";
        string replace = "";
    }
    replace_String(string orig)
    {
        string original = orig;
        string find = "";
        string replace = "";
    }
    void set_data()
    {
        cout << "Enter string:- ";
        getline(cin, original);
    }

    void display()
    {
        cout << "\n\nThe string is :- " << original << endl;
    }

    void replace_my_String()
    {
        string s, sReplace;
        cout << "Enter the string which part to replace:- ";
        getline(cin, s);

        cout << "Enter the replaced string:- ";
        getline(cin, sReplace);

        original = regex_replace(original, regex(s), sReplace);

        cout << "\n\nResultant String is:- " << original << endl;
    }
};

int main()
{
    replace_String my_str;
    my_str.set_data();
    my_str.replace_my_String();

    return 0;
}
