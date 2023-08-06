//#include<bits/stdc++.h>

#include<iostream>
using namespace std;
int LPS (string s, int low, int high)
{
    if(low == high)
        return 1;
    if(high - low == 1)
    {
        if(s[low] == s[high])
            return 2;
        else 
            return 1;
    }
    if(s[low] == s[high])
        return 2 + LPS (s, low + 1, high - 1);
    return max( LPS (s, low, high - 1), LPS(s, low + 1, high));
}
int main()
{
    string s;
    cout << "Enter a word : ";
    cin >> s;
    int len = LPS (s, 0, s.length() - 1);
    cout << "Length of Longest palindromic subsequence of " << s << " is " << len << endl;
    return 0;
}
