#include<iostream>
using namespace std;

int max (int x, int y) {
   return (x > y)? x : y;
}

int palSubseqLen(string str) {
   int n = str.size();
   int lenTable[n][n]; // Create a table to store results of subproblems

   for (int i = 0; i < n; i++)
      lenTable[i][i] = 1; //when string length is 1, it is palindrome

   for (int col=2; col<=n; col++) {
      for (int i=0; i<n-col+1; i++) {
         int j = i+col-1;
         if (str[i] == str[j] && col == 2)
            lenTable[i][j] = 2;
         else if (str[i] == str[j])
            lenTable[i][j] = lenTable[i+1][j-1] + 2;
         else
            lenTable[i][j] = max(lenTable[i][j-1], lenTable[i+1][j]);
      }
   }
   return lenTable[0][n-1];
}

int main() {
   string sequence = "ABCDEEAB";
   int n = sequence.size();
   cout << "The length of the longest palindrome subsequence is: " << palSubseqLen(sequence);
}
